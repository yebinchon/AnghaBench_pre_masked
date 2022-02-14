
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_17__ {TYPE_4__* first; } ;
struct TYPE_15__ {int num_pendingmsgs; int notify_arg; int (* notify_handler ) (int ) ;TYPE_3__ pending_msgs; } ;
typedef TYPE_1__ mq_cntrl ;
struct TYPE_16__ {int prio; int node; } ;
typedef TYPE_2__ mq_buffercntrl ;
typedef TYPE_3__ lwp_queue ;
struct TYPE_18__ {int prev; struct TYPE_18__* next; } ;
typedef TYPE_4__ lwp_node ;




 int FUNC_0 (int ,int *) ;
 int FUNC_1 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_2 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_3 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_4 (char*,TYPE_1__*,TYPE_2__*,int) ;
 int FUNC_5 (int ) ;

void FUNC_6(mq_cntrl *VAR_0,mq_buffercntrl *VAR_1,u32 VAR_2)
{
 ++VAR_0->num_pendingmsgs;
 VAR_1->prio = VAR_2;





 switch(VAR_2) {
  case 129:
   FUNC_2(VAR_0,VAR_1);
   break;
  case 128:
   FUNC_3(VAR_0,VAR_1);
   break;
  default:
  {
   mq_buffercntrl *VAR_3;
   lwp_node *VAR_4;
   lwp_queue *VAR_5;

   VAR_5 = &VAR_0->pending_msgs;
   VAR_4 = VAR_5->first;
   while(!FUNC_1(VAR_5,VAR_4)) {
    VAR_3 = (mq_buffercntrl*)VAR_4;
    if(VAR_3->prio<=VAR_1->prio) {
     VAR_4 = VAR_4->next;
     continue;
    }
    break;
   }
   FUNC_0(VAR_4->prev,&VAR_1->node);
  }
  break;
 }

 if(VAR_0->num_pendingmsgs==1 && VAR_0->notify_handler)
  VAR_0->notify_handler(VAR_0->notify_arg);
}
