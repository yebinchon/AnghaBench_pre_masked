
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;



void FUNC_0(const uint8_t *VAR_0, uint8_t *VAR_1, int VAR_2)
{
    uint16_t VAR_3, VAR_4, VAR_5, VAR_6;
    uint16_t *VAR_7 = (uint16_t *)VAR_1;
    const uint16_t *VAR_8 = (const uint16_t *)VAR_0;
    const uint16_t *VAR_9 = VAR_8 + VAR_2 / 2;

    while (VAR_8 < VAR_9) {
        VAR_3 = *VAR_8++;
        VAR_4 = VAR_3 & 0xF00;
        VAR_5 = VAR_3 & 0x0F0;
        VAR_6 = VAR_3 & 0x00F;
        VAR_4 = (VAR_4 << 3) | ((VAR_4 & 0x800) >> 1);
        VAR_5 = (VAR_5 << 2) | ((VAR_5 & 0x080) >> 2);
        VAR_6 = (VAR_6 << 1) | ( VAR_6 >> 3);
        *VAR_7++ = VAR_4 | VAR_5 | VAR_6;
    }
}
