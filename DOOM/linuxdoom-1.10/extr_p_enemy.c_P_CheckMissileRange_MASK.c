
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int flags; scalar_t__ type; TYPE_1__* info; TYPE_4__* target; scalar_t__ y; scalar_t__ x; scalar_t__ reactiontime; } ;
typedef TYPE_2__ mobj_t ;
typedef int fixed_t ;
typedef int boolean ;
struct TYPE_8__ {scalar_t__ y; scalar_t__ x; } ;
struct TYPE_6__ {int meleestate; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (TYPE_2__*,TYPE_4__*) ;
 int FUNC_2 () ;

boolean FUNC_3 (mobj_t* VAR_7)
{
    fixed_t VAR_8;

    if (! FUNC_1 (VAR_7, VAR_7->target) )
 return 0;

    if ( VAR_7->flags & VAR_1 )
    {


 VAR_7->flags &= ~VAR_1;
 return 1;
    }

    if (VAR_7->reactiontime)
 return 0;


    VAR_8 = FUNC_0 ( VAR_7->x-VAR_7->target->x,
        VAR_7->y-VAR_7->target->y) - 64*VAR_0;

    if (!VAR_7->info->meleestate)
 VAR_8 -= 128*VAR_0;

    VAR_8 >>= 16;

    if (VAR_7->type == VAR_6)
    {
 if (VAR_8 > 14*64)
     return 0;
    }


    if (VAR_7->type == VAR_5)
    {
 if (VAR_8 < 196)
     return 0;
 VAR_8 >>= 1;
    }


    if (VAR_7->type == VAR_2
 || VAR_7->type == VAR_4
 || VAR_7->type == VAR_3)
    {
 VAR_8 >>= 1;
    }

    if (VAR_8 > 200)
 VAR_8 = 200;

    if (VAR_7->type == VAR_2 && VAR_8 > 160)
 VAR_8 = 160;

    if (FUNC_2 () < VAR_8)
 return 0;

    return 1;
}
