
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* info; TYPE_5__* target; } ;
typedef TYPE_2__ mobj_t ;
struct TYPE_10__ {scalar_t__ health; } ;
struct TYPE_8__ {int seestate; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,TYPE_5__*) ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_2__*,int ) ;

void FUNC_4 (mobj_t* VAR_0)
{

    FUNC_0 (VAR_0);

    if (FUNC_2 () < 10)
 return;

    if (!VAR_0->target
 || VAR_0->target->health <= 0
 || !FUNC_1 (VAR_0, VAR_0->target) )
    {
 FUNC_3 (VAR_0, VAR_0->info->seestate);
    }
}
