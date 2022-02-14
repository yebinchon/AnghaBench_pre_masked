
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_10__ {int* filter_pos; int filter_size; int xInc; int * filter; } ;
struct TYPE_9__ {int alpha; int * process; TYPE_1__* dst; TYPE_1__* src; TYPE_3__* instance; } ;
struct TYPE_8__ {int fmt; } ;
typedef TYPE_1__ SwsSlice ;
typedef TYPE_2__ SwsFilterDescriptor ;
typedef TYPE_3__ FilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 TYPE_3__* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_1 ;

int FUNC_3(SwsFilterDescriptor *VAR_2, SwsSlice *VAR_3, SwsSlice *VAR_4, uint16_t *VAR_5, int * VAR_6, int VAR_7, int VAR_8)
{
    FilterContext *VAR_9 = FUNC_1(sizeof(FilterContext));
    if (!VAR_9)
        return FUNC_0(VAR_0);

    VAR_9->filter = VAR_5;
    VAR_9->filter_pos = VAR_6;
    VAR_9->filter_size = VAR_7;
    VAR_9->xInc = VAR_8;

    VAR_2->instance = VAR_9;

    VAR_2->alpha = FUNC_2(VAR_3->fmt) && FUNC_2(VAR_4->fmt);
    VAR_2->src = VAR_3;
    VAR_2->dst = VAR_4;

    VAR_2->process = &VAR_1;

    return 0;
}
