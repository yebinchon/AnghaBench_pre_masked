
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;



void FUNC_0(uint8_t * VAR_0, uint8_t* VAR_1, uint32_t VAR_2)
{
    uint32_t VAR_3 = 0;
    uint32_t VAR_4 = 0;







    for (int VAR_5 = 0; VAR_5 < VAR_2; VAR_5 += 4) {
        VAR_4 = ((((uint16_t)(VAR_1[VAR_5 + 3] & 0xf) << 8) | ((VAR_1[VAR_5 + 2]))));
        VAR_0[VAR_3++] = 0;
        VAR_0[VAR_3++] = 0;
        VAR_0[VAR_3++] = 0;
        VAR_0[VAR_3++] = VAR_4 * 256 / 4096;
    }

}
