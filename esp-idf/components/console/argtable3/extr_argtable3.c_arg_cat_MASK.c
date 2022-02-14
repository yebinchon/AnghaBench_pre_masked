
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static
void FUNC_0(char * *VAR_0, const char *VAR_1, size_t *VAR_2)
{
    char *VAR_3 = *VAR_0;
    char *VAR_4 = VAR_3 + *VAR_2;


    while(VAR_3 < VAR_4 && *VAR_3 != 0)
        VAR_3++;


    while(VAR_3 < VAR_4 && *VAR_1 != 0)
        *VAR_3++ = *VAR_1++;


    *VAR_3 = 0;


    *VAR_2 = VAR_4 - VAR_3;
    *VAR_0 = VAR_3;
}
