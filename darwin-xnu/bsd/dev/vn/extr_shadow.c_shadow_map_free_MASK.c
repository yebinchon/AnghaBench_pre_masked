
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* bands; struct TYPE_4__* block_bitmap; } ;
typedef TYPE_1__ shadow_map_t ;


 int FUNC_0 (TYPE_1__*) ;

void
FUNC_1(shadow_map_t * VAR_0)
{
    if (VAR_0->block_bitmap)
 FUNC_0(VAR_0->block_bitmap);
    if (VAR_0->bands)
 FUNC_0(VAR_0->bands);
    VAR_0->block_bitmap = ((void*)0);
    VAR_0->bands = ((void*)0);
    FUNC_0(VAR_0);
    return;
}
