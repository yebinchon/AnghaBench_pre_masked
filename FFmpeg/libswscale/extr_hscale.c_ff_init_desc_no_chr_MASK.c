
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * process; int * instance; scalar_t__ alpha; int * dst; int * src; } ;
typedef int SwsSlice ;
typedef TYPE_1__ SwsFilterDescriptor ;


 int VAR_0 ;

int FUNC_0(SwsFilterDescriptor *VAR_1, SwsSlice * VAR_2, SwsSlice *VAR_3)
{
    VAR_1->src = VAR_2;
    VAR_1->dst = VAR_3;
    VAR_1->alpha = 0;
    VAR_1->instance = ((void*)0);
    VAR_1->process = &VAR_0;
    return 0;
}
