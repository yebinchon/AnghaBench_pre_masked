
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int angle; TYPE_1__* target; int y; int x; int flags; } ;
typedef TYPE_2__ mobj_t ;
struct TYPE_4__ {int flags; int y; int x; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ,int ,int ) ;

void FUNC_2 (mobj_t* VAR_2)
{
    if (!VAR_2->target)
 return;

    VAR_2->flags &= ~VAR_0;

    VAR_2->angle = FUNC_1 (VAR_2->x,
        VAR_2->y,
        VAR_2->target->x,
        VAR_2->target->y);

    if (VAR_2->target->flags & VAR_1)
 VAR_2->angle += (FUNC_0()-FUNC_0())<<21;
}
