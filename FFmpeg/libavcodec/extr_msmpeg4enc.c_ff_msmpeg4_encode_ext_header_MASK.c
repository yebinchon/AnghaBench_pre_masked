
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int bit_rate; int msmpeg4_version; scalar_t__ flipflop_rounding; int pb; TYPE_1__* avctx; } ;
struct TYPE_6__ {unsigned int den; unsigned int num; } ;
struct TYPE_5__ {int ticks_per_frame; TYPE_2__ time_base; } ;
typedef TYPE_3__ MpegEncContext ;


 unsigned int FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int,scalar_t__) ;

void FUNC_4(MpegEncContext * VAR_0)
{
        unsigned VAR_1 = VAR_0->avctx->time_base.den / VAR_0->avctx->time_base.num / FUNC_0(VAR_0->avctx->ticks_per_frame, 1);
        FUNC_3(&VAR_0->pb, 5, FUNC_1(VAR_1, 31));

        FUNC_3(&VAR_0->pb, 11, FUNC_1(VAR_0->bit_rate/1024, 2047));

        if(VAR_0->msmpeg4_version>=3)
            FUNC_3(&VAR_0->pb, 1, VAR_0->flipflop_rounding);
        else
            FUNC_2(VAR_0->flipflop_rounding==0);
}
