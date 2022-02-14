
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (char*) ;

void FUNC_1(char *VAR_0, char VAR_1)
{
    size_t VAR_2;
    size_t VAR_3 = FUNC_0(VAR_0);
    size_t VAR_4 = 0;
    for(VAR_2 = 0; VAR_2 < VAR_3; ++VAR_2){
        char VAR_5 = VAR_0[VAR_2];
        if(VAR_5==VAR_1) ++VAR_4;
        else VAR_0[VAR_2-VAR_4] = VAR_5;
    }
    VAR_0[VAR_3-VAR_4] = '\0';
}
