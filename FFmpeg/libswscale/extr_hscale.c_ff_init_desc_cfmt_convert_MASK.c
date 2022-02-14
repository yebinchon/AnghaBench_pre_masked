
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {int * pal; } ;
struct TYPE_5__ {int * process; int * dst; int * src; TYPE_2__* instance; } ;
typedef int SwsSlice ;
typedef TYPE_1__ SwsFilterDescriptor ;
typedef TYPE_2__ ColorContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 TYPE_2__* FUNC_1 (int) ;
 int VAR_1 ;

int FUNC_2(SwsFilterDescriptor *VAR_2, SwsSlice * VAR_3, SwsSlice *VAR_4, uint32_t *VAR_5)
{
    ColorContext * VAR_6 = FUNC_1(sizeof(ColorContext));
    if (!VAR_6)
        return FUNC_0(VAR_0);
    VAR_6->pal = VAR_5;
    VAR_2->instance = VAR_6;

    VAR_2->src =VAR_3;
    VAR_2->dst = VAR_4;
    VAR_2->process = &VAR_1;

    return 0;
}
