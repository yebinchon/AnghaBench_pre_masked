
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (float*,float*,float*) ;

void FUNC_1(float *VAR_0, float *VAR_1, int VAR_2, int VAR_3, int VAR_4) {
    float VAR_5[4] = {0, 0, 0, 1};
    for (int VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
        float *VAR_7 = VAR_0 + VAR_3 + VAR_4 * VAR_6;
        VAR_5[0] = *(VAR_7++); VAR_5[1] = *(VAR_7++); VAR_5[2] = *(VAR_7++);
        FUNC_0(VAR_5, VAR_1, VAR_5);
        VAR_7 = VAR_0 + VAR_3 + VAR_4 * VAR_6;
        *(VAR_7++) = VAR_5[0]; *(VAR_7++) = VAR_5[1]; *(VAR_7++) = VAR_5[2];
    }
}
