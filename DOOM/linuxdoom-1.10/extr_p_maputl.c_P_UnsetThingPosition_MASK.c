
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_14__ {int flags; int x; int y; TYPE_7__* bnext; TYPE_5__* bprev; TYPE_4__* snext; TYPE_3__* subsector; TYPE_1__* sprev; } ;
typedef TYPE_6__ mobj_t ;
struct TYPE_15__ {TYPE_5__* bprev; } ;
struct TYPE_13__ {TYPE_7__* bnext; } ;
struct TYPE_12__ {TYPE_1__* sprev; } ;
struct TYPE_11__ {TYPE_2__* sector; } ;
struct TYPE_10__ {TYPE_4__* thinglist; } ;
struct TYPE_9__ {TYPE_4__* snext; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_7__** VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

void FUNC_0 (mobj_t* VAR_8)
{
    int VAR_9;
    int VAR_10;

    if ( ! (VAR_8->flags & VAR_2) )
    {


 if (VAR_8->snext)
     VAR_8->snext->sprev = VAR_8->sprev;

 if (VAR_8->sprev)
     VAR_8->sprev->snext = VAR_8->snext;
 else
     VAR_8->subsector->sector->thinglist = VAR_8->snext;
    }

    if ( ! (VAR_8->flags & VAR_1) )
    {


 if (VAR_8->bnext)
     VAR_8->bnext->bprev = VAR_8->bprev;

 if (VAR_8->bprev)
     VAR_8->bprev->bnext = VAR_8->bnext;
 else
 {
     VAR_9 = (VAR_8->x - VAR_5)>>VAR_0;
     VAR_10 = (VAR_8->y - VAR_6)>>VAR_0;

     if (VAR_9>=0 && VAR_9 < VAR_7
  && VAR_10>=0 && VAR_10 <VAR_4)
     {
  VAR_3[VAR_10*VAR_7+VAR_9] = VAR_8->bnext;
     }
 }
    }
}
