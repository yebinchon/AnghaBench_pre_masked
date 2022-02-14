
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int curpic_num; } ;
typedef TYPE_1__ RMStream ;


 TYPE_1__* FUNC_0 (int) ;

RMStream *FUNC_1 (void)
{
    RMStream *VAR_0 = FUNC_0(sizeof(RMStream));
    if (!VAR_0)
        return ((void*)0);
    VAR_0->curpic_num = -1;
    return VAR_0;
}
