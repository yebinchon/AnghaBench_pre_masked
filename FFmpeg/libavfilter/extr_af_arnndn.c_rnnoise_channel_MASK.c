
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {float re; float im; } ;
struct TYPE_11__ {float* lastg; int rnn; int mem_hp_x; } ;
typedef TYPE_1__ DenoiseState ;
typedef int AudioRNNContext ;
typedef TYPE_2__ AVComplexFloat ;


 float FUNC_0 (float,float) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (float*,int ,float const*,float const*,float const*,int) ;
 int FUNC_2 (int *,TYPE_1__*,TYPE_2__*,TYPE_2__*,float*,float*,float*,float*,float*) ;
 int FUNC_3 (int *,int *,float*,float*,float*) ;
 int FUNC_4 (int *,TYPE_1__*,float*,TYPE_2__*) ;
 int FUNC_5 (float*,float*) ;
 int FUNC_6 (TYPE_2__*,TYPE_2__*,float*,float*,float*,float*) ;

__attribute__((used)) static float FUNC_7(AudioRNNContext *VAR_5, DenoiseState *VAR_6, float *VAR_7, const float *VAR_8)
{
    AVComplexFloat VAR_9[VAR_1];
    AVComplexFloat VAR_10[VAR_4];
    float VAR_11[VAR_0];
    float VAR_12[VAR_2], VAR_13[VAR_2];
    float VAR_14[VAR_2];
    float VAR_15[VAR_3];
    float VAR_16[VAR_2];
    float VAR_17[VAR_1];
    float VAR_18 = 0;
    static const float VAR_19[2] = {-1.99599, 0.99600};
    static const float VAR_20[2] = {-2, 1};
    int VAR_21;

    FUNC_1(VAR_11, VAR_6->mem_hp_x, VAR_8, VAR_20, VAR_19, VAR_0);
    VAR_21 = FUNC_2(VAR_5, VAR_6, VAR_9, VAR_10, VAR_12, VAR_13, VAR_14, VAR_15, VAR_11);

    if (!VAR_21) {
        FUNC_3(VAR_5, &VAR_6->rnn, VAR_16, &VAR_18, VAR_15);
        FUNC_6(VAR_9, VAR_10, VAR_12, VAR_13, VAR_14, VAR_16);
        for (int VAR_22 = 0; VAR_22 < VAR_2; VAR_22++) {
            float VAR_23 = .6f;

            VAR_16[VAR_22] = FUNC_0(VAR_16[VAR_22], VAR_23 * VAR_6->lastg[VAR_22]);
            VAR_6->lastg[VAR_22] = VAR_16[VAR_22];
        }

        FUNC_5(VAR_17, VAR_16);

        for (int VAR_24 = 0; VAR_24 < VAR_1; VAR_24++) {
            VAR_9[VAR_24].re *= VAR_17[VAR_24];
            VAR_9[VAR_24].im *= VAR_17[VAR_24];
        }
    }

    FUNC_4(VAR_5, VAR_6, VAR_7, VAR_9);

    return VAR_18;
}
