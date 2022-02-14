
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 float FUNC_0 (int,int) ;
 float FUNC_1 (float) ;
 float FUNC_2 (float) ;

void FUNC_3(int VAR_0, int VAR_1, int VAR_2, float VAR_3, float VAR_4,
    float *VAR_5, float *VAR_6, float *VAR_7) {
    *VAR_5 = 0; *VAR_6 = 0; *VAR_7 = 0;
    if (!VAR_1 && !VAR_2) {
        return;
    }
    float VAR_8 = FUNC_0(VAR_1, VAR_2);
    if (VAR_0) {
        float VAR_9 = FUNC_1(VAR_4);
        float VAR_10 = FUNC_2(VAR_4);
        if (VAR_2) {
            if (!VAR_1) {
                VAR_10 = 0;
            }
            VAR_9 = 1;
        }
        if (VAR_1 > 0) {
            VAR_10 = -VAR_10;
        }
        *VAR_5 = FUNC_1(VAR_3 + VAR_8) * VAR_9;
        *VAR_6 = VAR_10;
        *VAR_7 = FUNC_2(VAR_3 + VAR_8) * VAR_9;
    }
    else {
        *VAR_5 = FUNC_1(VAR_3 + VAR_8);
        *VAR_6 = 0;
        *VAR_7 = FUNC_2(VAR_3 + VAR_8);
    }
}
