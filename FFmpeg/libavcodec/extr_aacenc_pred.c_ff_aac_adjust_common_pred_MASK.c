
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct AACISError {scalar_t__ error; scalar_t__ pass; } ;
struct TYPE_13__ {size_t samplerate_index; } ;
struct TYPE_12__ {int common_window; TYPE_2__* ch; } ;
struct TYPE_10__ {int const max_sfb; scalar_t__* window_sequence; int num_windows; int* group_len; int num_swb; int* prediction_used; int* swb_sizes; int predictor_present; } ;
struct TYPE_11__ {float* pcoeffs; TYPE_1__ ics; } ;
typedef TYPE_2__ SingleChannelElement ;
typedef TYPE_3__ ChannelElement ;
typedef TYPE_4__ AACEncContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int const,int const) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*,int) ;
 struct AACISError FUNC_2 (TYPE_4__*,TYPE_3__*,int,int,int,float,float,float,int,int) ;
 int const* VAR_2 ;

void FUNC_3(AACEncContext *VAR_3, ChannelElement *VAR_4)
{
    int VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10 = 0;
    SingleChannelElement *VAR_11 = &VAR_4->ch[0];
    SingleChannelElement *VAR_12 = &VAR_4->ch[1];
    const int VAR_13 = FUNC_0(VAR_11->ics.max_sfb, VAR_2[VAR_3->samplerate_index]);
    const int VAR_14 = FUNC_0(VAR_12->ics.max_sfb, VAR_2[VAR_3->samplerate_index]);
    const int VAR_15 = FUNC_0(VAR_13, VAR_14);

    if (!VAR_4->common_window ||
        VAR_11->ics.window_sequence[0] == VAR_0 ||
        VAR_12->ics.window_sequence[0] == VAR_0)
        return;

    for (VAR_6 = 0; VAR_6 < VAR_11->ics.num_windows; VAR_6 += VAR_11->ics.group_len[VAR_6]) {
        VAR_5 = 0;
        for (VAR_8 = 0; VAR_8 < VAR_11->ics.num_swb; VAR_8++) {
            int VAR_16 = VAR_6*16+VAR_8;
            int VAR_17 = VAR_11->ics.prediction_used[VAR_16] + VAR_12->ics.prediction_used[VAR_16];
            float VAR_18 = 0.0f, VAR_19 = 0.0f, VAR_20 = 0.0f;
            struct AACISError VAR_21, VAR_22, *VAR_23;
            if (VAR_16 < VAR_1 || VAR_16 > VAR_15 || VAR_17 != 2) {
                FUNC_1(VAR_11, VAR_16);
                FUNC_1(VAR_12, VAR_16);
                VAR_5 += VAR_11->ics.swb_sizes[VAR_8];
                continue;
            }
            for (VAR_7 = 0; VAR_7 < VAR_11->ics.group_len[VAR_6]; VAR_7++) {
                for (VAR_9 = 0; VAR_9 < VAR_11->ics.swb_sizes[VAR_8]; VAR_9++) {
                    float VAR_24 = VAR_11->pcoeffs[VAR_5+(VAR_6+VAR_7)*128+VAR_9];
                    float VAR_25 = VAR_12->pcoeffs[VAR_5+(VAR_6+VAR_7)*128+VAR_9];
                    VAR_18 += VAR_24*VAR_24;
                    VAR_19 += VAR_25*VAR_25;
                    VAR_20 += (VAR_24 + VAR_25)*(VAR_24 + VAR_25);
                }
            }
            VAR_21 = FUNC_2(VAR_3, VAR_4, VAR_5, VAR_6, VAR_8,
                                             VAR_18, VAR_19, VAR_20, 1, -1);
            VAR_22 = FUNC_2(VAR_3, VAR_4, VAR_5, VAR_6, VAR_8,
                                             VAR_18, VAR_19, VAR_20, 1, +1);
            VAR_23 = VAR_21 < VAR_22 ? &VAR_21 : &VAR_22;
            if (VAR_23->pass) {
                VAR_11->ics.prediction_used[VAR_16] = 1;
                VAR_12->ics.prediction_used[VAR_16] = 1;
                VAR_10++;
            } else {
                FUNC_1(VAR_11, VAR_16);
                FUNC_1(VAR_12, VAR_16);
            }
            VAR_5 += VAR_11->ics.swb_sizes[VAR_8];
        }
    }

    VAR_12->ics.predictor_present = VAR_11->ics.predictor_present = !!VAR_10;
}
