
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {struct TYPE_7__* target; TYPE_1__* info; scalar_t__ y; scalar_t__ x; } ;
typedef TYPE_2__ mobj_t ;
typedef int fixed_t ;
typedef int boolean ;
struct TYPE_6__ {int radius; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (TYPE_2__*,TYPE_2__*) ;

boolean FUNC_2 (mobj_t* VAR_2)
{
    mobj_t* VAR_3;
    fixed_t VAR_4;

    if (!VAR_2->target)
 return 0;

    VAR_3 = VAR_2->target;
    VAR_4 = FUNC_0 (VAR_3->x-VAR_2->x, VAR_3->y-VAR_2->y);

    if (VAR_4 >= VAR_1-20*VAR_0+VAR_3->info->radius)
 return 0;

    if (! FUNC_1 (VAR_2, VAR_2->target) )
 return 0;

    return 1;
}
