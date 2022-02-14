
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_10__ {int * pal; } ;
struct TYPE_9__ {int alpha; int * process; TYPE_1__* dst; TYPE_1__* src; TYPE_3__* instance; } ;
struct TYPE_8__ {int fmt; } ;
typedef TYPE_1__ SwsSlice ;
typedef TYPE_2__ SwsFilterDescriptor ;
typedef TYPE_3__ ColorContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 TYPE_3__* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_1 ;

int FUNC_3(SwsFilterDescriptor *VAR_2, SwsSlice * VAR_3, SwsSlice *VAR_4, uint32_t *VAR_5)
{
    ColorContext * VAR_6 = FUNC_1(sizeof(ColorContext));
    if (!VAR_6)
        return FUNC_0(VAR_0);
    VAR_6->pal = VAR_5;
    VAR_2->instance = VAR_6;

    VAR_2->alpha = FUNC_2(VAR_3->fmt) && FUNC_2(VAR_4->fmt);
    VAR_2->src =VAR_3;
    VAR_2->dst = VAR_4;
    VAR_2->process = &VAR_1;

    return 0;
}
