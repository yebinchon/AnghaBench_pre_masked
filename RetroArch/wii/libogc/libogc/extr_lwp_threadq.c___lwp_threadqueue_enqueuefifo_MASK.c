
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_11__ {int fifo; } ;
struct TYPE_15__ {int sync_state; TYPE_1__ queues; } ;
typedef TYPE_5__ lwp_thrqueue ;
struct TYPE_14__ {TYPE_3__* queue; int ret_code; } ;
struct TYPE_12__ {int node; } ;
struct TYPE_16__ {int timer; TYPE_4__ wait; TYPE_2__ object; } ;
typedef TYPE_6__ lwp_cntrl ;
struct TYPE_13__ {int timeout_state; } ;






 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (TYPE_6__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*,TYPE_6__*,int) ;

void FUNC_8(lwp_thrqueue *VAR_0,lwp_cntrl *VAR_1,u64 VAR_2)
{
 u32 VAR_3,VAR_4;

 FUNC_0(VAR_3);

 VAR_4 = VAR_0->sync_state;
 VAR_0->sync_state = 129;



 switch(VAR_4) {
  case 129:
   break;
  case 131:
   FUNC_2(&VAR_0->queues.fifo,&VAR_1->object.node);
   FUNC_1(VAR_3);
   return;
  case 128:
   VAR_1->wait.ret_code = VAR_1->wait.queue->timeout_state;
   FUNC_1(VAR_3);
   break;
  case 130:
   if(FUNC_5(&VAR_1->timer)) {
    FUNC_4(&VAR_1->timer);
    FUNC_1(VAR_3);
    FUNC_6(&VAR_1->timer);
   } else
    FUNC_1(VAR_3);

   break;
 }
 FUNC_3(VAR_1);
}
