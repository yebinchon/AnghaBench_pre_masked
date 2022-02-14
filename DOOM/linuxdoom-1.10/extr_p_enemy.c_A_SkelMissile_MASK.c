
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int z; scalar_t__ target; scalar_t__ tracer; scalar_t__ momy; int y; scalar_t__ momx; int x; } ;
typedef TYPE_1__ mobj_t ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (TYPE_1__*,scalar_t__,int ) ;

void FUNC_2 (mobj_t* VAR_2)
{
    mobj_t* VAR_3;

    if (!VAR_2->target)
 return;

    FUNC_0 (VAR_2);
    VAR_2->z += 16*VAR_0;
    VAR_3 = FUNC_1 (VAR_2, VAR_2->target, VAR_1);
    VAR_2->z -= 16*VAR_0;

    VAR_3->x += VAR_3->momx;
    VAR_3->y += VAR_3->momy;
    VAR_3->tracer = VAR_2->target;
}
