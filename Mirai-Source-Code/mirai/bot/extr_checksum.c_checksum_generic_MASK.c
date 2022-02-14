
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef unsigned long uint16_t ;



uint16_t FUNC_0(uint16_t *VAR_0, uint32_t VAR_1)
{
    register unsigned long VAR_2 = 0;

    for (VAR_2 = 0; VAR_1 > 1; VAR_1 -= 2)
        VAR_2 += *VAR_0++;
    if (VAR_1 == 1)
        VAR_2 += (char)*VAR_0;

    VAR_2 = (VAR_2 >> 16) + (VAR_2 & 0xFFFF);
    VAR_2 += (VAR_2 >> 16);

    return ~VAR_2;
}
