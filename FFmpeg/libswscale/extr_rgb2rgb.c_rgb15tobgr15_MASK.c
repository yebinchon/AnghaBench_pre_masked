
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef unsigned int uint16_t ;



void FUNC_0(const uint8_t *VAR_0, uint8_t *VAR_1, int VAR_2)
{
    int VAR_3, VAR_4 = VAR_2 >> 1;

    for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++) {
        unsigned VAR_5 = ((const uint16_t *)VAR_0)[VAR_3];
        unsigned VAR_6 = VAR_5 & 0x7C1F;
        ((uint16_t *)VAR_1)[VAR_3] = (VAR_6 >> 10) | (VAR_5 & 0x3E0) | (VAR_6 << 10);
    }
}
