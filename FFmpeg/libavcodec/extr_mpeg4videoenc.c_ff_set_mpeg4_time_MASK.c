
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ pict_type; TYPE_2__* avctx; int time; int time_base; int last_time_base; } ;
struct TYPE_6__ {int den; } ;
struct TYPE_7__ {TYPE_1__ time_base; } ;
typedef TYPE_3__ MpegEncContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_3__*) ;

void FUNC_2(MpegEncContext *VAR_1)
{
    if (VAR_1->pict_type == VAR_0) {
        FUNC_1(VAR_1);
    } else {
        VAR_1->last_time_base = VAR_1->time_base;
        VAR_1->time_base = FUNC_0(VAR_1->time, VAR_1->avctx->time_base.den);
    }
}
