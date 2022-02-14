
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 char** FUNC_0 (size_t,int) ;
 int FUNC_1 (int *) ;
 char* FUNC_2 (int *) ;
 int * FUNC_3 (char*,char*) ;
 char** FUNC_4 (char**,size_t) ;
 scalar_t__ FUNC_5 (char*,char*) ;

char **FUNC_6(char *VAR_0, size_t *VAR_1)
{
    size_t VAR_2 = 512;
    size_t VAR_3 = 0;
    FILE *VAR_4 = FUNC_3(VAR_0, "r");
    char **VAR_5 = FUNC_0(VAR_2, sizeof(char *));
    char *VAR_6;
    while((VAR_6=FUNC_2(VAR_4)) != 0){
        ++VAR_3;
        if(VAR_3 > VAR_2){
            VAR_2 = VAR_2*2;
            VAR_5 = FUNC_4(VAR_5, VAR_2*sizeof(char *));
        }
        if(0==FUNC_5(VAR_6, "<NEWLINE>")) VAR_6 = "\n";
        VAR_5[VAR_3-1] = VAR_6;
    }
    FUNC_1(VAR_4);
    VAR_5 = FUNC_4(VAR_5, VAR_3*sizeof(char *));
    *VAR_1 = VAR_3;
    return VAR_5;
}
