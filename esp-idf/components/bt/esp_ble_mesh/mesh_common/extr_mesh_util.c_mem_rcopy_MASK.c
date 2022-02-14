
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8_t ;
typedef int u16_t ;



void FUNC_0(u8_t *VAR_0, u8_t const *VAR_1, u16_t VAR_2)
{
    VAR_1 += VAR_2;
    while (VAR_2--) {
        *VAR_0++ = *--VAR_1;
    }
}
