
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {double nb_samples; scalar_t__* extended_data; } ;
struct TYPE_5__ {int channels; double* dc_correction_value; int fade_factors; int * gain_history_original; } ;
typedef TYPE_1__ DynamicAudioNormalizerContext ;
typedef TYPE_2__ AVFrame ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (double,double,int,int ) ;
 double FUNC_2 (double,double,double) ;

__attribute__((used)) static void FUNC_3(DynamicAudioNormalizerContext *VAR_0, AVFrame *VAR_1)
{
    const double VAR_2 = 1.0 / VAR_1->nb_samples;
    int VAR_3 = FUNC_0(VAR_0->gain_history_original[0]);
    int VAR_4, VAR_5;

    for (VAR_4 = 0; VAR_4 < VAR_0->channels; VAR_4++) {
        double *VAR_6 = (double *)VAR_1->extended_data[VAR_4];
        double VAR_7 = 0.0;
        double VAR_8;

        for (VAR_5 = 0; VAR_5 < VAR_1->nb_samples; VAR_5++)
            VAR_7 += VAR_6[VAR_5] * VAR_2;

        VAR_8 = VAR_3 ? VAR_7 : VAR_0->dc_correction_value[VAR_4];
        VAR_0->dc_correction_value[VAR_4] = VAR_3 ? VAR_7 : FUNC_2(VAR_7, VAR_0->dc_correction_value[VAR_4], 0.1);

        for (VAR_5 = 0; VAR_5 < VAR_1->nb_samples; VAR_5++) {
            VAR_6[VAR_5] -= FUNC_1(VAR_8, VAR_0->dc_correction_value[VAR_4], VAR_5, VAR_0->fade_factors);
        }
    }
}
