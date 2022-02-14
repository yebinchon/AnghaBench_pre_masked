
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;



__attribute__((used)) static inline void FUNC_0(const uint8_t *VAR_0, uint8_t *VAR_1, int VAR_2,
                              int VAR_3, int VAR_4, int VAR_5)
{
    int VAR_6, VAR_7;

    VAR_1[0] = VAR_0[0];


    for (VAR_6 = 0; VAR_6 < VAR_2 - 1; VAR_6++) {
        VAR_1[2 * VAR_6 + 1] = (3 * VAR_0[VAR_6] + VAR_0[VAR_6 + 1]) >> 2;
        VAR_1[2 * VAR_6 + 2] = (VAR_0[VAR_6] + 3 * VAR_0[VAR_6 + 1]) >> 2;
    }
    VAR_1[2 * VAR_2 - 1] = VAR_0[VAR_2 - 1];

    VAR_1 += VAR_5;

    for (VAR_7 = 1; VAR_7 < VAR_3; VAR_7++) {
        const int VAR_8 = 1;

        VAR_1[0] = (VAR_0[0] * 3 + VAR_0[VAR_4]) >> 2;
        VAR_1[VAR_5] = (VAR_0[0] + 3 * VAR_0[VAR_4]) >> 2;

        for (VAR_6 = VAR_8 - 1; VAR_6 < VAR_2 - 1; VAR_6++) {
            VAR_1[2 * VAR_6 + 1] = (VAR_0[VAR_6 + 0] * 3 + VAR_0[VAR_6 + VAR_4 + 1]) >> 2;
            VAR_1[2 * VAR_6 + VAR_5 + 2] = (VAR_0[VAR_6 + 0] + 3 * VAR_0[VAR_6 + VAR_4 + 1]) >> 2;
            VAR_1[2 * VAR_6 + VAR_5 + 1] = (VAR_0[VAR_6 + 1] + 3 * VAR_0[VAR_6 + VAR_4]) >> 2;
            VAR_1[2 * VAR_6 + 2] = (VAR_0[VAR_6 + 1] * 3 + VAR_0[VAR_6 + VAR_4]) >> 2;
        }
        VAR_1[VAR_2 * 2 - 1] = (VAR_0[VAR_2 - 1] * 3 + VAR_0[VAR_2 - 1 + VAR_4]) >> 2;
        VAR_1[VAR_2 * 2 - 1 + VAR_5] = (VAR_0[VAR_2 - 1] + 3 * VAR_0[VAR_2 - 1 + VAR_4]) >> 2;

        VAR_1 += VAR_5 * 2;
        VAR_0 += VAR_4;
    }


    VAR_1[0] = VAR_0[0];

    for (VAR_6 = 0; VAR_6 < VAR_2 - 1; VAR_6++) {
        VAR_1[2 * VAR_6 + 1] = (VAR_0[VAR_6] * 3 + VAR_0[VAR_6 + 1]) >> 2;
        VAR_1[2 * VAR_6 + 2] = (VAR_0[VAR_6] + 3 * VAR_0[VAR_6 + 1]) >> 2;
    }
    VAR_1[2 * VAR_2 - 1] = VAR_0[VAR_2 - 1];
}
