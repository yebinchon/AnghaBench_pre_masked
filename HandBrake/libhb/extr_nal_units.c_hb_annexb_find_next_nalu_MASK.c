
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;



uint8_t* FUNC_0(const uint8_t *VAR_0, size_t *VAR_1)
{
    uint8_t *VAR_2 = ((void*)0);
    uint8_t *VAR_3 = (uint8_t*)VAR_0;
    uint8_t *VAR_4 = (uint8_t*)VAR_0 + *VAR_1;


    while (VAR_4 - VAR_3 > 3)
    {
        if (!VAR_3[0] && !VAR_3[1] && VAR_3[2] == 1)
        {
            VAR_2 = (VAR_3 += 3);
            break;
        }
        VAR_3++;
    }

    if (VAR_2 == ((void*)0))
    {
        *VAR_1 = 0;
        return ((void*)0);
    }
    while (VAR_4 - VAR_3 > 3)
    {
        if (!VAR_3[0] && !VAR_3[1] && (!VAR_3[2] || VAR_3[2] == 1))
        {
            VAR_4 = VAR_3;
            break;
        }
        VAR_3++;
    }

    *VAR_1 = VAR_4 - VAR_2;
    return VAR_2;
}
