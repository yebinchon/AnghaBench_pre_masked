
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ acp1; } ;
struct TYPE_8__ {TYPE_1__ function; struct TYPE_8__* next; } ;
typedef TYPE_2__ thinker_t ;
struct TYPE_9__ {scalar_t__ type; } ;
typedef TYPE_3__ mobj_t ;
typedef scalar_t__ actionf_p1 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ VAR_2 ;
 TYPE_3__** VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 TYPE_2__ VAR_6 ;

void FUNC_1 (mobj_t* VAR_7)
{
    thinker_t* VAR_8;
    mobj_t* VAR_9;


    VAR_4 = 0;
    VAR_2 = 0;

    VAR_8 = VAR_6.next;
    for (VAR_8 = VAR_6.next ;
  VAR_8 != &VAR_6 ;
  VAR_8 = VAR_8->next)
    {
 if (VAR_8->function.acp1 != (actionf_p1)VAR_1)
     continue;

 VAR_9 = (mobj_t *)VAR_8;

 if (VAR_9->type == VAR_0 )
 {
     VAR_3[VAR_4] = VAR_9;
     VAR_4++;
 }
    }

    FUNC_0 (((void*)0),VAR_5);
}
