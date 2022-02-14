
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int u32 ;
typedef int lwp_thrqueue ;
struct TYPE_13__ {struct TYPE_13__* prev; struct TYPE_13__* next; } ;
typedef TYPE_2__ lwp_node ;
struct TYPE_15__ {TYPE_2__* last; TYPE_2__* first; } ;
struct TYPE_12__ {TYPE_7__ block2n; } ;
struct TYPE_14__ {int timer; TYPE_1__ wait; int cur_state; } ;
typedef TYPE_3__ lwp_cntrl ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_2__* FUNC_2 (TYPE_7__*) ;
 int FUNC_3 (TYPE_7__*) ;
 int FUNC_4 (TYPE_7__*) ;
 TYPE_2__* FUNC_5 (TYPE_7__*) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

void FUNC_11(lwp_thrqueue *VAR_0,lwp_cntrl *VAR_1)
{
 u32 VAR_2;
 lwp_cntrl *VAR_3;
 lwp_node *VAR_4,*VAR_5,*VAR_6,*VAR_7,*VAR_8,*VAR_9;

 VAR_4 = (lwp_node*)VAR_1;

 FUNC_0(VAR_2);
 if(FUNC_6(VAR_1->cur_state)) {
  VAR_5 = VAR_4->next;
  VAR_6 = VAR_4->prev;

  if(!FUNC_3(&VAR_1->wait.block2n)) {
   VAR_7 = VAR_1->wait.block2n.first;
   VAR_3 = (lwp_cntrl*)VAR_7;
   VAR_9 = VAR_1->wait.block2n.last;
   VAR_8 = VAR_7->next;

   VAR_6->next = VAR_7;
   VAR_5->prev = VAR_7;
   VAR_7->next = VAR_5;
   VAR_7->prev = VAR_6;

   if(!FUNC_4(&VAR_1->wait.block2n)) {
    VAR_8->prev = FUNC_2(&VAR_3->wait.block2n);
    VAR_3->wait.block2n.first = VAR_8;
    VAR_3->wait.block2n.last = VAR_9;
    VAR_9->next = FUNC_5(&VAR_3->wait.block2n);
   }
  } else {
   VAR_6->next = VAR_5;
   VAR_5->prev = VAR_6;
  }
  if(!FUNC_9(&VAR_1->timer)) {
   FUNC_1(VAR_2);
   FUNC_7(VAR_1);
  } else {
   FUNC_8(&VAR_1->timer);
   FUNC_1(VAR_2);
   FUNC_10(&VAR_1->timer);
   FUNC_7(VAR_1);
  }
 } else
  FUNC_1(VAR_2);
}
