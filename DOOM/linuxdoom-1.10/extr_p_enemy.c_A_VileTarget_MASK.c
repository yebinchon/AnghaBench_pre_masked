
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* target; struct TYPE_6__* tracer; int z; int x; } ;
typedef TYPE_1__ mobj_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 TYPE_1__* FUNC_2 (int ,int ,int ,int ) ;

void FUNC_3 (mobj_t* VAR_1)
{
    mobj_t* VAR_2;

    if (!VAR_1->target)
 return;

    FUNC_0 (VAR_1);

    VAR_2 = FUNC_2 (VAR_1->target->x,
         VAR_1->target->x,
         VAR_1->target->z, VAR_0);

    VAR_1->tracer = VAR_2;
    VAR_2->target = VAR_1;
    VAR_2->tracer = VAR_1->target;
    FUNC_1 (VAR_2);
}
