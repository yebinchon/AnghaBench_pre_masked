
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char** FUNC_0 (int,int) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,char*,char*) ;

char **FUNC_3(char **VAR_0, int VAR_1, char *VAR_2, char *VAR_3)
{
    char **VAR_4 = FUNC_0(VAR_1, sizeof(char*));
    int VAR_5;
    for(VAR_5 = 0; VAR_5 < VAR_1; ++VAR_5){
        char VAR_6[4096];
        FUNC_2(VAR_0[VAR_5], VAR_2, VAR_3, VAR_6);
        VAR_4[VAR_5] = FUNC_1(VAR_6);
    }
    return VAR_4;
}
