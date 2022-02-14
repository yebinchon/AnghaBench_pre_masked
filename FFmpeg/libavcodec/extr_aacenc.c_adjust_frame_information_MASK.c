
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int ms_mode; scalar_t__* ms_mask; TYPE_2__* ch; scalar_t__ common_window; } ;
struct TYPE_8__ {int num_windows; int* group_len; int num_swb; int max_sfb; } ;
struct TYPE_6__ {scalar_t__ num_pulse; } ;
struct TYPE_7__ {int* zeroes; TYPE_3__ ics; TYPE_1__ pulse; } ;
typedef TYPE_3__ IndividualChannelStream ;
typedef TYPE_4__ ChannelElement ;


 void* FUNC_0 (int,int) ;

__attribute__((used)) static void FUNC_1(ChannelElement *VAR_0, int VAR_1)
{
    int VAR_2, VAR_3, VAR_4, VAR_5, VAR_6;
    int VAR_7, VAR_8;

    for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
        IndividualChannelStream *VAR_9 = &VAR_0->ch[VAR_6].ics;
        VAR_7 = 0;
        VAR_0->ch[VAR_6].pulse.num_pulse = 0;
        for (VAR_3 = 0; VAR_3 < VAR_9->num_windows; VAR_3 += VAR_9->group_len[VAR_3]) {
            for (VAR_4 = 0; VAR_4 < VAR_9->group_len[VAR_3]; VAR_4++) {
                for (VAR_8 = VAR_9->num_swb; VAR_8 > 0 && VAR_0->ch[VAR_6].zeroes[VAR_3*16+VAR_8-1]; VAR_8--)
                    ;
                VAR_7 = FUNC_0(VAR_7, VAR_8);
            }
        }
        VAR_9->max_sfb = VAR_7;


        for (VAR_3 = 0; VAR_3 < VAR_9->num_windows; VAR_3 += VAR_9->group_len[VAR_3]) {
            for (VAR_5 = 0; VAR_5 < VAR_9->max_sfb; VAR_5++) {
                VAR_2 = 1;
                for (VAR_4 = VAR_3; VAR_4 < VAR_3 + VAR_9->group_len[VAR_3]; VAR_4++) {
                    if (!VAR_0->ch[VAR_6].zeroes[VAR_4*16 + VAR_5]) {
                        VAR_2 = 0;
                        break;
                    }
                }
                VAR_0->ch[VAR_6].zeroes[VAR_3*16 + VAR_5] = VAR_2;
            }
        }
    }

    if (VAR_1 > 1 && VAR_0->common_window) {
        IndividualChannelStream *VAR_10 = &VAR_0->ch[0].ics;
        IndividualChannelStream *VAR_11 = &VAR_0->ch[1].ics;
        int VAR_12 = 0;
        VAR_10->max_sfb = FUNC_0(VAR_10->max_sfb, VAR_11->max_sfb);
        VAR_11->max_sfb = VAR_10->max_sfb;
        for (VAR_3 = 0; VAR_3 < VAR_10->num_windows*16; VAR_3 += 16)
            for (VAR_2 = 0; VAR_2 < VAR_10->max_sfb; VAR_2++)
                if (VAR_0->ms_mask[VAR_3+VAR_2])
                    VAR_12++;
        if (VAR_12 == 0 || VAR_10->max_sfb == 0)
            VAR_0->ms_mode = 0;
        else
            VAR_0->ms_mode = VAR_12 < VAR_10->max_sfb * VAR_10->num_windows ? 1 : 2;
    }
}
