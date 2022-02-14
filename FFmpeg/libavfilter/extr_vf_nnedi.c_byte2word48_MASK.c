
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int int16_t ;



__attribute__((used)) static void FUNC_0(const uint8_t *VAR_0, const int VAR_1, float *VAR_2)
{
    int16_t *VAR_3 = (int16_t *)VAR_2;
    int VAR_4, VAR_5;

    for (VAR_4 = 0; VAR_4 < 4; VAR_4++)
        for (VAR_5 = 0; VAR_5 < 12; VAR_5++)
            VAR_3[VAR_4 * 12 + VAR_5] = VAR_0[VAR_4 * VAR_1 * 2 + VAR_5];
}
