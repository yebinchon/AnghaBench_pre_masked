
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ total_bits; TYPE_2__* avctx; } ;
struct TYPE_5__ {int den; scalar_t__ num; } ;
struct TYPE_6__ {int bit_rate; int ticks_per_frame; double frame_number; scalar_t__ global_quality; TYPE_1__ time_base; } ;
typedef TYPE_3__ FlashSV2Context ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_0(FlashSV2Context * VAR_1)
{

    double VAR_2 = ((double)(VAR_1->avctx->bit_rate * VAR_1->avctx->time_base.den * VAR_1->avctx->ticks_per_frame)) /
        ((double) VAR_1->avctx->time_base.num) * VAR_1->avctx->frame_number;
    if (VAR_2 + VAR_0 < VAR_1->total_bits) {
        return 1;
    } else {
        return 0;
    }



}
