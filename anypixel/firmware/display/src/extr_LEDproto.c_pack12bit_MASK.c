
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;



void FUNC_0(uint8_t *VAR_0, int VAR_1, uint16_t VAR_2) {
    int VAR_3 = (VAR_1 * 12) / 8;
    int VAR_4 = 4-(VAR_1 * 12) % 8;

    uint16_t VAR_5 = (VAR_2 & 0xFFF) << VAR_4;
    uint16_t VAR_6 = ~(0x0FFF << VAR_4);


    VAR_0[VAR_3] &= VAR_6 >> 8;
    VAR_0[VAR_3+1] &= VAR_6 & 0xFF;

    VAR_0[VAR_3] |= VAR_5 >> 8;
    VAR_0[VAR_3+1] |= VAR_5 & 0xFF;
}
