
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;



uint32_t FUNC_0(uint32_t VAR_0, const uint8_t *VAR_1, size_t VAR_2)
{
    uint32_t VAR_3;
    bool VAR_4;
    uint8_t VAR_5;

    while (VAR_2--) {
        VAR_5 = *VAR_1++;
        for (VAR_3 = 0x80; VAR_3 > 0; VAR_3 >>= 1) {
            VAR_4 = VAR_0 & 0x80000000;
            if (VAR_5 & VAR_3) {
                VAR_4 = !VAR_4;
            }
            VAR_0 <<= 1;
            if (VAR_4) {
                VAR_0 ^= 0x04c11db7;
            }
        }
    }
    return VAR_0;
}
