
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int flags; int tics; int height; scalar_t__ y; scalar_t__ x; scalar_t__ momy; scalar_t__ momx; TYPE_1__* info; } ;
typedef TYPE_2__ mobj_t ;
typedef int boolean ;
struct TYPE_9__ {int radius; } ;
struct TYPE_7__ {scalar_t__ raisestate; int radius; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (TYPE_2__*,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 TYPE_2__* VAR_3 ;
 TYPE_3__* VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;

boolean FUNC_2 (mobj_t* VAR_7)
{
    int VAR_8;
    boolean VAR_9;

    if (!(VAR_7->flags & VAR_0) )
 return 1;

    if (VAR_7->tics != -1)
 return 1;

    if (VAR_7->info->raisestate == VAR_2)
 return 1;

    VAR_8 = VAR_7->info->radius + VAR_4[VAR_1].radius;

    if ( FUNC_1(VAR_7->x - VAR_5) > VAR_8
  || FUNC_1(VAR_7->y - VAR_6) > VAR_8 )
 return 1;

    VAR_3 = VAR_7;
    VAR_3->momx = VAR_3->momy = 0;
    VAR_3->height <<= 2;
    VAR_9 = FUNC_0 (VAR_3, VAR_3->x, VAR_3->y);
    VAR_3->height >>= 2;

    if (!VAR_9)
 return 1;

    return 0;
}
