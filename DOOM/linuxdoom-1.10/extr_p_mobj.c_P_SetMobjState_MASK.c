
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t statenum_t ;
struct TYPE_8__ {int (* acp1 ) (TYPE_3__*) ;} ;
struct TYPE_9__ {size_t nextstate; TYPE_1__ action; int frame; int sprite; int tics; } ;
typedef TYPE_2__ state_t ;
struct TYPE_10__ {int frame; int sprite; int tics; TYPE_2__* state; } ;
typedef TYPE_3__ mobj_t ;
typedef int boolean ;


 int FUNC_0 (TYPE_3__*) ;
 size_t VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_1 (TYPE_3__*) ;

boolean
FUNC_2
( mobj_t* VAR_2,
  statenum_t VAR_3 )
{
    state_t* VAR_4;

    do
    {
 if (VAR_3 == VAR_0)
 {
     VAR_2->state = (state_t *) VAR_0;
     FUNC_0 (VAR_2);
     return 0;
 }

 VAR_4 = &VAR_1[VAR_3];
 VAR_2->state = VAR_4;
 VAR_2->tics = VAR_4->tics;
 VAR_2->sprite = VAR_4->sprite;
 VAR_2->frame = VAR_4->frame;



 if (VAR_4->action.acp1)
     VAR_4->action.acp1(VAR_2);

 VAR_3 = VAR_4->nextstate;
    } while (!VAR_2->tics);

    return 1;
}
