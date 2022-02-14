
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {float* postfilter_synth_mem; int postfilter_agc_mem; scalar_t__ formant_mem; int postfilter_tilt_mem; } ;
typedef TYPE_1__ QCELPContext ;


 int FUNC_0 (scalar_t__,scalar_t__,int) ;
 int FUNC_1 (float*,float*,int ,int,double,int *) ;
 int FUNC_2 (float*,float*,float*,int,int) ;
 int FUNC_3 (float*,float*,scalar_t__,int,int) ;
 int FUNC_4 (int *,double,float*,int) ;
 int FUNC_5 (float*,float*,int) ;

__attribute__((used)) static void FUNC_6(QCELPContext *VAR_0, float *VAR_1, float *VAR_2)
{
    static const float VAR_3[10] = {
        0.775000, 0.600625, 0.465484, 0.360750, 0.279582,
        0.216676, 0.167924, 0.130141, 0.100859, 0.078166
    }, VAR_4[10] = {
        0.625000, 0.390625, 0.244141, 0.152588, 0.095367,
        0.059605, 0.037253, 0.023283, 0.014552, 0.009095
    };
    float VAR_5[10], VAR_6[10], VAR_7[170], VAR_8[160];
    int VAR_9;

    for (VAR_9 = 0; VAR_9 < 10; VAR_9++) {
        VAR_5[VAR_9] = VAR_2[VAR_9] * VAR_4[VAR_9];
        VAR_6[VAR_9] = VAR_2[VAR_9] * VAR_3[VAR_9];
    }

    FUNC_3(VAR_8, VAR_5,
                                      VAR_0->formant_mem + 10, 160, 10);
    FUNC_5(VAR_7, VAR_0->postfilter_synth_mem, sizeof(float) * 10);
    FUNC_2(VAR_7 + 10, VAR_6, VAR_8, 160, 10);
    FUNC_5(VAR_0->postfilter_synth_mem, VAR_7 + 160, sizeof(float) * 10);

    FUNC_4(&VAR_0->postfilter_tilt_mem, 0.3, VAR_7 + 10, 160);

    FUNC_1(VAR_1, VAR_7 + 10,
                             FUNC_0(VAR_0->formant_mem + 10,
                                                          VAR_0->formant_mem + 10,
                                                          160),
                             160, 0.9375, &VAR_0->postfilter_agc_mem);
}
