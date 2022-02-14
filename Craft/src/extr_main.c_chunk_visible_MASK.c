
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ ortho; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;

int FUNC_0(float VAR_2[6][4], int VAR_3, int VAR_4, int VAR_5, int VAR_6) {
    int VAR_7 = VAR_3 * VAR_0 - 1;
    int VAR_8 = VAR_4 * VAR_0 - 1;
    int VAR_9 = VAR_0 + 1;
    float VAR_10[8][3] = {
        {VAR_7 + 0, VAR_5, VAR_8 + 0},
        {VAR_7 + VAR_9, VAR_5, VAR_8 + 0},
        {VAR_7 + 0, VAR_5, VAR_8 + VAR_9},
        {VAR_7 + VAR_9, VAR_5, VAR_8 + VAR_9},
        {VAR_7 + 0, VAR_6, VAR_8 + 0},
        {VAR_7 + VAR_9, VAR_6, VAR_8 + 0},
        {VAR_7 + 0, VAR_6, VAR_8 + VAR_9},
        {VAR_7 + VAR_9, VAR_6, VAR_8 + VAR_9}
    };
    int VAR_11 = VAR_1->ortho ? 4 : 6;
    for (int VAR_12 = 0; VAR_12 < VAR_11; VAR_12++) {
        int VAR_13 = 0;
        int VAR_14 = 0;
        for (int VAR_15 = 0; VAR_15 < 8; VAR_15++) {
            float VAR_16 =
                VAR_2[VAR_12][0] * VAR_10[VAR_15][0] +
                VAR_2[VAR_12][1] * VAR_10[VAR_15][1] +
                VAR_2[VAR_12][2] * VAR_10[VAR_15][2] +
                VAR_2[VAR_12][3];
            if (VAR_16 < 0) {
                VAR_14++;
            }
            else {
                VAR_13++;
            }
            if (VAR_13 && VAR_14) {
                break;
            }
        }
        if (VAR_13 == 0) {
            return 0;
        }
    }
    return 1;
}
