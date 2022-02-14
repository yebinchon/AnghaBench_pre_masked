
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;



__attribute__((used)) static void FUNC_0(const uint8_t *VAR_0, uint8_t *VAR_1, int VAR_2,
                             const uint8_t *VAR_3)
{
    int VAR_4;

    for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {

        VAR_1[0] = VAR_3[VAR_0[VAR_4 << 1] * 4 + 0];
        VAR_1[1] = VAR_3[VAR_0[VAR_4 << 1] * 4 + 1];
        VAR_1[2] = VAR_3[VAR_0[VAR_4 << 1] * 4 + 2];
        VAR_1 += 3;
    }
}
