
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,float*) ;

void FUNC_1(char *VAR_0, float *VAR_1, int VAR_2)
{
    int VAR_3;
    if(!VAR_0) return;
    char *VAR_4 = VAR_0;
    char *VAR_5 = VAR_0;
    int VAR_6 = 0;
    for(VAR_3 = 0; VAR_3 < VAR_2 && !VAR_6; ++VAR_3){
        while(*++VAR_5 !='\0' && *VAR_5 != ',');
        if(*VAR_5 == '\0') VAR_6 = 1;
        *VAR_5 = '\0';
        FUNC_0(VAR_4, "%g", &VAR_1[VAR_3]);
        VAR_4 = VAR_5+1;
    }
}
