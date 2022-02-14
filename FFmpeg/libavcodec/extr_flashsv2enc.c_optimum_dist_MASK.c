
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {double den; } ;
struct TYPE_7__ {double bit_rate; double ticks_per_frame; TYPE_1__ time_base; } ;
struct TYPE_6__ {double total_bits; TYPE_4__* avctx; } ;
typedef TYPE_2__ FlashSV2Context ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*,int ,char*,int) ;
 double VAR_1 ;
 int FUNC_1 (double,int) ;

__attribute__((used)) static int FUNC_2(FlashSV2Context * VAR_2)
{

    double VAR_3 =
        VAR_2->avctx->bit_rate * VAR_2->avctx->time_base.den *
        VAR_2->avctx->ticks_per_frame;
    int VAR_4 = FUNC_1((VAR_2->total_bits / VAR_3) * VAR_1, 3);
    FUNC_0(VAR_2->avctx, VAR_0, "dist: %d\n", VAR_4);
    return VAR_4;



}
