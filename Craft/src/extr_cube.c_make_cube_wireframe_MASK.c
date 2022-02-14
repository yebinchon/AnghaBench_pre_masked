
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
void FUNC_0(float *VAR_0, float VAR_1, float VAR_2, float VAR_3, float VAR_4) {
    static const float VAR_5[8][3] = {
        {-1, -1, -1},
        {-1, -1, +1},
        {-1, +1, -1},
        {-1, +1, +1},
        {+1, -1, -1},
        {+1, -1, +1},
        {+1, +1, -1},
        {+1, +1, +1}
    };
    static const int VAR_6[24] = {
        0, 1, 0, 2, 0, 4, 1, 3,
        1, 5, 2, 3, 2, 6, 3, 7,
        4, 5, 4, 6, 5, 7, 6, 7
    };
    float *VAR_7 = VAR_0;
    for (int VAR_8 = 0; VAR_8 < 24; VAR_8++) {
        int VAR_9 = VAR_6[VAR_8];
        *(VAR_7++) = VAR_1 + VAR_4 * VAR_5[VAR_9][0];
        *(VAR_7++) = VAR_2 + VAR_4 * VAR_5[VAR_9][1];
        *(VAR_7++) = VAR_3 + VAR_4 * VAR_5[VAR_9][2];
    }
}
