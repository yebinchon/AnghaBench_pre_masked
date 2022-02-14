
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* avctx; } ;
typedef TYPE_2__ V4L2m2mContext ;
typedef int V4L2Buffer ;
struct TYPE_8__ {scalar_t__ num; } ;
struct TYPE_6__ {TYPE_3__ time_base; TYPE_3__ pkt_timebase; } ;
typedef TYPE_3__ AVRational ;


 TYPE_2__* FUNC_0 (int *) ;

__attribute__((used)) static inline AVRational FUNC_1(V4L2Buffer *VAR_0)
{
    V4L2m2mContext *VAR_1 = FUNC_0(VAR_0);

    if (VAR_1->avctx->pkt_timebase.num)
        return VAR_1->avctx->pkt_timebase;
    return VAR_1->avctx->time_base;
}
