
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int nb_samples; scalar_t__* extended_data; } ;
struct TYPE_5__ {int channels; } ;
typedef TYPE_1__ DynamicAudioNormalizerContext ;
typedef TYPE_2__ AVFrame ;


 int VAR_0 ;
 double FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (double const) ;
 int FUNC_2 (double) ;

__attribute__((used)) static double FUNC_3(DynamicAudioNormalizerContext *VAR_1,
                                    AVFrame *VAR_2, int VAR_3)
{
    double VAR_4 = 0.0;
    int VAR_5, VAR_6;

    if (VAR_3 == -1) {
        for (VAR_6 = 0; VAR_6 < VAR_1->channels; VAR_6++) {
            const double *VAR_7 = (double *)VAR_2->extended_data[VAR_6];

            for (VAR_5 = 0; VAR_5 < VAR_2->nb_samples; VAR_5++) {
                VAR_4 += FUNC_1(VAR_7[VAR_5]);
            }
        }
        VAR_4 /= (VAR_1->channels * VAR_2->nb_samples) - 1;
    } else {
        const double *VAR_8 = (double *)VAR_2->extended_data[VAR_3];

        for (VAR_5 = 0; VAR_5 < VAR_2->nb_samples; VAR_5++) {
            VAR_4 += FUNC_1(VAR_8[VAR_5]);
        }
        VAR_4 /= VAR_2->nb_samples - 1;
    }

    return FUNC_0(FUNC_2(VAR_4), VAR_0);
}
