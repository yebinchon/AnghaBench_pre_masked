
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* ch; scalar_t__* is_mask; int * ms_mask; int common_window; } ;
struct TYPE_6__ {int num_windows; int* group_len; int num_swb; int* swb_sizes; } ;
struct TYPE_5__ {scalar_t__* band_type; float* coeffs; TYPE_2__ ics; } ;
typedef TYPE_2__ IndividualChannelStream ;
typedef TYPE_3__ ChannelElement ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_0(ChannelElement *VAR_1)
{
    int VAR_2, VAR_3, VAR_4, VAR_5;
    IndividualChannelStream *VAR_6 = &VAR_1->ch[0].ics;
    if (!VAR_1->common_window)
        return;
    for (VAR_2 = 0; VAR_2 < VAR_6->num_windows; VAR_2 += VAR_6->group_len[VAR_2]) {
        for (VAR_3 = 0; VAR_3 < VAR_6->group_len[VAR_2]; VAR_3++) {
            int VAR_7 = (VAR_2+VAR_3) * 128;
            for (VAR_4 = 0; VAR_4 < VAR_6->num_swb; VAR_4++) {




                if (!VAR_1->ms_mask[VAR_2*16 + VAR_4] || VAR_1->is_mask[VAR_2*16 + VAR_4]
                    || VAR_1->ch[0].band_type[VAR_2*16 + VAR_4] >= VAR_0
                    || VAR_1->ch[1].band_type[VAR_2*16 + VAR_4] >= VAR_0) {
                    VAR_7 += VAR_6->swb_sizes[VAR_4];
                    continue;
                }
                for (VAR_5 = 0; VAR_5 < VAR_6->swb_sizes[VAR_4]; VAR_5++) {
                    float VAR_8 = (VAR_1->ch[0].coeffs[VAR_7+VAR_5] + VAR_1->ch[1].coeffs[VAR_7+VAR_5]) * 0.5f;
                    float VAR_9 = VAR_8 - VAR_1->ch[1].coeffs[VAR_7+VAR_5];
                    VAR_1->ch[0].coeffs[VAR_7+VAR_5] = VAR_8;
                    VAR_1->ch[1].coeffs[VAR_7+VAR_5] = VAR_9;
                }
                VAR_7 += VAR_6->swb_sizes[VAR_4];
            }
        }
    }
}
