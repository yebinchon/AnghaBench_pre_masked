
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*,int) ;

char *FUNC_1(char *VAR_0, int VAR_1, int VAR_2)
{
    int VAR_3 = 0, VAR_4 = 0;
    do
    {
        VAR_3 = FUNC_0(VAR_2, VAR_0 + VAR_4, 1);
        VAR_4 = VAR_3 == 1 ? VAR_4 + 1 : VAR_4;
    }
    while (VAR_3 == 1 && VAR_4 < VAR_1 && *(VAR_0 + (VAR_4 - 1)) != '\n');

    return VAR_4 == 0 ? ((void*)0) : VAR_0;
}
