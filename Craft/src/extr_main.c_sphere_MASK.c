
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int x; int y; int z; int w; } ;
typedef TYPE_1__ Block ;


 int FUNC_0 (int,int,int,int) ;
 float FUNC_1 (float) ;

void FUNC_2(Block *VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4, int VAR_5) {
    static const float VAR_6[8][3] = {
        {-0.5, -0.5, -0.5},
        {-0.5, -0.5, 0.5},
        {-0.5, 0.5, -0.5},
        {-0.5, 0.5, 0.5},
        {0.5, -0.5, -0.5},
        {0.5, -0.5, 0.5},
        {0.5, 0.5, -0.5},
        {0.5, 0.5, 0.5}
    };
    int VAR_7 = VAR_0->x;
    int VAR_8 = VAR_0->y;
    int VAR_9 = VAR_0->z;
    int VAR_10 = VAR_0->w;
    for (int VAR_11 = VAR_7 - VAR_1; VAR_11 <= VAR_7 + VAR_1; VAR_11++) {
        if (VAR_3 && VAR_11 != VAR_7) {
            continue;
        }
        for (int VAR_12 = VAR_8 - VAR_1; VAR_12 <= VAR_8 + VAR_1; VAR_12++) {
            if (VAR_4 && VAR_12 != VAR_8) {
                continue;
            }
            for (int VAR_13 = VAR_9 - VAR_1; VAR_13 <= VAR_9 + VAR_1; VAR_13++) {
                if (VAR_5 && VAR_13 != VAR_9) {
                    continue;
                }
                int VAR_14 = 0;
                int VAR_15 = VAR_2;
                for (int VAR_16 = 0; VAR_16 < 8; VAR_16++) {
                    float VAR_17 = VAR_11 + VAR_6[VAR_16][0] - VAR_7;
                    float VAR_18 = VAR_12 + VAR_6[VAR_16][1] - VAR_8;
                    float VAR_19 = VAR_13 + VAR_6[VAR_16][2] - VAR_9;
                    float VAR_20 = FUNC_1(VAR_17 * VAR_17 + VAR_18 * VAR_18 + VAR_19 * VAR_19);
                    if (VAR_20 < VAR_1) {
                        VAR_14 = 1;
                    }
                    else {
                        VAR_15 = 1;
                    }
                }
                if (VAR_14 && VAR_15) {
                    FUNC_0(VAR_11, VAR_12, VAR_13, VAR_10);
                }
            }
        }
    }
}
