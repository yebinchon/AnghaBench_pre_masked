
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int all_layouts; } ;
typedef TYPE_1__ AVFilterChannelLayouts ;


 TYPE_1__* FUNC_0 (int) ;

AVFilterChannelLayouts *FUNC_1(void)
{
    AVFilterChannelLayouts *VAR_0 = FUNC_0(sizeof(*VAR_0));
    if (!VAR_0)
        return ((void*)0);
    VAR_0->all_layouts = 1;
    return VAR_0;
}
