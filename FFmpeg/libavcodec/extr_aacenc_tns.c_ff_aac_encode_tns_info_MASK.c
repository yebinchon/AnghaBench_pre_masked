
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int* n_filt; int** length; int** order; int** direction; int*** coef_idx; int present; } ;
typedef TYPE_2__ TemporalNoiseShaping ;
struct TYPE_10__ {int pb; } ;
struct TYPE_7__ {scalar_t__* window_sequence; int num_windows; } ;
struct TYPE_9__ {TYPE_2__ tns; TYPE_1__ ics; } ;
typedef TYPE_3__ SingleChannelElement ;
typedef TYPE_4__ AACEncContext ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int*,int,int const) ;
 int FUNC_1 (int *,int,int const) ;

void FUNC_2(AACEncContext *VAR_3, SingleChannelElement *VAR_4)
{
    TemporalNoiseShaping *VAR_5 = &VAR_4->tns;
    int VAR_6, VAR_7, VAR_8, VAR_9 = 0, VAR_10;
    const int VAR_11 = VAR_4->ics.window_sequence[0] == VAR_0;
    const int VAR_12 = VAR_11 ? VAR_2 == 4 : VAR_1 == 4;

    if (!VAR_4->tns.present)
        return;

    for (VAR_6 = 0; VAR_6 < VAR_4->ics.num_windows; VAR_6++) {
        FUNC_1(&VAR_3->pb, 2 - VAR_11, VAR_4->tns.n_filt[VAR_6]);
        if (!VAR_5->n_filt[VAR_6])
            continue;
        FUNC_1(&VAR_3->pb, 1, VAR_12);
        for (VAR_8 = 0; VAR_8 < VAR_5->n_filt[VAR_6]; VAR_8++) {
            FUNC_1(&VAR_3->pb, 6 - 2 * VAR_11, VAR_5->length[VAR_6][VAR_8]);
            FUNC_1(&VAR_3->pb, 5 - 2 * VAR_11, VAR_5->order[VAR_6][VAR_8]);
            if (!VAR_5->order[VAR_6][VAR_8])
                continue;
            FUNC_1(&VAR_3->pb, 1, VAR_5->direction[VAR_6][VAR_8]);
            VAR_9 = FUNC_0(VAR_5->coef_idx[VAR_6][VAR_8],
                                            VAR_5->order[VAR_6][VAR_8], VAR_12);
            FUNC_1(&VAR_3->pb, 1, VAR_9);
            VAR_10 = VAR_12 + 3 - VAR_9;
            for (VAR_7 = 0; VAR_7 < VAR_5->order[VAR_6][VAR_8]; VAR_7++)
                FUNC_1(&VAR_3->pb, VAR_10, VAR_5->coef_idx[VAR_6][VAR_8][VAR_7]);
        }
    }
}
