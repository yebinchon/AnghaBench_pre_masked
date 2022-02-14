
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_17__ {int* used; int present; scalar_t__ lag; } ;
struct TYPE_12__ {TYPE_1__* ch; } ;
struct TYPE_16__ {float* scoefs; float lambda; size_t cur_channel; int (* abs_pow34 ) (float*,float*,int) ;TYPE_2__ psy; } ;
struct TYPE_15__ {int threshold; } ;
struct TYPE_13__ {scalar_t__* window_sequence; int num_windows; int* group_len; int num_swb; int* swb_sizes; int predictor_present; TYPE_8__ ltp; int max_sfb; } ;
struct TYPE_14__ {float* coeffs; float* lcoeffs; TYPE_3__ ics; int * band_type; int * sf_idx; TYPE_8__* ltp_state; } ;
struct TYPE_11__ {TYPE_5__* psy_bands; } ;
typedef TYPE_4__ SingleChannelElement ;
typedef int LongTermPrediction ;
typedef TYPE_5__ FFPsyBand ;
typedef TYPE_6__ AACEncContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_8__*,int ,int) ;
 scalar_t__ FUNC_2 (TYPE_6__*,float*,float*,int,int ,int ,int,int ,int*,int *,int ) ;
 int FUNC_3 (float*,float*,int) ;
 int FUNC_4 (float*,float*,int) ;

void FUNC_5(AACEncContext *VAR_3, SingleChannelElement *VAR_4,
                           int VAR_5)
{
    int VAR_6, VAR_7, VAR_8, VAR_9, VAR_10 = 0, VAR_11 = 0;
    int VAR_12 = -(15 + FUNC_0(VAR_4->ics.max_sfb, VAR_2));
    float *VAR_13 = &VAR_3->scoefs[128*0], *VAR_14 = &VAR_3->scoefs[128*1];
    float *VAR_15 = &VAR_3->scoefs[128*2];
    const int VAR_16 = FUNC_0(VAR_4->ics.max_sfb, VAR_2);

    if (VAR_4->ics.window_sequence[0] == VAR_0) {
        if (VAR_4->ics.ltp.lag) {
            FUNC_1(&VAR_4->ltp_state[0], 0, 3072*sizeof(VAR_4->ltp_state[0]));
            FUNC_1(&VAR_4->ics.ltp, 0, sizeof(LongTermPrediction));
        }
        return;
    }

    if (!VAR_4->ics.ltp.lag || VAR_3->lambda > 120.0f)
        return;

    for (VAR_6 = 0; VAR_6 < VAR_4->ics.num_windows; VAR_6 += VAR_4->ics.group_len[VAR_6]) {
        VAR_10 = 0;
        for (VAR_7 = 0; VAR_7 < VAR_4->ics.num_swb; VAR_7++) {
            int VAR_17 = 0, VAR_18 = 0;
            float VAR_19 = 0.0f, VAR_20 = 0.0f;
            if (VAR_6*16+VAR_7 > VAR_16) {
                VAR_10 += VAR_4->ics.swb_sizes[VAR_7];
                continue;
            }
            for (VAR_8 = 0; VAR_8 < VAR_4->ics.group_len[VAR_6]; VAR_8++) {
                int VAR_21, VAR_22;
                FFPsyBand *VAR_23 = &VAR_3->psy.ch[VAR_3->cur_channel].psy_bands[(VAR_6+VAR_8)*16+VAR_7];
                for (VAR_9 = 0; VAR_9 < VAR_4->ics.swb_sizes[VAR_7]; VAR_9++)
                    VAR_14[VAR_9] = VAR_4->coeffs[VAR_10+(VAR_6+VAR_8)*128+VAR_9] - VAR_4->lcoeffs[VAR_10+(VAR_6+VAR_8)*128+VAR_9];
                VAR_3->abs_pow34(VAR_13, &VAR_4->coeffs[VAR_10+(VAR_6+VAR_8)*128], VAR_4->ics.swb_sizes[VAR_7]);
                VAR_3->abs_pow34(VAR_15, VAR_14, VAR_4->ics.swb_sizes[VAR_7]);
                VAR_19 += FUNC_2(VAR_3, &VAR_4->coeffs[VAR_10+(VAR_6+VAR_8)*128], VAR_13, VAR_4->ics.swb_sizes[VAR_7],
                                            VAR_4->sf_idx[(VAR_6+VAR_8)*16+VAR_7], VAR_4->band_type[(VAR_6+VAR_8)*16+VAR_7],
                                            VAR_3->lambda/VAR_23->threshold, VAR_1, &VAR_21, ((void*)0), 0);
                VAR_20 += FUNC_2(VAR_3, VAR_14, VAR_15, VAR_4->ics.swb_sizes[VAR_7],
                                            VAR_4->sf_idx[(VAR_6+VAR_8)*16+VAR_7],
                                            VAR_4->band_type[(VAR_6+VAR_8)*16+VAR_7],
                                            VAR_3->lambda/VAR_23->threshold, VAR_1, &VAR_22, ((void*)0), 0);
                VAR_17 += VAR_21;
                VAR_18 += VAR_22;
            }
            if (VAR_20 < VAR_19 && VAR_18 < VAR_17) {
                for (VAR_8 = 0; VAR_8 < VAR_4->ics.group_len[VAR_6]; VAR_8++)
                    for (VAR_9 = 0; VAR_9 < VAR_4->ics.swb_sizes[VAR_7]; VAR_9++)
                        VAR_4->coeffs[VAR_10+(VAR_6+VAR_8)*128+VAR_9] -= VAR_4->lcoeffs[VAR_10+(VAR_6+VAR_8)*128+VAR_9];
                VAR_4->ics.ltp.used[VAR_6*16+VAR_7] = 1;
                VAR_12 += VAR_17 - VAR_18;
                VAR_11++;
            }
            VAR_10 += VAR_4->ics.swb_sizes[VAR_7];
        }
    }

    VAR_4->ics.ltp.present = !!VAR_11 && (VAR_12 >= 0);
    VAR_4->ics.predictor_present = !!VAR_4->ics.ltp.present;


    if (!VAR_4->ics.ltp.present && !!VAR_11) {
        for (VAR_6 = 0; VAR_6 < VAR_4->ics.num_windows; VAR_6 += VAR_4->ics.group_len[VAR_6]) {
            VAR_10 = 0;
            for (VAR_7 = 0; VAR_7 < VAR_4->ics.num_swb; VAR_7++) {
                if (VAR_4->ics.ltp.used[VAR_6*16+VAR_7]) {
                    for (VAR_8 = 0; VAR_8 < VAR_4->ics.group_len[VAR_6]; VAR_8++) {
                        for (VAR_9 = 0; VAR_9 < VAR_4->ics.swb_sizes[VAR_7]; VAR_9++) {
                            VAR_4->coeffs[VAR_10+(VAR_6+VAR_8)*128+VAR_9] += VAR_4->lcoeffs[VAR_10+(VAR_6+VAR_8)*128+VAR_9];
                        }
                    }
                }
                VAR_10 += VAR_4->ics.swb_sizes[VAR_7];
            }
        }
    }
}
