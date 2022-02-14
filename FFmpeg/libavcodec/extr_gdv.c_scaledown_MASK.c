
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;



__attribute__((used)) static void FUNC_0(uint8_t *VAR_0, const uint8_t *VAR_1, int VAR_2)
{
    int VAR_3;
    for (VAR_3 = 0; VAR_3 < VAR_2 - 7; VAR_3+=8) {
        VAR_0[VAR_3 + 0] = VAR_1[2*VAR_3 + 0];
        VAR_0[VAR_3 + 1] = VAR_1[2*VAR_3 + 2];
        VAR_0[VAR_3 + 2] = VAR_1[2*VAR_3 + 4];
        VAR_0[VAR_3 + 3] = VAR_1[2*VAR_3 + 6];
        VAR_0[VAR_3 + 4] = VAR_1[2*VAR_3 + 8];
        VAR_0[VAR_3 + 5] = VAR_1[2*VAR_3 +10];
        VAR_0[VAR_3 + 6] = VAR_1[2*VAR_3 +12];
        VAR_0[VAR_3 + 7] = VAR_1[2*VAR_3 +14];
    }
    for (; VAR_3 < VAR_2; VAR_3++) {
        VAR_0[VAR_3] = VAR_1[2*VAR_3];
    }
}
