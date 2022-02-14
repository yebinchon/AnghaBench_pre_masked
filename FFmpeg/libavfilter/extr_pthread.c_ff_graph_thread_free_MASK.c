
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* internal; } ;
struct TYPE_4__ {scalar_t__ thread; } ;
typedef TYPE_2__ AVFilterGraph ;


 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (scalar_t__) ;

void FUNC_2(AVFilterGraph *VAR_0)
{
    if (VAR_0->internal->thread)
        FUNC_1(VAR_0->internal->thread);
    FUNC_0(&VAR_0->internal->thread);
}
