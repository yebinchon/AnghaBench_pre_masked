
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int depth; int index; } ;
typedef TYPE_1__ hb_preset_index_t ;


 TYPE_1__* FUNC_0 (int ,int ) ;

hb_preset_index_t* FUNC_1(const hb_preset_index_t *VAR_0)
{
    if (VAR_0 == ((void*)0))
        return ((void*)0);
    return FUNC_0(VAR_0->index, VAR_0->depth);
}
