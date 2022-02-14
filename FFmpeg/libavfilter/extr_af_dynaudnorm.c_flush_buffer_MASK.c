
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int nb_samples; scalar_t__* extended_data; } ;
struct TYPE_6__ {int channels; double target_rms; double peak_value; int delay; scalar_t__* dc_correction_value; scalar_t__ dc_correction; scalar_t__ alt_boundary_mode; int frame_len; } ;
typedef TYPE_1__ DynamicAudioNormalizerContext ;
typedef TYPE_2__ AVFrame ;
typedef int AVFilterLink ;


 int FUNC_0 (int ) ;
 double VAR_0 ;
 int VAR_1 ;
 double FUNC_1 (double,double) ;
 TYPE_2__* FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,TYPE_2__*) ;

__attribute__((used)) static int FUNC_4(DynamicAudioNormalizerContext *VAR_2, AVFilterLink *VAR_3,
                        AVFilterLink *VAR_4)
{
    AVFrame *VAR_5 = FUNC_2(VAR_4, VAR_2->frame_len);
    int VAR_6, VAR_7;

    if (!VAR_5)
        return FUNC_0(VAR_1);

    for (VAR_6 = 0; VAR_6 < VAR_2->channels; VAR_6++) {
        double *VAR_8 = (double *)VAR_5->extended_data[VAR_6];

        for (VAR_7 = 0; VAR_7 < VAR_5->nb_samples; VAR_7++) {
            VAR_8[VAR_7] = VAR_2->alt_boundary_mode ? VAR_0 : ((VAR_2->target_rms > VAR_0) ? FUNC_1(VAR_2->peak_value, VAR_2->target_rms) : VAR_2->peak_value);
            if (VAR_2->dc_correction) {
                VAR_8[VAR_7] *= ((VAR_7 % 2) == 1) ? -1 : 1;
                VAR_8[VAR_7] += VAR_2->dc_correction_value[VAR_6];
            }
        }
    }

    VAR_2->delay--;
    return FUNC_3(VAR_3, VAR_5);
}
