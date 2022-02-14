
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int int16_t ;



void FUNC_0(
        int16_t* VAR_0,
        const uint8_t *VAR_1,
        const uint8_t *VAR_2,
        int VAR_3,
        int VAR_4,
        int VAR_5,
        int VAR_6)
{
    int VAR_7 = (1 << VAR_6) - 1;
    int VAR_8;

    for(VAR_8=0; VAR_8<VAR_5; VAR_8++)
    {
        VAR_0[VAR_8 + VAR_1[VAR_3 & VAR_7]] +=
                (VAR_4 & 1) ? 8191 : -8192;

        VAR_3 >>= VAR_6;
        VAR_4 >>= 1;
    }

    VAR_0[VAR_2[VAR_3]] += (VAR_4 & 1) ? 8191 : -8192;
}
