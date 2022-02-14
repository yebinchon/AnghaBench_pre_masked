
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (char*) ;

void FUNC_1(char *VAR_0)
{
    size_t VAR_1;
    size_t VAR_2 = FUNC_0(VAR_0);
    size_t VAR_3 = 0;
    for(VAR_1 = 0; VAR_1 < VAR_2; ++VAR_1){
        char VAR_4 = VAR_0[VAR_1];
        if(VAR_4==' '||VAR_4=='\t'||VAR_4=='\n') ++VAR_3;
        else VAR_0[VAR_1-VAR_3] = VAR_4;
    }
    VAR_0[VAR_2-VAR_3] = '\0';
}
