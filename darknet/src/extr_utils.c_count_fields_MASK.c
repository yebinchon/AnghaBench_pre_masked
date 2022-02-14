
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int FUNC_0(char *VAR_0)
{
    int VAR_1 = 0;
    int VAR_2 = 0;
    char *VAR_3;
    for(VAR_3 = VAR_0; !VAR_2; ++VAR_3){
        VAR_2 = (*VAR_3 == '\0');
        if(*VAR_3 == ',' || VAR_2) ++VAR_1;
    }
    return VAR_1;
}
