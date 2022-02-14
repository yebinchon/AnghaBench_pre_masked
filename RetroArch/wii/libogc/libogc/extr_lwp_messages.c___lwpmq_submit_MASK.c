
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_16__ {int max_msgsize; scalar_t__ num_pendingmsgs; scalar_t__ max_pendingmsgs; int wait_queue; } ;
typedef TYPE_3__ mq_cntrl ;
struct TYPE_14__ {int size; void* buffer; } ;
struct TYPE_17__ {int prio; TYPE_1__ contents; } ;
typedef TYPE_4__ mq_buffercntrl ;
struct TYPE_15__ {int cnt; int id; void* ret_arg_1; void* ret_arg; int * queue; } ;
struct TYPE_18__ {TYPE_2__ wait; } ;
typedef TYPE_5__ lwp_cntrl ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int *) ;
 TYPE_5__* FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 TYPE_4__* FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (void*,void*,int) ;
 int FUNC_8 (TYPE_3__*,TYPE_4__*,int) ;
 TYPE_5__* VAR_5 ;
 int FUNC_9 (char*,TYPE_3__*,void*,int,int,int,int) ;

u32 FUNC_10(mq_cntrl *VAR_6,u32 VAR_7,void *VAR_8,u32 VAR_9,u32 VAR_10,u32 VAR_11,u64 VAR_12)
{
 u32 VAR_13;
 lwp_cntrl *VAR_14;
 mq_buffercntrl *VAR_15;




 if(VAR_9>VAR_6->max_msgsize)
  return VAR_0;

 if(VAR_6->num_pendingmsgs==0) {
  VAR_14 = FUNC_4(&VAR_6->wait_queue);
  if(VAR_14) {
   FUNC_7(VAR_14->wait.ret_arg,VAR_8,VAR_9);
   *(u32*)VAR_14->wait.ret_arg_1 = VAR_9;
   VAR_14->wait.cnt = VAR_10;
   return VAR_1;
  }
 }

 if(VAR_6->num_pendingmsgs<VAR_6->max_pendingmsgs) {
  VAR_15 = FUNC_6(VAR_6);
  if(!VAR_15) return VAR_3;

  FUNC_7(VAR_15->contents.buffer,VAR_8,VAR_9);
  VAR_15->contents.size = VAR_9;
  VAR_15->prio = VAR_10;
  FUNC_8(VAR_6,VAR_15,VAR_10);
  return VAR_1;
 }

 if(!VAR_11) return VAR_2;
 if(FUNC_2()) return VAR_3;

 {
  lwp_cntrl *VAR_16 = VAR_5;

  FUNC_0(VAR_13);
  FUNC_3(&VAR_6->wait_queue);
  VAR_16->wait.queue = &VAR_6->wait_queue;
  VAR_16->wait.id = VAR_7;
  VAR_16->wait.ret_arg = (void*)VAR_8;
  VAR_16->wait.ret_arg_1 = (void*)VAR_9;
  VAR_16->wait.cnt = VAR_10;
  FUNC_1(VAR_13);

  FUNC_5(&VAR_6->wait_queue,VAR_12);
 }
 return VAR_4;
}
