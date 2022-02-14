
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t coef_idx; int coef; void* lag; } ;
typedef TYPE_1__ LongTermPrediction ;


 void* FUNC_0 (int ,int) ;
 int FUNC_1 (int,int) ;
 int * VAR_0 ;
 size_t FUNC_2 (float,int *,int) ;
 float FUNC_3 (float) ;

__attribute__((used)) static void FUNC_4(float *VAR_1, const float *VAR_2, LongTermPrediction *VAR_3)
{
    int VAR_4, VAR_5, VAR_6 = 0, VAR_7 = 0;
    float VAR_8 = 0.0f;
    for (VAR_4 = 0; VAR_4 < 2048; VAR_4++) {
        float VAR_9, VAR_10 = 0.0f, VAR_11 = 0.0f;
        const int VAR_12 = FUNC_0(0, VAR_4 - 1024);
        for (VAR_5 = VAR_12; VAR_5 < 2048; VAR_5++) {
            const int VAR_13 = VAR_5 - VAR_4 + 1024;
            VAR_10 += VAR_2[VAR_5]*VAR_1[VAR_13];
            VAR_11 += VAR_1[VAR_13]*VAR_1[VAR_13];
        }
        VAR_9 = VAR_11 > 0.0f ? VAR_10/FUNC_3(VAR_11) : 0.0f;
        if (VAR_9 > VAR_7) {
            VAR_7 = VAR_9;
            VAR_6 = VAR_4;
            VAR_8 = VAR_9/(2048-VAR_12);
        }
    }
    VAR_3->lag = FUNC_0(FUNC_1(VAR_6, 11), 0);
    VAR_3->coef_idx = FUNC_2(VAR_8, VAR_0, 8);
    VAR_3->coef = VAR_0[VAR_3->coef_idx];
}
