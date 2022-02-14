
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef unsigned int uint16_t ;



void FUNC_0(const uint8_t *VAR_0, uint8_t *VAR_1, int VAR_2)
{
    uint16_t *VAR_3 = (uint16_t *)VAR_1;
    uint16_t *VAR_4 = (uint16_t *)VAR_0;
    int VAR_5, VAR_6 = VAR_2 >> 1;

    for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++) {
        unsigned VAR_7 = VAR_4[VAR_5];
        VAR_3[VAR_5] = (VAR_7 << 8 | VAR_7 & 0xF0 | VAR_7 >> 8) & 0xFFF;
    }
}
