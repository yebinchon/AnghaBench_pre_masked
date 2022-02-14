
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_14__ ;


typedef size_t u32 ;
struct TYPE_20__ {TYPE_14__* priority; } ;
struct TYPE_24__ {int sync_state; TYPE_1__ queues; } ;
typedef TYPE_5__ lwp_thrqueue ;
struct TYPE_25__ {struct TYPE_25__* prev; struct TYPE_25__* next; } ;
typedef TYPE_6__ lwp_node ;
struct TYPE_19__ {TYPE_6__* last; TYPE_6__* first; } ;
struct TYPE_23__ {TYPE_14__ block2n; } ;
struct TYPE_21__ {TYPE_6__* prev; TYPE_6__* next; } ;
struct TYPE_22__ {TYPE_2__ node; } ;
struct TYPE_26__ {int timer; TYPE_4__ wait; TYPE_3__ object; } ;
typedef TYPE_7__ lwp_cntrl ;



 size_t VAR_0 ;



 int FUNC_0 (size_t) ;
 int FUNC_1 (size_t) ;
 TYPE_6__* FUNC_2 (TYPE_14__*) ;
 int FUNC_3 (TYPE_14__*) ;
 int FUNC_4 (TYPE_14__*) ;
 TYPE_6__* FUNC_5 (TYPE_14__*) ;
 int FUNC_6 (TYPE_7__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 TYPE_7__* VAR_1 ;
 int FUNC_10 (char*,TYPE_7__*,...) ;

lwp_cntrl* FUNC_11(lwp_thrqueue *VAR_2)
{
 u32 VAR_3,VAR_4;
 lwp_cntrl *VAR_5,*VAR_6 = ((void*)0);
 lwp_node *VAR_7,*VAR_8,*VAR_9,*VAR_10,*VAR_11;

 FUNC_0(VAR_3);
 for(VAR_4=0;VAR_4<VAR_0;VAR_4++) {
  if(!FUNC_3(&VAR_2->queues.priority[VAR_4])) {
   VAR_6 = (lwp_cntrl*)VAR_2->queues.priority[VAR_4].first;
   goto dequeue;
  }
 }




 switch(VAR_2->sync_state) {
  case 129:
  case 130:
   FUNC_1(VAR_3);
   return ((void*)0);
  case 131:
  case 128:
   VAR_2->sync_state = 130;
   FUNC_1(VAR_3);
   return VAR_1;
 }

dequeue:



 VAR_7 = VAR_6->wait.block2n.first;
 VAR_5 = (lwp_cntrl*)VAR_7;
 VAR_10 = VAR_6->object.node.next;
 VAR_11 = VAR_6->object.node.prev;
 if(!FUNC_3(&VAR_6->wait.block2n)) {
  VAR_9 = VAR_6->wait.block2n.last;
  VAR_8 = VAR_7->next;
  VAR_11->next = VAR_7;
  VAR_10->prev = VAR_7;
  VAR_7->next = VAR_10;
  VAR_7->prev = VAR_11;

  if(!FUNC_4(&VAR_6->wait.block2n)) {
   VAR_8->prev = FUNC_2(&VAR_5->wait.block2n);
   VAR_5->wait.block2n.first = VAR_8;
   VAR_5->wait.block2n.last = VAR_9;
   VAR_9->next = FUNC_5(&VAR_5->wait.block2n);
  }
 } else {
  VAR_11->next = VAR_10;
  VAR_10->prev = VAR_11;
 }

 if(!FUNC_8(&VAR_6->timer)) {
  FUNC_1(VAR_3);
  FUNC_6(VAR_6);
 } else {
  FUNC_7(&VAR_6->timer);
  FUNC_1(VAR_3);
  FUNC_9(&VAR_6->timer);
  FUNC_6(VAR_6);
 }
 return VAR_6;
}
