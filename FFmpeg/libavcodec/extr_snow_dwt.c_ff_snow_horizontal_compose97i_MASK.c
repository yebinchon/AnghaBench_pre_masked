
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IDWTELEM ;



void FUNC_0(IDWTELEM *VAR_0, IDWTELEM *VAR_1, int VAR_2)
{
    const int VAR_3 = (VAR_2 + 1) >> 1;
    int VAR_4;

    VAR_1[0] = VAR_0[0] - ((3 * VAR_0[VAR_3] + 2) >> 2);
    for (VAR_4 = 1; VAR_4 < (VAR_2 >> 1); VAR_4++) {
        VAR_1[2 * VAR_4] = VAR_0[VAR_4] - ((3 * (VAR_0[VAR_4 + VAR_3 - 1] + VAR_0[VAR_4 + VAR_3]) + 4) >> 3);
        VAR_1[2 * VAR_4 - 1] = VAR_0[VAR_4 + VAR_3 - 1] - VAR_1[2 * VAR_4 - 2] - VAR_1[2 * VAR_4];
    }
    if (VAR_2 & 1) {
        VAR_1[2 * VAR_4] = VAR_0[VAR_4] - ((3 * VAR_0[VAR_4 + VAR_3 - 1] + 2) >> 2);
        VAR_1[2 * VAR_4 - 1] = VAR_0[VAR_4 + VAR_3 - 1] - VAR_1[2 * VAR_4 - 2] - VAR_1[2 * VAR_4];
    } else
        VAR_1[2 * VAR_4 - 1] = VAR_0[VAR_4 + VAR_3 - 1] - 2 * VAR_1[2 * VAR_4 - 2];

    VAR_0[0] = VAR_1[0] + ((2 * VAR_1[0] + VAR_1[1] + 4) >> 3);
    for (VAR_4 = 2; VAR_4 < VAR_2 - 1; VAR_4 += 2) {
        VAR_0[VAR_4] = VAR_1[VAR_4] + ((4 * VAR_1[VAR_4] + VAR_1[VAR_4 - 1] + VAR_1[VAR_4 + 1] + 8) >> 4);
        VAR_0[VAR_4 - 1] = VAR_1[VAR_4 - 1] + ((3 * (VAR_0[VAR_4 - 2] + VAR_0[VAR_4])) >> 1);
    }
    if (VAR_2 & 1) {
        VAR_0[VAR_4] = VAR_1[VAR_4] + ((2 * VAR_1[VAR_4] + VAR_1[VAR_4 - 1] + 4) >> 3);
        VAR_0[VAR_4 - 1] = VAR_1[VAR_4 - 1] + ((3 * (VAR_0[VAR_4 - 2] + VAR_0[VAR_4])) >> 1);
    } else
        VAR_0[VAR_4 - 1] = VAR_1[VAR_4 - 1] + 3 * VAR_0[VAR_4 - 2];
}
