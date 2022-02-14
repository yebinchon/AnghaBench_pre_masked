
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int pb; } ;
struct TYPE_5__ {int* window_sequence; int* use_kb_window; int max_sfb; int * group_len; int predictor_present; } ;
typedef TYPE_1__ IndividualChannelStream ;
typedef TYPE_2__ AACEncContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int,int) ;

__attribute__((used)) static void FUNC_1(AACEncContext *VAR_1, IndividualChannelStream *VAR_2)
{
    int VAR_3;

    FUNC_0(&VAR_1->pb, 1, 0);
    FUNC_0(&VAR_1->pb, 2, VAR_2->window_sequence[0]);
    FUNC_0(&VAR_1->pb, 1, VAR_2->use_kb_window[0]);
    if (VAR_2->window_sequence[0] != VAR_0) {
        FUNC_0(&VAR_1->pb, 6, VAR_2->max_sfb);
        FUNC_0(&VAR_1->pb, 1, !!VAR_2->predictor_present);
    } else {
        FUNC_0(&VAR_1->pb, 4, VAR_2->max_sfb);
        for (VAR_3 = 1; VAR_3 < 8; VAR_3++)
            FUNC_0(&VAR_1->pb, 1, !VAR_2->group_len[VAR_3]);
    }
}
