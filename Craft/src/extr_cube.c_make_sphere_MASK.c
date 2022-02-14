
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (float*,float,int,float*,float*,float*,float*,float*,float*) ;

void FUNC_1(float *VAR_0, float VAR_1, int VAR_2) {
    static int VAR_3[8][3] = {
        {4, 3, 0}, {1, 4, 0},
        {3, 4, 5}, {4, 1, 5},
        {0, 3, 2}, {0, 2, 1},
        {5, 2, 3}, {5, 1, 2}
    };
    static float VAR_4[6][3] = {
        { 0, 0,-1}, { 1, 0, 0},
        { 0,-1, 0}, {-1, 0, 0},
        { 0, 1, 0}, { 0, 0, 1}
    };
    static float VAR_5[6][3] = {
        {0, 0.5}, {0, 0.5},
        {0, 0}, {0, 0.5},
        {0, 1}, {0, 0.5}
    };
    int VAR_6 = 0;
    for (int VAR_7 = 0; VAR_7 < 8; VAR_7++) {
        int VAR_8 = FUNC_0(
            VAR_0, VAR_1, VAR_2,
            VAR_4[VAR_3[VAR_7][0]],
            VAR_4[VAR_3[VAR_7][1]],
            VAR_4[VAR_3[VAR_7][2]],
            VAR_5[VAR_3[VAR_7][0]],
            VAR_5[VAR_3[VAR_7][1]],
            VAR_5[VAR_3[VAR_7][2]]);
        VAR_6 += VAR_8; VAR_0 += VAR_8 * 24;
    }
}
