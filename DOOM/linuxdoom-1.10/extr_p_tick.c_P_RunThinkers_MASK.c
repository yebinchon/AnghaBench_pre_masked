
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ acv; int (* acp1 ) (TYPE_3__*) ;} ;
struct TYPE_9__ {struct TYPE_9__* next; TYPE_1__ function; TYPE_2__* prev; } ;
typedef TYPE_3__ thinker_t ;
typedef scalar_t__ actionf_v ;
struct TYPE_8__ {TYPE_3__* next; } ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 TYPE_3__ VAR_0 ;

void FUNC_2 (void)
{
    thinker_t* VAR_1;

    VAR_1 = VAR_0.next;
    while (VAR_1 != &VAR_0)
    {
 if ( VAR_1->function.acv == (actionf_v)(-1) )
 {

     VAR_1->next->prev = VAR_1->prev;
     VAR_1->prev->next = VAR_1->next;
     FUNC_0 (VAR_1);
 }
 else
 {
     if (VAR_1->function.acp1)
  VAR_1->function.acp1 (VAR_1);
 }
 VAR_1 = VAR_1->next;
    }
}
