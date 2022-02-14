
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef float uint16_t ;



__attribute__((used)) static void FUNC_0(uint8_t *VAR_0, int VAR_1, int VAR_2, float VAR_3, float VAR_4, int VAR_5, int VAR_6)
{
    uint16_t *VAR_7 = (uint16_t *)VAR_0;
    int VAR_8;

    for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8 += VAR_6) {
        VAR_7[0] = VAR_5 * VAR_3 + VAR_7[0] * VAR_4;

        VAR_7 += (VAR_2 / 2) * VAR_6;
    }
}
