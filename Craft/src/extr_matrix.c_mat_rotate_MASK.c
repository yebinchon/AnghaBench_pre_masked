
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 float FUNC_0 (float) ;
 int FUNC_1 (float*,float*,float*) ;
 float FUNC_2 (float) ;

void FUNC_3(float *VAR_0, float VAR_1, float VAR_2, float VAR_3, float VAR_4) {
    FUNC_1(&VAR_1, &VAR_2, &VAR_3);
    float VAR_5 = FUNC_2(VAR_4);
    float VAR_6 = FUNC_0(VAR_4);
    float VAR_7 = 1 - VAR_6;
    VAR_0[0] = VAR_7 * VAR_1 * VAR_1 + VAR_6;
    VAR_0[1] = VAR_7 * VAR_1 * VAR_2 - VAR_3 * VAR_5;
    VAR_0[2] = VAR_7 * VAR_3 * VAR_1 + VAR_2 * VAR_5;
    VAR_0[3] = 0;
    VAR_0[4] = VAR_7 * VAR_1 * VAR_2 + VAR_3 * VAR_5;
    VAR_0[5] = VAR_7 * VAR_2 * VAR_2 + VAR_6;
    VAR_0[6] = VAR_7 * VAR_2 * VAR_3 - VAR_1 * VAR_5;
    VAR_0[7] = 0;
    VAR_0[8] = VAR_7 * VAR_3 * VAR_1 - VAR_2 * VAR_5;
    VAR_0[9] = VAR_7 * VAR_2 * VAR_3 + VAR_1 * VAR_5;
    VAR_0[10] = VAR_7 * VAR_3 * VAR_3 + VAR_6;
    VAR_0[11] = 0;
    VAR_0[12] = 0;
    VAR_0[13] = 0;
    VAR_0[14] = 0;
    VAR_0[15] = 1;
}
