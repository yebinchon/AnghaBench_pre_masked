
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int nb_samples; scalar_t__* extended_data; } ;
struct TYPE_5__ {int channels; double* prev_amplification_factor; scalar_t__ peak_value; int fade_factors; int * gain_history_smoothed; } ;
typedef TYPE_1__ DynamicAudioNormalizerContext ;
typedef TYPE_2__ AVFrame ;


 double FUNC_0 (scalar_t__,double) ;
 int FUNC_1 (int ,double*) ;
 scalar_t__ FUNC_2 (double) ;
 double FUNC_3 (double,double,int,int ) ;

__attribute__((used)) static void FUNC_4(DynamicAudioNormalizerContext *VAR_0, AVFrame *VAR_1, int VAR_2)
{
    int VAR_3, VAR_4;

    for (VAR_3 = 0; VAR_3 < VAR_0->channels; VAR_3++) {
        double *VAR_5 = (double *)VAR_1->extended_data[VAR_3];
        double VAR_6;

        FUNC_1(VAR_0->gain_history_smoothed[VAR_3], &VAR_6);

        for (VAR_4 = 0; VAR_4 < VAR_1->nb_samples && VAR_2; VAR_4++) {
            const double VAR_7 = FUNC_3(VAR_0->prev_amplification_factor[VAR_3],
                                                     VAR_6, VAR_4,
                                                     VAR_0->fade_factors);

            VAR_5[VAR_4] *= VAR_7;

            if (FUNC_2(VAR_5[VAR_4]) > VAR_0->peak_value)
                VAR_5[VAR_4] = FUNC_0(VAR_0->peak_value, VAR_5[VAR_4]);
        }

        VAR_0->prev_amplification_factor[VAR_3] = VAR_6;
    }
}
