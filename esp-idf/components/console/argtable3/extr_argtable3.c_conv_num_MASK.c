
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(const char * *VAR_0, int *VAR_1, int VAR_2, int VAR_3)
{
    int VAR_4 = 0;


    int VAR_5 = VAR_3;

    if (**VAR_0 < '0' || **VAR_0 > '9')
        return (0);

    do {
        VAR_4 *= 10;
        VAR_4 += *(*VAR_0)++ - '0';
        VAR_5 /= 10;
    } while ((VAR_4 * 10 <= VAR_3) && VAR_5 && **VAR_0 >= '0' && **VAR_0 <= '9');

    if (VAR_4 < VAR_2 || VAR_4 > VAR_3)
        return (0);

    *VAR_1 = VAR_4;
    return (1);
}
