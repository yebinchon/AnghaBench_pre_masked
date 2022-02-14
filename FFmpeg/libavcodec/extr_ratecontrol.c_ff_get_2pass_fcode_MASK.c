
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* entry; } ;
struct TYPE_7__ {size_t picture_number; int b_code; int f_code; TYPE_2__ rc_context; } ;
struct TYPE_5__ {int b_code; int f_code; } ;
typedef TYPE_1__ RateControlEntry ;
typedef TYPE_2__ RateControlContext ;
typedef TYPE_3__ MpegEncContext ;



void FUNC_0(MpegEncContext *VAR_0)
{
    RateControlContext *VAR_1 = &VAR_0->rc_context;
    RateControlEntry *VAR_2 = &VAR_1->entry[VAR_0->picture_number];

    VAR_0->f_code = VAR_2->f_code;
    VAR_0->b_code = VAR_2->b_code;
}
