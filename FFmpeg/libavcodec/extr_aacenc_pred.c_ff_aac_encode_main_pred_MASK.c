
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {size_t samplerate_index; scalar_t__ profile; int pb; } ;
struct TYPE_7__ {int predictor_reset_group; int* prediction_used; int predictor_present; int max_sfb; } ;
struct TYPE_6__ {TYPE_2__ ics; } ;
typedef TYPE_1__ SingleChannelElement ;
typedef TYPE_2__ IndividualChannelStream ;
typedef TYPE_3__ AACEncContext ;


 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (int *,int,int) ;

void FUNC_2(AACEncContext *VAR_2, SingleChannelElement *VAR_3)
{
    int VAR_4;
    IndividualChannelStream *VAR_5 = &VAR_3->ics;
    const int VAR_6 = FUNC_0(VAR_5->max_sfb, VAR_1[VAR_2->samplerate_index]);

    if (VAR_2->profile != VAR_0 ||
        !VAR_5->predictor_present)
        return;

    FUNC_1(&VAR_2->pb, 1, !!VAR_5->predictor_reset_group);
    if (VAR_5->predictor_reset_group)
        FUNC_1(&VAR_2->pb, 5, VAR_5->predictor_reset_group);
    for (VAR_4 = 0; VAR_4 < VAR_6; VAR_4++)
        FUNC_1(&VAR_2->pb, 1, VAR_5->prediction_used[VAR_4]);
}
