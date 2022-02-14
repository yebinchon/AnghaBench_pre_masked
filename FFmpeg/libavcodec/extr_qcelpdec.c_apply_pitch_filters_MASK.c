
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {double* plag; int* pgain; double* pfrac; } ;
struct TYPE_5__ {scalar_t__ bitrate; scalar_t__ prev_bitrate; int* pitch_gain; double* pitch_lag; int erasure_count; int pitch_pre_filter_mem; int pitch_synthesis_filter_mem; TYPE_1__ frame; } ;
typedef TYPE_2__ QCELPContext ;


 double FUNC_0 (double,double) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (float*,float const*,float const*) ;
 int FUNC_2 (int) ;
 float* FUNC_3 (int ,float const*,double*,double*,double*) ;
 int FUNC_4 (int ,float*,int) ;
 int FUNC_5 (double*,int ,int) ;

__attribute__((used)) static void FUNC_6(QCELPContext *VAR_3, float *VAR_4)
{
    int VAR_5;
    const float *VAR_6, *VAR_7;

    if (VAR_3->bitrate >= VAR_1 || VAR_3->bitrate == VAR_2 ||
        (VAR_3->bitrate == VAR_0 && (VAR_3->prev_bitrate >= VAR_1))) {

        if (VAR_3->bitrate >= VAR_1) {

            for (VAR_5 = 0; VAR_5 < 4; VAR_5++) {
                VAR_3->pitch_gain[VAR_5] = VAR_3->frame.plag[VAR_5] ? (VAR_3->frame.pgain[VAR_5] + 1) * 0.25 : 0.0;

                VAR_3->pitch_lag[VAR_5] = VAR_3->frame.plag[VAR_5] + 16;
            }
        } else {
            float VAR_8;

            if (VAR_3->bitrate == VAR_0) {
                  if (VAR_3->erasure_count < 3)
                      VAR_8 = 0.9 - 0.3 * (VAR_3->erasure_count - 1);
                  else
                      VAR_8 = 0.0;
            } else {
                FUNC_2(VAR_3->bitrate == VAR_2);
                VAR_8 = 1.0;
            }
            for (VAR_5 = 0; VAR_5 < 4; VAR_5++)
                VAR_3->pitch_gain[VAR_5] = FUNC_0(VAR_3->pitch_gain[VAR_5], VAR_8);

            FUNC_5(VAR_3->frame.pfrac, 0, sizeof(VAR_3->frame.pfrac));
        }


        VAR_6 = FUNC_3(VAR_3->pitch_synthesis_filter_mem,
                                              VAR_4, VAR_3->pitch_gain,
                                              VAR_3->pitch_lag, VAR_3->frame.pfrac);


        for (VAR_5 = 0; VAR_5 < 4; VAR_5++)
            VAR_3->pitch_gain[VAR_5] = 0.5 * FUNC_0(VAR_3->pitch_gain[VAR_5], 1.0);

        VAR_7 = FUNC_3(VAR_3->pitch_pre_filter_mem,
                                              VAR_6,
                                              VAR_3->pitch_gain, VAR_3->pitch_lag,
                                              VAR_3->frame.pfrac);

        FUNC_1(VAR_4, VAR_6, VAR_7);
    } else {
        FUNC_4(VAR_3->pitch_synthesis_filter_mem,
               VAR_4 + 17, 143 * sizeof(float));
        FUNC_4(VAR_3->pitch_pre_filter_mem, VAR_4 + 17, 143 * sizeof(float));
        FUNC_5(VAR_3->pitch_gain, 0, sizeof(VAR_3->pitch_gain));
        FUNC_5(VAR_3->pitch_lag, 0, sizeof(VAR_3->pitch_lag));
    }
}
