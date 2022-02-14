
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {size_t samplerate_index; } ;
struct TYPE_7__ {scalar_t__* window_sequence; int* swb_offset; scalar_t__ predictor_reset_group; scalar_t__* prediction_used; scalar_t__ predictor_present; int max_sfb; } ;
struct TYPE_8__ {int * predictor_state; TYPE_1__ ics; int * prcoeffs; int * coeffs; } ;
typedef TYPE_2__ SingleChannelElement ;
typedef TYPE_3__ AACEncContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int * VAR_1 ;
 int FUNC_1 (int *,int *,int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*,scalar_t__) ;

void FUNC_4(AACEncContext *VAR_2, SingleChannelElement *VAR_3)
{
    int VAR_4, VAR_5;
    const int VAR_6 = FUNC_0(VAR_3->ics.max_sfb, VAR_1[VAR_2->samplerate_index]);

    if (VAR_3->ics.window_sequence[0] != VAR_0) {
        for (VAR_4 = 0; VAR_4 < VAR_6; VAR_4++) {
            for (VAR_5 = VAR_3->ics.swb_offset[VAR_4]; VAR_5 < VAR_3->ics.swb_offset[VAR_4 + 1]; VAR_5++) {
                FUNC_1(&VAR_3->predictor_state[VAR_5], &VAR_3->coeffs[VAR_5], &VAR_3->prcoeffs[VAR_5],
                        VAR_3->ics.predictor_present && VAR_3->ics.prediction_used[VAR_4]);
            }
        }
        if (VAR_3->ics.predictor_reset_group) {
            FUNC_3(VAR_3, VAR_3->ics.predictor_reset_group);
        }
    } else {
        FUNC_2(VAR_3->predictor_state);
    }
}
