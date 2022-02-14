
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ bitrate; double* lspf; double* prev_lspf; double avg_acb_gain; double* pitch; scalar_t__ last_valid_bitrate; size_t prev_energy_gain; float* energy_vector; double fade_scale; double avg_fcb_gain; int synthesis; scalar_t__ prev_pitch_delay; scalar_t__ pitch_delay; int pitch_back; scalar_t__ prev_error_flag; } ;
typedef TYPE_1__ EVRCContext ;


 int VAR_0 ;
 double FUNC_0 (double,double) ;
 int VAR_1 ;
 float VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (TYPE_1__*,double*,double,float*,int) ;
 int FUNC_2 (float*,float*) ;
 float* VAR_8 ;
 scalar_t__** VAR_9 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (float*,scalar_t__,scalar_t__,int) ;
 int FUNC_5 (float*,double*,double*,int) ;
 int FUNC_6 (float) ;
 int FUNC_7 (int ,double*,int) ;
 int FUNC_8 (float*,float*,int) ;
 int FUNC_9 (TYPE_1__*,float*,float*,float*,int,int *,int) ;
 int * VAR_10 ;
 float FUNC_10 (int,float) ;
 int* VAR_11 ;
 int FUNC_11 (float*,float*,int ,int,float*) ;

__attribute__((used)) static void FUNC_12(EVRCContext *VAR_12, float *VAR_13)
{
    float VAR_14[VAR_1], VAR_15[VAR_1], VAR_16[VAR_3],
          VAR_17[VAR_7 + 6], VAR_18;
    int VAR_19, VAR_20;

    for (VAR_19 = 0; VAR_19 < VAR_1; VAR_19++) {
        if (VAR_12->bitrate != VAR_6)
            VAR_12->lspf[VAR_19] = VAR_12->prev_lspf[VAR_19] * 0.875 + 0.125 * (VAR_19 + 1) * 0.048;
        else
            VAR_12->lspf[VAR_19] = VAR_12->prev_lspf[VAR_19];
    }

    if (VAR_12->prev_error_flag)
        VAR_12->avg_acb_gain *= 0.75;
    if (VAR_12->bitrate == VAR_4)
        FUNC_7(VAR_12->pitch_back, VAR_12->pitch, VAR_0 * sizeof(float));
    if (VAR_12->last_valid_bitrate == VAR_6)
        VAR_12->bitrate = VAR_6;
    else
        VAR_12->bitrate = VAR_4;

    if (VAR_12->bitrate == VAR_4 || VAR_12->bitrate == VAR_5) {
        VAR_12->pitch_delay = VAR_12->prev_pitch_delay;
    } else {
        float VAR_21 = 0;

        VAR_16[0] = VAR_16[1] = VAR_16[2] = VAR_2;

        for (VAR_19 = 0; VAR_19 < VAR_3; VAR_19++)
            VAR_21 += VAR_9[VAR_12->prev_energy_gain][VAR_19];
        VAR_21 /= (float) VAR_3;
        VAR_21 = FUNC_10(10, VAR_21);
        for (VAR_19 = 0; VAR_19 < VAR_3; VAR_19++)
            VAR_12->energy_vector[VAR_19] = VAR_21;
    }

    if (FUNC_3(VAR_12->pitch_delay - VAR_12->prev_pitch_delay) > 15)
        VAR_12->prev_pitch_delay = VAR_12->pitch_delay;

    for (VAR_19 = 0; VAR_19 < VAR_3; VAR_19++) {
        int VAR_22 = VAR_11[VAR_19];
        int VAR_23;

        FUNC_5(VAR_14, VAR_12->lspf, VAR_12->prev_lspf, VAR_19);

        if (VAR_12->bitrate != VAR_6) {
            if (VAR_12->avg_acb_gain < 0.3) {
                VAR_16[0] = VAR_8[VAR_19];
                VAR_16[1] = VAR_8[VAR_19 + 1];
                VAR_16[2] = VAR_8[VAR_19 + 2];
            } else {
                FUNC_4(VAR_16, VAR_12->pitch_delay, VAR_12->prev_pitch_delay, VAR_19);
            }
        }

        VAR_23 = FUNC_6((VAR_16[1] + VAR_16[0]) / 2.0);
        FUNC_2(VAR_14, VAR_15);

        if (VAR_12->bitrate != VAR_6) {
            FUNC_1(VAR_12, VAR_12->pitch + VAR_0,
                           VAR_12->avg_acb_gain, VAR_16, VAR_22);
            for (VAR_20 = 0; VAR_20 < VAR_22; VAR_20++)
                VAR_12->pitch[VAR_0 + VAR_20] *= VAR_12->fade_scale;
            VAR_12->fade_scale = FUNC_0(VAR_12->fade_scale - 0.05, 0.0);
        } else {
            for (VAR_20 = 0; VAR_20 < VAR_22; VAR_20++)
                VAR_12->pitch[VAR_0 + VAR_20] = VAR_12->energy_vector[VAR_19];
        }

        FUNC_8(VAR_12->pitch, VAR_12->pitch + VAR_22, VAR_0 * sizeof(float));

        if (VAR_12->bitrate != VAR_6 && VAR_12->avg_acb_gain < 0.4) {
            VAR_18 = 0.1 * VAR_12->avg_fcb_gain;
            for (VAR_20 = 0; VAR_20 < VAR_22; VAR_20++)
                VAR_12->pitch[VAR_0 + VAR_20] += VAR_18;
        } else if (VAR_12->bitrate == VAR_6) {
            for (VAR_20 = 0; VAR_20 < VAR_22; VAR_20++)
                VAR_12->pitch[VAR_0 + VAR_20] = VAR_12->energy_vector[VAR_19];
        }

        FUNC_11(VAR_12->pitch + VAR_0, VAR_15,
                         VAR_12->synthesis, VAR_22, VAR_17);
        FUNC_9(VAR_12, VAR_17, VAR_15, VAR_13, VAR_23,
                   &VAR_10[VAR_12->bitrate], VAR_22);

        VAR_13 += VAR_22;
    }
}
