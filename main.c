#include<stdio.h>
#include<stdlib.h>

#define BUFFER 512

void print_semi(){
    FILE *semi_p;
    semi_p = fopen("./semi.txt","r");
    char line[BUFFER];
    while(fgets(line,BUFFER,semi_p) != NULL){
        printf("%s",line);
    }
    fclose(semi_p);
}

int main(int argc,char *argv[]){
    printf("み～～～～～ん\n    み～～～～～～ん\n");
    int sum=0;
    int min = atoi(argv[1]);
    for(int i = 1; i < argc; i++){
        sum += atoi(argv[i]);
        if(min > atoi(argv[i])){
            min = atoi(argv[i]);
        }
    }
    printf("      mean : %lf\n",(double)sum/(argc-1));
    printf("           min : %d\n",min);
    print_semi();
    return 0;
}
