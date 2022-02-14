
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int common_window; TYPE_3__* ch; } ;
struct TYPE_6__ {int present; int* used; } ;
struct TYPE_7__ {scalar_t__* window_sequence; int predictor_present; TYPE_1__ ltp; int max_sfb; } ;
struct TYPE_8__ {TYPE_2__ ics; } ;
typedef TYPE_3__ SingleChannelElement ;
typedef TYPE_4__ ChannelElement ;
typedef int AACEncContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;

void FUNC_1(AACEncContext *VAR_2, ChannelElement *VAR_3)
{
    int VAR_4, VAR_5 = 0;
    SingleChannelElement *VAR_6 = &VAR_3->ch[0];
    SingleChannelElement *VAR_7 = &VAR_3->ch[1];

    if (!VAR_3->common_window ||
        VAR_6->ics.window_sequence[0] == VAR_0 ||
        VAR_7->ics.window_sequence[0] == VAR_0) {
        VAR_6->ics.ltp.present = 0;
        return;
    }

    for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_6->ics.max_sfb, VAR_1); VAR_4++) {
        int VAR_8 = VAR_6->ics.ltp.used[VAR_4] + VAR_7->ics.ltp.used[VAR_4];
        if (VAR_8 != 2) {
            VAR_6->ics.ltp.used[VAR_4] = 0;
        } else {
            VAR_5++;
        }
    }

    VAR_6->ics.ltp.present = !!VAR_5;
    VAR_6->ics.predictor_present = !!VAR_5;
}
