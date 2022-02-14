
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {int present; int* n_filt; int** direction; int** order; int** length; int ** coef; int ** coef_idx; } ;
typedef TYPE_4__ TemporalNoiseShaping ;
struct TYPE_12__ {TYPE_2__* ch; } ;
struct TYPE_16__ {size_t samplerate_index; scalar_t__ profile; size_t cur_channel; int lpc; TYPE_3__ psy; } ;
struct TYPE_15__ {scalar_t__ energy; } ;
struct TYPE_10__ {scalar_t__* window_sequence; int num_swb; int* swb_offset; int num_windows; int max_sfb; int tns_max_bands; } ;
struct TYPE_14__ {TYPE_4__ tns; int * coeffs; TYPE_1__ ics; } ;
struct TYPE_11__ {TYPE_6__* psy_bands; } ;
typedef TYPE_5__ SingleChannelElement ;
typedef TYPE_6__ FFPsyBand ;
typedef TYPE_7__ AACEncContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 double VAR_5 ;
 double VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int,int ,int const) ;
 double FUNC_2 (int *,int *,int const,int const,double*) ;
 int FUNC_3 (double) ;
 int FUNC_4 (double*,int ,int ,int,int const) ;
 int** VAR_10 ;

void FUNC_5(AACEncContext *VAR_11, SingleChannelElement *VAR_12)
{
    TemporalNoiseShaping *VAR_13 = &VAR_12->tns;
    int VAR_14, VAR_15, VAR_16 = 0;
    double VAR_17, VAR_18[VAR_4];
    const int VAR_19 = FUNC_0(VAR_12->ics.tns_max_bands, VAR_12->ics.max_sfb);
    const int VAR_20 = VAR_12->ics.window_sequence[0] == VAR_0;
    const int VAR_21 = VAR_20 ? VAR_9 == 4 : VAR_8 == 4;
    const int VAR_22 = FUNC_1(VAR_10[VAR_20][VAR_11->samplerate_index], 0, VAR_19);
    const int VAR_23 = FUNC_1(VAR_12->ics.num_swb, 0, VAR_19);
    const int VAR_24 = VAR_20 ? 7 : VAR_11->profile == VAR_1 ? 12 : VAR_7;
    const int VAR_25 = VAR_12->ics.window_sequence[0] == VAR_3 ? 1 :
                      VAR_12->ics.window_sequence[0] == VAR_2 ? 0 : 2;
    const int VAR_26 = VAR_23 - VAR_22;
    const int VAR_27 = VAR_12->ics.swb_offset[VAR_23] - VAR_12->ics.swb_offset[VAR_22];

    if (VAR_27 <= 0 || VAR_26 <= 0) {
        VAR_12->tns.present = 0;
        return;
    }

    for (VAR_14 = 0; VAR_14 < VAR_12->ics.num_windows; VAR_14++) {
        float VAR_28[2] = {0.0f, 0.0f};
        int VAR_29 = 0, VAR_30 = 0;
        int VAR_31 = VAR_12->ics.swb_offset[VAR_22];

        for (VAR_15 = VAR_22; VAR_15 < VAR_12->ics.num_swb && VAR_15 <= VAR_23; VAR_15++) {
            FFPsyBand *VAR_32 = &VAR_11->psy.ch[VAR_11->cur_channel].psy_bands[VAR_14*16+VAR_15];
            if (VAR_15 > VAR_22 + (VAR_26/2))
                VAR_28[1] += VAR_32->energy;
            else
                VAR_28[0] += VAR_32->energy;
        }


        VAR_17 = FUNC_2(&VAR_11->lpc, &VAR_12->coeffs[VAR_14*128 + VAR_31],
                                       VAR_27, VAR_24, VAR_18);

        if (!VAR_24 || !FUNC_3(VAR_17) || VAR_17 < VAR_6 || VAR_17 > VAR_5)
            continue;

        VAR_13->n_filt[VAR_14] = VAR_20 ? 1 : VAR_24 != VAR_7 ? 2 : 3;
        for (VAR_15 = 0; VAR_15 < VAR_13->n_filt[VAR_14]; VAR_15++) {
            VAR_13->direction[VAR_14][VAR_15] = VAR_25 != 2 ? VAR_25 : VAR_28[VAR_15] < VAR_28[!VAR_15];
            VAR_13->order[VAR_14][VAR_15] = VAR_15 < VAR_13->n_filt[VAR_14] ? VAR_24/VAR_13->n_filt[VAR_14] : VAR_24 - VAR_29;
            VAR_13->length[VAR_14][VAR_15] = VAR_15 < VAR_13->n_filt[VAR_14] ? VAR_26/VAR_13->n_filt[VAR_14] : VAR_26 - VAR_30;
            FUNC_4(&VAR_18[VAR_29], VAR_13->coef_idx[VAR_14][VAR_15], VAR_13->coef[VAR_14][VAR_15],
                            VAR_13->order[VAR_14][VAR_15], VAR_21);
            VAR_29 += VAR_13->order[VAR_14][VAR_15];
            VAR_30 += VAR_13->length[VAR_14][VAR_15];
        }
        VAR_16++;
    }
    VAR_12->tns.present = !!VAR_16;
}
