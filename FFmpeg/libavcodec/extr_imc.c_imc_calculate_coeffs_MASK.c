
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* cyclTab; float* weights1; int* cyclTab2; float* weights2; } ;
typedef TYPE_1__ IMCContext ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(IMCContext *VAR_1, float *VAR_2,
                                 float *VAR_3, int *VAR_4,
                                 float *VAR_5, float *VAR_6)
{
    float VAR_7[VAR_0];
    float VAR_8[VAR_0];
    float VAR_9[VAR_0];
    float VAR_10 = 1.e-30;
    float VAR_11 = 0.0;
    int VAR_12, VAR_13;

    for (VAR_12 = 0; VAR_12 < VAR_0; VAR_12++) {
        VAR_6[VAR_12] = VAR_8[VAR_12] = 0.0;
        if (VAR_4[VAR_12]) {
            VAR_7[VAR_12] = VAR_2[VAR_12] * VAR_2[VAR_12];
            VAR_5[VAR_12] = 2.0 * VAR_3[VAR_12];
        } else {
            VAR_7[VAR_12] = 0.0;
            VAR_5[VAR_12] = -30000.0;
        }
        VAR_9[VAR_12] = VAR_4[VAR_12] * VAR_7[VAR_12] * 0.01;
        if (VAR_9[VAR_12] <= VAR_10)
            VAR_9[VAR_12] = 0.0;
    }

    for (VAR_12 = 0; VAR_12 < VAR_0; VAR_12++) {
        for (VAR_13 = VAR_12; VAR_13 < VAR_1->cyclTab[VAR_12]; VAR_13++)
            VAR_6[VAR_13] = VAR_6[VAR_13] + VAR_9[VAR_12];
        VAR_8[VAR_13 - 1] = VAR_8[VAR_13 - 1] + VAR_9[VAR_12];
    }

    for (VAR_12 = 1; VAR_12 < VAR_0; VAR_12++) {
        VAR_11 = (VAR_8[VAR_12 - 1] + VAR_11) * VAR_1->weights1[VAR_12 - 1];
        VAR_6[VAR_12] += VAR_11;
    }

    for (VAR_12 = 0; VAR_12 < VAR_0; VAR_12++)
        VAR_8[VAR_12] = 0.0;

    for (VAR_12 = 0; VAR_12 < VAR_0; VAR_12++) {
        for (VAR_13 = VAR_12 - 1; VAR_13 > VAR_1->cyclTab2[VAR_12]; VAR_13--)
            VAR_6[VAR_13] += VAR_9[VAR_12];
        VAR_8[VAR_13+1] += VAR_9[VAR_12];
    }

    VAR_11 = 0.0;

    for (VAR_12 = VAR_0-2; VAR_12 >= 0; VAR_12--) {
        VAR_11 = (VAR_8[VAR_12+1] + VAR_11) * VAR_1->weights2[VAR_12];
        VAR_6[VAR_12] += VAR_11;

    }
}
