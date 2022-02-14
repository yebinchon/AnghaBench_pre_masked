
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int map; } ;
typedef int Map ;
typedef TYPE_1__ Chunk ;


 int FUNC_0 (float) ;
 TYPE_1__* FUNC_1 (int,int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *,int,int,int) ;
 int FUNC_4 (float) ;

int FUNC_5(int VAR_0, float *VAR_1, float *VAR_2, float *VAR_3) {
    int VAR_4 = 0;
    int VAR_5 = FUNC_0(*VAR_1);
    int VAR_6 = FUNC_0(*VAR_3);
    Chunk *VAR_7 = FUNC_1(VAR_5, VAR_6);
    if (!VAR_7) {
        return VAR_4;
    }
    Map *VAR_8 = &VAR_7->map;
    int VAR_9 = FUNC_4(*VAR_1);
    int VAR_10 = FUNC_4(*VAR_2);
    int VAR_11 = FUNC_4(*VAR_3);
    float VAR_12 = *VAR_1 - VAR_9;
    float VAR_13 = *VAR_2 - VAR_10;
    float VAR_14 = *VAR_3 - VAR_11;
    float VAR_15 = 0.25;
    for (int VAR_16 = 0; VAR_16 < VAR_0; VAR_16++) {
        if (VAR_12 < -VAR_15 && FUNC_2(FUNC_3(VAR_8, VAR_9 - 1, VAR_10 - VAR_16, VAR_11))) {
            *VAR_1 = VAR_9 - VAR_15;
        }
        if (VAR_12 > VAR_15 && FUNC_2(FUNC_3(VAR_8, VAR_9 + 1, VAR_10 - VAR_16, VAR_11))) {
            *VAR_1 = VAR_9 + VAR_15;
        }
        if (VAR_13 < -VAR_15 && FUNC_2(FUNC_3(VAR_8, VAR_9, VAR_10 - VAR_16 - 1, VAR_11))) {
            *VAR_2 = VAR_10 - VAR_15;
            VAR_4 = 1;
        }
        if (VAR_13 > VAR_15 && FUNC_2(FUNC_3(VAR_8, VAR_9, VAR_10 - VAR_16 + 1, VAR_11))) {
            *VAR_2 = VAR_10 + VAR_15;
            VAR_4 = 1;
        }
        if (VAR_14 < -VAR_15 && FUNC_2(FUNC_3(VAR_8, VAR_9, VAR_10 - VAR_16, VAR_11 - 1))) {
            *VAR_3 = VAR_11 - VAR_15;
        }
        if (VAR_14 > VAR_15 && FUNC_2(FUNC_3(VAR_8, VAR_9, VAR_10 - VAR_16, VAR_11 + 1))) {
            *VAR_3 = VAR_11 + VAR_15;
        }
    }
    return VAR_4;
}
