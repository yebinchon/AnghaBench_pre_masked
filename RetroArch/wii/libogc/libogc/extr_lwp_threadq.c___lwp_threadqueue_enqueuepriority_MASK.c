
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_9__ ;
typedef struct TYPE_26__ TYPE_8__ ;
typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef int u64 ;
typedef size_t u32 ;
struct TYPE_19__ {TYPE_7__* priority; } ;
struct TYPE_24__ {size_t state; scalar_t__ sync_state; TYPE_1__ queues; } ;
typedef TYPE_6__ lwp_thrqueue ;
struct TYPE_25__ {scalar_t__ last; scalar_t__ first; } ;
typedef TYPE_7__ lwp_queue ;
struct TYPE_26__ {struct TYPE_26__* prev; struct TYPE_26__* next; } ;
typedef TYPE_8__ lwp_node ;
struct TYPE_23__ {TYPE_4__* queue; int ret_code; int block2n; } ;
struct TYPE_20__ {scalar_t__ prev; scalar_t__ next; } ;
struct TYPE_21__ {TYPE_2__ node; } ;
struct TYPE_27__ {size_t cur_prio; int timer; TYPE_5__ wait; TYPE_3__ object; int cur_state; } ;
typedef TYPE_9__ lwp_cntrl ;
struct TYPE_22__ {int timeout_state; } ;


 int VAR_0 ;
 size_t VAR_1 ;

 size_t VAR_2 ;
 size_t VAR_3 ;



 int FUNC_0 (size_t) ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (size_t) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_7__*,TYPE_8__*) ;
 int FUNC_5 (TYPE_7__*,TYPE_8__*) ;
 TYPE_8__* FUNC_6 (int *) ;
 int FUNC_7 (int ,size_t) ;
 int FUNC_8 (TYPE_9__*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (char*,TYPE_9__*,...) ;

void FUNC_13(lwp_thrqueue *VAR_4,lwp_cntrl *VAR_5,u64 VAR_6)
{
 u32 VAR_7,VAR_8,VAR_9,VAR_10,VAR_11,VAR_12;
 lwp_cntrl *VAR_13;
 lwp_queue *VAR_14;
 lwp_node *VAR_15,*VAR_16,*VAR_17,*VAR_18;

 FUNC_3(&VAR_5->wait.block2n);

 VAR_10 = VAR_5->cur_prio;
 VAR_9 = VAR_10/VAR_2;
 VAR_14 = &VAR_4->queues.priority[VAR_9];
 VAR_11 = VAR_4->state;

 if(VAR_10&VAR_3) {



  goto reverse_search;
 }




forward_search:
 VAR_8 = VAR_1 - 1;
 FUNC_0(VAR_7);
 VAR_13 = (lwp_cntrl*)VAR_14->first;
 while(!FUNC_5(VAR_14,(lwp_node*)VAR_13)) {
  VAR_8 = VAR_13->cur_prio;
  if(VAR_10<=VAR_8) break;
  FUNC_1(VAR_7);

  if(!FUNC_7(VAR_13->cur_state,VAR_11)) {
   FUNC_2(VAR_7);
   goto forward_search;
  }
  VAR_13 = (lwp_cntrl*)VAR_13->object.node.next;
 }
 if(VAR_4->sync_state!=131) goto synchronize;
 VAR_4->sync_state = 129;
 if(VAR_10==VAR_8) goto equal_prio;

 VAR_18 = (lwp_node*)VAR_13;
 VAR_17 = VAR_18->prev;
 VAR_15 = (lwp_node*)VAR_5;

 VAR_15->next = VAR_18;
 VAR_15->prev = VAR_17;
 VAR_17->next = VAR_15;
 VAR_18->prev = VAR_15;
 FUNC_2(VAR_7);
 return;

reverse_search:
 VAR_8 = VAR_0 + 1;
 FUNC_0(VAR_7);
 VAR_13 = (lwp_cntrl*)VAR_14->last;
 while(!FUNC_4(VAR_14,(lwp_node*)VAR_13)) {
  VAR_8 = VAR_13->cur_prio;
  if(VAR_10>=VAR_8) break;
  FUNC_1(VAR_7);

  if(!FUNC_7(VAR_13->cur_state,VAR_11)) {
   FUNC_2(VAR_7);
   goto reverse_search;
  }
  VAR_13 = (lwp_cntrl*)VAR_13->object.node.prev;
 }
 if(VAR_4->sync_state!=131) goto synchronize;
 VAR_4->sync_state = 129;
 if(VAR_10==VAR_8) goto equal_prio;

 VAR_18 = (lwp_node*)VAR_13;
 VAR_16 = VAR_18->next;
 VAR_15 = (lwp_node*)VAR_5;

 VAR_15->next = VAR_16;
 VAR_15->prev = VAR_18;
 VAR_18->next = VAR_15;
 VAR_16->prev = VAR_15;
 FUNC_2(VAR_7);
 return;

equal_prio:



 VAR_18 = FUNC_6(&VAR_13->wait.block2n);
 VAR_17 = VAR_18->prev;
 VAR_15 = (lwp_node*)VAR_5;

 VAR_15->next = VAR_18;
 VAR_15->prev = VAR_17;
 VAR_17->next = VAR_15;
 VAR_18->prev = VAR_15;
 FUNC_2(VAR_7);
 return;

synchronize:
 VAR_12 = VAR_4->sync_state;
 VAR_4->sync_state = 129;




 switch(VAR_12) {
  case 129:
   break;
  case 131:
   break;
  case 128:
   VAR_5->wait.ret_code = VAR_5->wait.queue->timeout_state;
   FUNC_2(VAR_7);
   break;
  case 130:
   if(FUNC_10(&VAR_5->timer)) {
    FUNC_9(&VAR_5->timer);
    FUNC_2(VAR_7);
    FUNC_11(&VAR_5->timer);
   } else
    FUNC_2(VAR_7);
   break;
 }
 FUNC_8(VAR_5);
}
