
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {TYPE_1__* ch; } ;
struct TYPE_17__ {size_t samplerate_index; float* scoefs; size_t cur_channel; int lambda; int (* abs_pow34 ) (float*,float*,int const) ;TYPE_2__ psy; } ;
struct TYPE_16__ {int threshold; } ;
struct TYPE_14__ {scalar_t__* window_sequence; int predictor_present; int predictor_initialized; int* predictor_reset_count; int* swb_offset; int* prediction_used; int max_sfb; } ;
struct TYPE_15__ {int* prcoeffs; int* coeffs; int* band_alt; int* band_type; TYPE_3__ ics; int * sf_idx; scalar_t__* zeroes; int predictor_state; } ;
struct TYPE_12__ {TYPE_5__* psy_bands; } ;
typedef TYPE_4__ SingleChannelElement ;
typedef TYPE_5__ FFPsyBand ;
typedef TYPE_6__ AACEncContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int const VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int const VAR_6 ;
 int FUNC_1 (TYPE_4__*,int) ;
 int FUNC_2 (int ,int const,int const) ;
 int * VAR_7 ;
 int FUNC_3 (int,int const,float*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int*,int*,int) ;
 int FUNC_6 (int**,int ,int) ;
 float FUNC_7 (TYPE_6__*,int *,float*,float*,float*,int const,int ,int const,int,int ,int*,int *,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (float*,float*,int const) ;
 int FUNC_10 (float*,float*,int const) ;
 int FUNC_11 (float*,float*,int const) ;
 int FUNC_12 (TYPE_4__*) ;

void FUNC_13(AACEncContext *VAR_8, SingleChannelElement *VAR_9)
{
    int VAR_10, VAR_11, VAR_12 = 0, VAR_13 = 0, VAR_14 = 0;
    const int VAR_15 = FUNC_0(VAR_9->ics.max_sfb, VAR_7[VAR_8->samplerate_index]);
    float *VAR_16 = &VAR_8->scoefs[128*0], *VAR_17 = &VAR_8->scoefs[128*1];
    float *VAR_18 = &VAR_8->scoefs[128*2], *VAR_19 = &VAR_8->scoefs[128*3];
    float *VAR_20 = &VAR_8->scoefs[128*4];

    if (VAR_9->ics.window_sequence[0] == VAR_0) {
        VAR_9->ics.predictor_present = 0;
        return;
    }

    if (!VAR_9->ics.predictor_initialized) {
        FUNC_8(VAR_9->predictor_state);
        VAR_9->ics.predictor_initialized = 1;
        FUNC_5(VAR_9->prcoeffs, VAR_9->coeffs, 1024*sizeof(float));
        for (VAR_11 = 1; VAR_11 < 31; VAR_11++)
            VAR_9->ics.predictor_reset_count[VAR_11] = VAR_11;
    }

    FUNC_12(VAR_9);
    FUNC_5(VAR_9->band_alt, VAR_9->band_type, sizeof(VAR_9->band_type));

    for (VAR_10 = VAR_5; VAR_10 < VAR_15; VAR_10++) {
        int VAR_21, VAR_22, VAR_23;
        float VAR_24, VAR_25, VAR_26 = 0.0f;
        const int VAR_27 = VAR_9->zeroes[VAR_10] ? 0 : VAR_9->band_type[VAR_10];
        const int VAR_28 = VAR_9->zeroes[VAR_10] ? 0 : 1;
        const int VAR_29 = VAR_9->zeroes[VAR_10] ? 0 : VAR_6;
        const int VAR_30 = VAR_9->ics.swb_offset[VAR_10];
        const int VAR_31 = VAR_9->ics.swb_offset[VAR_10 + 1] - VAR_30;
        const FFPsyBand *VAR_32 = &VAR_8->psy.ch[VAR_8->cur_channel].psy_bands[VAR_10];

        if (VAR_30 + VAR_31 > VAR_3 ||
            (VAR_8->cur_channel && VAR_9->band_type[VAR_10] >= VAR_2) ||
            VAR_9->band_type[VAR_10] == VAR_4)
            continue;


        VAR_8->abs_pow34(VAR_16, &VAR_9->coeffs[VAR_30], VAR_31);
        VAR_24 = FUNC_7(VAR_8, ((void*)0), &VAR_9->coeffs[VAR_30], ((void*)0),
                                              VAR_16, VAR_31, VAR_9->sf_idx[VAR_10],
                                              VAR_27, VAR_8->lambda / VAR_32->threshold, VAR_1, &VAR_21, ((void*)0), 0);
        VAR_13 += VAR_21;


        for (VAR_11 = 0; VAR_11 < VAR_31; VAR_11++)
            VAR_18[VAR_11] = VAR_9->coeffs[VAR_30 + VAR_11] - VAR_9->prcoeffs[VAR_30 + VAR_11];
        VAR_8->abs_pow34(VAR_19, VAR_18, VAR_31);
        if (VAR_27 < VAR_6)
            VAR_23 = FUNC_2(FUNC_4(FUNC_3(1, VAR_31, VAR_19), VAR_9->sf_idx[VAR_10]), VAR_28, VAR_29);
        else
            VAR_23 = VAR_27;
        FUNC_7(VAR_8, ((void*)0), VAR_18, VAR_20, VAR_19, VAR_31,
                                      VAR_9->sf_idx[VAR_10], VAR_23, VAR_8->lambda / VAR_32->threshold, VAR_1,
                                      &VAR_22, ((void*)0), 0);


        for (VAR_11 = 0; VAR_11 < VAR_31; VAR_11++)
            VAR_9->prcoeffs[VAR_30 + VAR_11] += VAR_20[VAR_11] != 0.0f ? (VAR_9->prcoeffs[VAR_30 + VAR_11] - VAR_20[VAR_11]) : 0.0f;
        VAR_8->abs_pow34(VAR_17, &VAR_9->prcoeffs[VAR_30], VAR_31);
        if (VAR_27 < VAR_6)
            VAR_23 = FUNC_2(FUNC_4(FUNC_3(1, VAR_31, VAR_17), VAR_9->sf_idx[VAR_10]), VAR_28, VAR_29);
        else
            VAR_23 = VAR_27;
        VAR_25 = FUNC_7(VAR_8, ((void*)0), &VAR_9->prcoeffs[VAR_30], ((void*)0),
                                              VAR_17, VAR_31, VAR_9->sf_idx[VAR_10],
                                              VAR_23, VAR_8->lambda / VAR_32->threshold, VAR_1, ((void*)0), ((void*)0), 0);
        for (VAR_11 = 0; VAR_11 < VAR_31; VAR_11++)
            VAR_26 += (VAR_16[VAR_11] - VAR_17[VAR_11])*(VAR_16[VAR_11] - VAR_17[VAR_11]);
        VAR_26 *= VAR_8->lambda / VAR_32->threshold;
        VAR_25 += VAR_26;

        if (VAR_25 <= VAR_24 && VAR_23 <= VAR_27) {
            VAR_14 += VAR_22;
            VAR_9->ics.prediction_used[VAR_10] = 1;
            VAR_9->band_alt[VAR_10] = VAR_27;
            VAR_9->band_type[VAR_10] = VAR_23;
            VAR_12++;
        } else {
            VAR_14 += VAR_21;
            VAR_9->band_alt[VAR_10] = VAR_23;
        }
    }

    if (VAR_12 && VAR_13 < VAR_14) {
        VAR_12 = 0;
        for (VAR_10 = VAR_5; VAR_10 < VAR_15; VAR_10++)
            FUNC_1(VAR_9, VAR_10);
        FUNC_6(&VAR_9->ics.prediction_used, 0, sizeof(VAR_9->ics.prediction_used));
    }

    VAR_9->ics.predictor_present = !!VAR_12;
}
