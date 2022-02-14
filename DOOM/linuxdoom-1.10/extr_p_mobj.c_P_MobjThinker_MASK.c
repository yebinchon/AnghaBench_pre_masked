
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ acv; } ;
struct TYPE_11__ {TYPE_1__ function; } ;
struct TYPE_13__ {int flags; scalar_t__ z; scalar_t__ floorz; int tics; int movecount; TYPE_3__* state; TYPE_2__ thinker; scalar_t__ momz; scalar_t__ momy; scalar_t__ momx; } ;
typedef TYPE_4__ mobj_t ;
typedef scalar_t__ actionf_v ;
struct TYPE_12__ {int nextstate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_4__*,int ) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*) ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_5 (mobj_t* VAR_4)
{

    if (VAR_4->momx
 || VAR_4->momy
 || (VAR_4->flags&VAR_1) )
    {
 FUNC_3 (VAR_4);


 if (VAR_4->thinker.function.acv == (actionf_v) (-1))
     return;
    }
    if ( (VAR_4->z != VAR_4->floorz)
  || VAR_4->momz )
    {
 FUNC_4 (VAR_4);


 if (VAR_4->thinker.function.acv == (actionf_v) (-1))
     return;
    }




    if (VAR_4->tics != -1)
    {
 VAR_4->tics--;


 if (!VAR_4->tics)
     if (!FUNC_2 (VAR_4, VAR_4->state->nextstate) )
  return;
    }
    else
    {

 if (! (VAR_4->flags & VAR_0) )
     return;

 if (!VAR_3)
     return;

 VAR_4->movecount++;

 if (VAR_4->movecount < 12*35)
     return;

 if ( VAR_2&31 )
     return;

 if (FUNC_1 () > 4)
     return;

 FUNC_0 (VAR_4);
    }

}
