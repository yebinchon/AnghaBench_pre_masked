
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int16_t ;



__attribute__((used)) static void FUNC_0(int16_t *VAR_0)
{
    int VAR_1;
    for (VAR_1 = 0; VAR_1 < 4; VAR_1++) {
        const int VAR_2 = (VAR_0[VAR_1*4 + 0] + VAR_0[VAR_1*4 + 3]) * 8;
        const int VAR_3 = (VAR_0[VAR_1*4 + 1] + VAR_0[VAR_1*4 + 2]) * 8;
        const int VAR_4 = (VAR_0[VAR_1*4 + 1] - VAR_0[VAR_1*4 + 2]) * 8;
        const int VAR_5 = (VAR_0[VAR_1*4 + 0] - VAR_0[VAR_1*4 + 3]) * 8;
        VAR_0[VAR_1*4 + 0] = VAR_2 + VAR_3;
        VAR_0[VAR_1*4 + 1] = (VAR_4 * 2217 + VAR_5 * 5352 + 14500) >> 12;
        VAR_0[VAR_1*4 + 2] = VAR_2 - VAR_3;
        VAR_0[VAR_1*4 + 3] = (VAR_5 * 2217 - VAR_4 * 5352 + 7500) >> 12;
    }
    for (VAR_1 = 0; VAR_1 < 4; VAR_1++) {
        const int VAR_6 = VAR_0[VAR_1 + 0*4] + VAR_0[VAR_1 + 3*4];
        const int VAR_7 = VAR_0[VAR_1 + 1*4] + VAR_0[VAR_1 + 2*4];
        const int VAR_8 = VAR_0[VAR_1 + 1*4] - VAR_0[VAR_1 + 2*4];
        const int VAR_9 = VAR_0[VAR_1 + 0*4] - VAR_0[VAR_1 + 3*4];
        VAR_0[VAR_1 + 0*4] = (VAR_6 + VAR_7 + 7) >> 4;
        VAR_0[VAR_1 + 1*4] = ((VAR_8 * 2217 + VAR_9 * 5352 + 12000) >> 16) + !!VAR_9;
        VAR_0[VAR_1 + 2*4] = (VAR_6 - VAR_7 + 7) >> 4;
        VAR_0[VAR_1 + 3*4] = (VAR_9 * 2217 - VAR_8 * 5352 + 51000) >> 16;
    }
}
