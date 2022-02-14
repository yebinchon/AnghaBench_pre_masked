
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ int16_t ;



void FUNC_0(int16_t *VAR_0, uint8_t *VAR_1,
                      const uint8_t *VAR_2, int VAR_3)
{
    int VAR_4;
    int16_t VAR_5[64];

    if (VAR_3 <= 0)
        return;




    for (VAR_4 = 0; VAR_4 <= VAR_3; VAR_4++) {
        const int VAR_6 = VAR_2[VAR_4];
        VAR_5[VAR_6] = VAR_0[VAR_6];
        VAR_0[VAR_6] = 0;
    }

    for (VAR_4 = 0; VAR_4 <= VAR_3; VAR_4++) {
        const int VAR_7 = VAR_2[VAR_4];
        const int VAR_8 = VAR_1[VAR_7];
        VAR_0[VAR_8] = VAR_5[VAR_7];
    }
}
