
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {TYPE_2__* oc; int avctx; } ;
struct TYPE_9__ {int predictor_reset_group; scalar_t__* prediction_used; int max_sfb; } ;
struct TYPE_7__ {size_t sampling_index; } ;
struct TYPE_8__ {TYPE_1__ m4ac; } ;
typedef TYPE_3__ IndividualChannelStream ;
typedef int GetBitContext ;
typedef TYPE_4__ AACContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,char*) ;
 int * VAR_2 ;
 int FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(AACContext *VAR_3, IndividualChannelStream *VAR_4,
                             GetBitContext *VAR_5)
{
    int VAR_6;
    if (FUNC_3(VAR_5)) {
        VAR_4->predictor_reset_group = FUNC_2(VAR_5, 5);
        if (VAR_4->predictor_reset_group == 0 ||
            VAR_4->predictor_reset_group > 30) {
            FUNC_1(VAR_3->avctx, VAR_1,
                   "Invalid Predictor Reset Group.\n");
            return VAR_0;
        }
    }
    for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_4->max_sfb, VAR_2[VAR_3->oc[1].m4ac.sampling_index]); VAR_6++) {
        VAR_4->prediction_used[VAR_6] = FUNC_3(VAR_5);
    }
    return 0;
}
