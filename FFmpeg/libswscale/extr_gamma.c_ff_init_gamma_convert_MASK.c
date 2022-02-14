
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_6__ {int * table; } ;
struct TYPE_5__ {int * process; int * dst; int * src; TYPE_2__* instance; } ;
typedef int SwsSlice ;
typedef TYPE_1__ SwsFilterDescriptor ;
typedef TYPE_2__ GammaContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 TYPE_2__* FUNC_1 (int) ;
 int VAR_1 ;

int FUNC_2(SwsFilterDescriptor *VAR_2, SwsSlice * VAR_3, uint16_t *VAR_4)
{
    GammaContext *VAR_5 = FUNC_1(sizeof(GammaContext));
    if (!VAR_5)
        return FUNC_0(VAR_0);
    VAR_5->table = VAR_4;

    VAR_2->instance = VAR_5;
    VAR_2->src = VAR_3;
    VAR_2->dst = ((void*)0);
    VAR_2->process = &VAR_1;

    return 0;
}
