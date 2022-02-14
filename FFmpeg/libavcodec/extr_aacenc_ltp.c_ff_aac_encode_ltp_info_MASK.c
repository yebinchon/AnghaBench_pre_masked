
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ profile; int pb; } ;
struct TYPE_7__ {int * used; int coef_idx; int lag; int present; } ;
struct TYPE_9__ {TYPE_1__ ltp; int max_sfb; int predictor_present; } ;
struct TYPE_8__ {TYPE_3__ ics; } ;
typedef TYPE_2__ SingleChannelElement ;
typedef TYPE_3__ IndividualChannelStream ;
typedef TYPE_4__ AACEncContext ;


 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int,int ) ;

void FUNC_2(AACEncContext *VAR_2, SingleChannelElement *VAR_3,
                            int VAR_4)
{
    int VAR_5;
    IndividualChannelStream *VAR_6 = &VAR_3->ics;
    if (VAR_2->profile != VAR_0 || !VAR_6->predictor_present)
        return;
    if (VAR_4)
        FUNC_1(&VAR_2->pb, 1, 0);
    FUNC_1(&VAR_2->pb, 1, VAR_6->ltp.present);
    if (!VAR_6->ltp.present)
        return;
    FUNC_1(&VAR_2->pb, 11, VAR_6->ltp.lag);
    FUNC_1(&VAR_2->pb, 3, VAR_6->ltp.coef_idx);
    for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_6->max_sfb, VAR_1); VAR_5++)
        FUNC_1(&VAR_2->pb, 1, VAR_6->ltp.used[VAR_5]);
}
