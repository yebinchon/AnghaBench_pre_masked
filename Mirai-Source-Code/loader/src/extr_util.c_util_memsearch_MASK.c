
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int FUNC_0(char *VAR_0, int VAR_1, char *VAR_2, int VAR_3)
{
    int VAR_4, VAR_5 = 0;

    if (VAR_3 > VAR_1)
        return -1;

    for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
    {
        if (VAR_0[VAR_4] == VAR_2[VAR_5])
        {
            if (++VAR_5 == VAR_3)
                return VAR_4 + 1;
        }
        else
            VAR_5 = 0;
    }

    return -1;
}
