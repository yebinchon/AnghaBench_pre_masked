
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {int angle; TYPE_6__* target; void* y; void* x; struct TYPE_14__* tracer; } ;
typedef TYPE_2__ mobj_t ;
struct TYPE_15__ {int momz; void* x; void* y; TYPE_1__* info; } ;
struct TYPE_13__ {int mass; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int VAR_1 ;
 void* FUNC_1 (int,int ) ;
 int FUNC_2 (TYPE_2__*,TYPE_6__*) ;
 int FUNC_3 (TYPE_6__*,TYPE_2__*,TYPE_2__*,int) ;
 int FUNC_4 (TYPE_2__*,TYPE_2__*,int) ;
 int FUNC_5 (TYPE_2__*,int ) ;
 int * VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;

void FUNC_6 (mobj_t* VAR_5)
{
    mobj_t* VAR_6;
    int VAR_7;

    if (!VAR_5->target)
 return;

    FUNC_0 (VAR_5);

    if (!FUNC_2 (VAR_5, VAR_5->target) )
 return;

    FUNC_5 (VAR_5, VAR_4);
    FUNC_3 (VAR_5->target, VAR_5, VAR_5, 20);
    VAR_5->target->momz = 1000*VAR_1/VAR_5->target->info->mass;

    VAR_7 = VAR_5->angle >> VAR_0;

    VAR_6 = VAR_5->tracer;

    if (!VAR_6)
 return;


    VAR_6->x = VAR_5->target->x - FUNC_1 (24*VAR_1, VAR_2[VAR_7]);
    VAR_6->y = VAR_5->target->y - FUNC_1 (24*VAR_1, VAR_3[VAR_7]);
    FUNC_4 (VAR_6, VAR_5, 70 );
}
