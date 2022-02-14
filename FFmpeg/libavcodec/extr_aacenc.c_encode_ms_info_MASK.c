
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int ms_mode; int* ms_mask; TYPE_2__* ch; } ;
struct TYPE_5__ {int num_windows; int max_sfb; scalar_t__* group_len; } ;
struct TYPE_6__ {TYPE_1__ ics; } ;
typedef int PutBitContext ;
typedef TYPE_3__ ChannelElement ;


 int FUNC_0 (int *,int,int) ;

__attribute__((used)) static void FUNC_1(PutBitContext *VAR_0, ChannelElement *VAR_1)
{
    int VAR_2, VAR_3;

    FUNC_0(VAR_0, 2, VAR_1->ms_mode);
    if (VAR_1->ms_mode == 1)
        for (VAR_3 = 0; VAR_3 < VAR_1->ch[0].ics.num_windows; VAR_3 += VAR_1->ch[0].ics.group_len[VAR_3])
            for (VAR_2 = 0; VAR_2 < VAR_1->ch[0].ics.max_sfb; VAR_2++)
                FUNC_0(VAR_0, 1, VAR_1->ms_mask[VAR_3*16 + VAR_2]);
}
