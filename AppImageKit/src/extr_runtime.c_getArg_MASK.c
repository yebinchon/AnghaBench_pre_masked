
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
char* FUNC_0(int VAR_0, char *VAR_1[],char VAR_2)
{
    int VAR_3;
    for (VAR_3=1; VAR_3<VAR_0; ++VAR_3)
        if ((VAR_1[VAR_3][0]=='-') && (VAR_1[VAR_3][1]==VAR_2))
            return &(VAR_1[VAR_3][2]);
        return ((void*)0);
}
