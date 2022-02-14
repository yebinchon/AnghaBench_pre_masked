
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8_t ;
typedef int u32_t ;
typedef int u16_t ;



void FUNC_0(u8_t* VAR_0, u32_t VAR_1)
{
    u16_t VAR_2;

    for(VAR_2=0; VAR_2<4; VAR_2++)
    {
        *VAR_0++ = (u8_t) (VAR_1 & 0xff);
        VAR_1 >>= 8;
    }
}
