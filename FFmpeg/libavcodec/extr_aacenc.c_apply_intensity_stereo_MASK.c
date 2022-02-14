
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* ch; scalar_t__* ms_mask; int * is_mask; int common_window; } ;
struct TYPE_6__ {int num_windows; int* group_len; int num_swb; int* swb_sizes; } ;
struct TYPE_5__ {int* band_type; float* is_ener; int* coeffs; TYPE_2__ ics; } ;
typedef TYPE_2__ IndividualChannelStream ;
typedef TYPE_3__ ChannelElement ;



__attribute__((used)) static void FUNC_0(ChannelElement *VAR_0)
{
    int VAR_1, VAR_2, VAR_3, VAR_4;
    IndividualChannelStream *VAR_5 = &VAR_0->ch[0].ics;
    if (!VAR_0->common_window)
        return;
    for (VAR_1 = 0; VAR_1 < VAR_5->num_windows; VAR_1 += VAR_5->group_len[VAR_1]) {
        for (VAR_2 = 0; VAR_2 < VAR_5->group_len[VAR_1]; VAR_2++) {
            int VAR_6 = (VAR_1+VAR_2) * 128;
            for (VAR_3 = 0; VAR_3 < VAR_5->num_swb; VAR_3++) {
                int VAR_7 = -1 + 2 * (VAR_0->ch[1].band_type[VAR_1*16+VAR_3] - 14);
                float VAR_8 = VAR_0->ch[0].is_ener[VAR_1*16+VAR_3];
                if (!VAR_0->is_mask[VAR_1*16 + VAR_3]) {
                    VAR_6 += VAR_5->swb_sizes[VAR_3];
                    continue;
                }
                if (VAR_0->ms_mask[VAR_1*16 + VAR_3])
                    VAR_7 *= -1;
                for (VAR_4 = 0; VAR_4 < VAR_5->swb_sizes[VAR_3]; VAR_4++) {
                    float VAR_9 = (VAR_0->ch[0].coeffs[VAR_6+VAR_4] + VAR_7*VAR_0->ch[1].coeffs[VAR_6+VAR_4])*VAR_8;
                    VAR_0->ch[0].coeffs[VAR_6+VAR_4] = VAR_9;
                    VAR_0->ch[1].coeffs[VAR_6+VAR_4] = 0.0f;
                }
                VAR_6 += VAR_5->swb_sizes[VAR_3];
            }
        }
    }
}
