
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;



__attribute__((used)) static void FUNC_0(uint8_t *VAR_0, int VAR_1)
{
    int VAR_2, VAR_3, VAR_4, VAR_5;
    int VAR_6[64];

    for (VAR_2 = 0; VAR_2 < 8; VAR_2++) {
        VAR_6[VAR_2] = 4 * VAR_0[VAR_2];
        VAR_6[VAR_2 + 7 * 8] = 4 * VAR_0[VAR_2 + 7 * VAR_1];
    }
    for (VAR_3 = 1; VAR_3 < 7; VAR_3++) {
        for (VAR_2 = 0; VAR_2 < 8; VAR_2++) {
            VAR_4 = VAR_3 * VAR_1 + VAR_2;
            VAR_5 = VAR_3 * 8 + VAR_2;
            VAR_6[VAR_5] = VAR_0[VAR_4 - VAR_1] + 2 * VAR_0[VAR_4] + VAR_0[VAR_4 + VAR_1];
        }
    }

    for (VAR_3 = 0; VAR_3 < 8; VAR_3++) {
        VAR_0[VAR_3 * VAR_1] = (VAR_6[VAR_3 * 8] + 2) >> 2;
        VAR_0[VAR_3 * VAR_1 + 7] = (VAR_6[VAR_3 * 8 + 7] + 2) >> 2;
        for (VAR_2 = 1; VAR_2 < 7; VAR_2++) {
            VAR_4 = VAR_3 * VAR_1 + VAR_2;
            VAR_5 = VAR_3 * 8 + VAR_2;
            VAR_0[VAR_4] = (VAR_6[VAR_5 - 1] + 2 * VAR_6[VAR_5] + VAR_6[VAR_5 + 1] + 8) >> 4;
        }
    }
}
