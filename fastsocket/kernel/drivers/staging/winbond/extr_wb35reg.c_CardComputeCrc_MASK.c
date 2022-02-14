
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef size_t u32 ;



u32
FUNC_0(u8 * VAR_0, u32 VAR_1)
{
    u32 VAR_2, VAR_3;
    u32 VAR_4, VAR_5;
    u8 VAR_6;

    VAR_2 = 0xffffffff;

    for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {

        VAR_6 = VAR_0[VAR_4];

        for (VAR_5 = 0; VAR_5 < 8; VAR_5++) {

            VAR_3 = ((VAR_2 & 0x80000000) ? 1 : 0) ^ (VAR_6 & 0x01);
            VAR_2 <<= 1;
            VAR_6 >>= 1;

            if (VAR_3) {
                VAR_2 =(VAR_2 ^ 0x04c11db6) | VAR_3;
            }
        }
    }

    return VAR_2;
}
