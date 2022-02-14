
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ acp1; } ;
struct TYPE_10__ {TYPE_1__ function; struct TYPE_10__* next; } ;
typedef TYPE_2__ thinker_t ;
struct TYPE_11__ {scalar_t__ type; scalar_t__ health; } ;
typedef TYPE_3__ mobj_t ;
struct TYPE_12__ {int tag; } ;
typedef TYPE_4__ line_t ;
typedef scalar_t__ actionf_p1 ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_4__*,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;

void FUNC_2 (mobj_t* VAR_3)
{
    thinker_t* VAR_4;
    mobj_t* VAR_5;
    line_t VAR_6;

    FUNC_0 (VAR_3);



    for (VAR_4 = VAR_2.next ; VAR_4 != &VAR_2 ; VAR_4=VAR_4->next)
    {
 if (VAR_4->function.acp1 != (actionf_p1)VAR_0)
     continue;

 VAR_5 = (mobj_t *)VAR_4;
 if (VAR_5 != VAR_3
     && VAR_5->type == VAR_3->type
     && VAR_5->health > 0)
 {

     return;
 }
    }

    VAR_6.tag = 666;
    FUNC_1(&VAR_6,VAR_1);
}
