
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int * ms_mask; TYPE_2__* ch; } ;
struct TYPE_5__ {int num_window_groups; int max_sfb; } ;
struct TYPE_6__ {TYPE_1__ ics; } ;
typedef int GetBitContext ;
typedef TYPE_3__ ChannelElement ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int,int) ;

__attribute__((used)) static void FUNC_2(ChannelElement *VAR_0, GetBitContext *VAR_1,
                                   int VAR_2)
{
    int VAR_3;
    int VAR_4 = VAR_0->ch[0].ics.num_window_groups * VAR_0->ch[0].ics.max_sfb;
    if (VAR_2 == 1) {
        for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++)
            VAR_0->ms_mask[VAR_3] = FUNC_0(VAR_1);
    } else if (VAR_2 == 2) {
        FUNC_1(VAR_0->ms_mask, 1, VAR_4 * sizeof(VAR_0->ms_mask[0]));
    }
}
