
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_16__ {int * outputs; TYPE_1__* priv; } ;
struct TYPE_15__ {int channels; TYPE_4__* dst; } ;
struct TYPE_14__ {int nb_samples; scalar_t__* extended_data; } ;
struct TYPE_13__ {int delay_buf_pos; int max_samples; int lfo_length; int channel_phase; double* lfo; int lfo_pos; double* delay_last; double feedback_gain; scalar_t__ interpolation; double in_gain; double delay_gain; scalar_t__* delay_buffer; } ;
typedef TYPE_1__ FlangerContext ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVFilterLink ;
typedef TYPE_4__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_2 (TYPE_2__**) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ,TYPE_2__*) ;
 TYPE_2__* FUNC_5 (int ,int) ;
 double FUNC_6 (double,double*) ;

__attribute__((used)) static int FUNC_7(AVFilterLink *VAR_2, AVFrame *VAR_3)
{
    AVFilterContext *VAR_4 = VAR_2->dst;
    FlangerContext *VAR_5 = VAR_4->priv;
    AVFrame *VAR_6;
    int VAR_7, VAR_8;

    if (FUNC_3(VAR_3)) {
        VAR_6 = VAR_3;
    } else {
        VAR_6 = FUNC_5(VAR_4->outputs[0], VAR_3->nb_samples);
        if (!VAR_6) {
            FUNC_2(&VAR_3);
            return FUNC_0(VAR_0);
        }
        FUNC_1(VAR_6, VAR_3);
    }

    for (VAR_8 = 0; VAR_8 < VAR_3->nb_samples; VAR_8++) {

        VAR_5->delay_buf_pos = (VAR_5->delay_buf_pos + VAR_5->max_samples - 1) % VAR_5->max_samples;

        for (VAR_7 = 0; VAR_7 < VAR_2->channels; VAR_7++) {
            double *VAR_9 = (double *)VAR_3->extended_data[VAR_7];
            double *VAR_10 = (double *)VAR_6->extended_data[VAR_7];
            double VAR_11, VAR_12;
            double VAR_13;
            double VAR_14, VAR_15;
            int VAR_16 = VAR_7 * VAR_5->lfo_length * VAR_5->channel_phase + .5;
            double VAR_17 = VAR_5->lfo[(VAR_5->lfo_pos + VAR_16) % VAR_5->lfo_length];
            int VAR_18 = (int)VAR_17;
            double VAR_19 = FUNC_6(VAR_17, &VAR_17);
            double *VAR_20 = (double *)VAR_5->delay_buffer[VAR_7];

            VAR_14 = VAR_9[VAR_8];
            VAR_20[VAR_5->delay_buf_pos] = VAR_14 + VAR_5->delay_last[VAR_7] *
                                                           VAR_5->feedback_gain;
            VAR_11 = VAR_20[(VAR_5->delay_buf_pos + VAR_18++) % VAR_5->max_samples];
            VAR_12 = VAR_20[(VAR_5->delay_buf_pos + VAR_18++) % VAR_5->max_samples];

            if (VAR_5->interpolation == VAR_1) {
                VAR_13 = VAR_11 + (VAR_12 - VAR_11) * VAR_19;
            } else {
                double VAR_21, VAR_22;
                double VAR_23 = VAR_20[(VAR_5->delay_buf_pos + VAR_18++) % VAR_5->max_samples];
                VAR_23 -= VAR_11;
                VAR_12 -= VAR_11;
                VAR_21 = VAR_23 * .5 - VAR_12;
                VAR_22 = VAR_12 * 2 - VAR_23 *.5;
                VAR_13 = VAR_11 + (VAR_21 * VAR_19 + VAR_22) * VAR_19;
            }

            VAR_5->delay_last[VAR_7] = VAR_13;
            VAR_15 = VAR_14 * VAR_5->in_gain + VAR_13 * VAR_5->delay_gain;
            VAR_10[VAR_8] = VAR_15;
        }
        VAR_5->lfo_pos = (VAR_5->lfo_pos + 1) % VAR_5->lfo_length;
    }

    if (VAR_3 != VAR_6)
        FUNC_2(&VAR_3);

    return FUNC_4(VAR_4->outputs[0], VAR_6);
}
