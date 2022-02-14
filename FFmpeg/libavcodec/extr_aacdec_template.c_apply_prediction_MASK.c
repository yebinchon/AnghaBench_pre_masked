
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {TYPE_2__* oc; } ;
struct TYPE_10__ {int predictor_initialized; scalar_t__* window_sequence; int* swb_offset; scalar_t__ predictor_reset_group; scalar_t__* prediction_used; scalar_t__ predictor_present; } ;
struct TYPE_11__ {int * predictor_state; TYPE_3__ ics; int * coeffs; } ;
struct TYPE_8__ {size_t sampling_index; } ;
struct TYPE_9__ {TYPE_1__ m4ac; } ;
typedef TYPE_4__ SingleChannelElement ;
typedef TYPE_5__ AACContext ;


 scalar_t__ VAR_0 ;
 int* VAR_1 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,scalar_t__) ;

__attribute__((used)) static void FUNC_3(AACContext *VAR_2, SingleChannelElement *VAR_3)
{
    int VAR_4, VAR_5;

    if (!VAR_3->ics.predictor_initialized) {
        FUNC_1(VAR_3->predictor_state);
        VAR_3->ics.predictor_initialized = 1;
    }

    if (VAR_3->ics.window_sequence[0] != VAR_0) {
        for (VAR_4 = 0;
             VAR_4 < VAR_1[VAR_2->oc[1].m4ac.sampling_index];
             VAR_4++) {
            for (VAR_5 = VAR_3->ics.swb_offset[VAR_4];
                 VAR_5 < VAR_3->ics.swb_offset[VAR_4 + 1];
                 VAR_5++) {
                FUNC_0(&VAR_3->predictor_state[VAR_5], &VAR_3->coeffs[VAR_5],
                        VAR_3->ics.predictor_present &&
                        VAR_3->ics.prediction_used[VAR_4]);
            }
        }
        if (VAR_3->ics.predictor_reset_group)
            FUNC_2(VAR_3->predictor_state,
                                  VAR_3->ics.predictor_reset_group);
    } else
        FUNC_1(VAR_3->predictor_state);
}
