
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;



const uint8_t *FUNC_0(const uint8_t *VAR_0,
                                         const uint8_t *VAR_1,
                                         int VAR_2)
{
    unsigned int VAR_3 = 0;

    if (VAR_1 - VAR_0 < VAR_2)
        return ((void*)0);
    while (VAR_2--)
        VAR_3 = (VAR_3 << 8) | *VAR_0++;

    if (VAR_3 > VAR_1 - VAR_0)
        return ((void*)0);

    return VAR_0 + VAR_3;
}
