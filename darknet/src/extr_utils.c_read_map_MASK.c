
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int * FUNC_3 (char*,char*) ;
 int* FUNC_4 (int*,int) ;

int *FUNC_5(char *VAR_0)
{
    int VAR_1 = 0;
    int *VAR_2 = 0;
    char *VAR_3;
    FILE *VAR_4 = FUNC_3(VAR_0, "r");
    if(!VAR_4) FUNC_2(VAR_0);
    while((VAR_3=FUNC_1(VAR_4))){
        ++VAR_1;
        VAR_2 = FUNC_4(VAR_2, VAR_1*sizeof(int));
        VAR_2[VAR_1-1] = FUNC_0(VAR_3);
    }
    return VAR_2;
}
