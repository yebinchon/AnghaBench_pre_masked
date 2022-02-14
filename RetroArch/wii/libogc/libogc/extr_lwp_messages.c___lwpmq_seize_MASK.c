
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_18__ {int num_pendingmsgs; int wait_queue; } ;
typedef TYPE_3__ mq_cntrl ;
struct TYPE_16__ {int size; void* buffer; } ;
struct TYPE_19__ {int prio; TYPE_1__ contents; } ;
typedef TYPE_4__ mq_buffercntrl ;
struct TYPE_17__ {int ret_code; void* ret_arg; int id; void* ret_arg_1; int * queue; int cnt; } ;
struct TYPE_20__ {TYPE_2__ wait; } ;
typedef TYPE_5__ lwp_cntrl ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 TYPE_5__* FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (void*,void*,int) ;
 int FUNC_6 (TYPE_3__*,TYPE_4__*) ;
 TYPE_4__* FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*,TYPE_4__*,int ) ;
 TYPE_5__* VAR_2 ;
 int FUNC_9 (char*,TYPE_3__*,int,void*,int*,int,int) ;

u32 FUNC_10(mq_cntrl *VAR_3,u32 VAR_4,void *VAR_5,u32 *VAR_6,u32 VAR_7,u64 VAR_8)
{
 u32 VAR_9;
 mq_buffercntrl *VAR_10;
 lwp_cntrl *VAR_11,*VAR_12;

 VAR_11 = VAR_2;
 VAR_11->wait.ret_code = VAR_0;




 FUNC_0(VAR_9);
 if(VAR_3->num_pendingmsgs!=0) {
  --VAR_3->num_pendingmsgs;
  VAR_10 = FUNC_7(VAR_3);
  FUNC_1(VAR_9);

  *VAR_6 = VAR_10->contents.size;
  VAR_11->wait.cnt = VAR_10->prio;
  FUNC_5(VAR_5,VAR_10->contents.buffer,*VAR_6);

  VAR_12 = FUNC_3(&VAR_3->wait_queue);
  if(!VAR_12) {
   FUNC_6(VAR_3,VAR_10);
   return VAR_0;
  }

  VAR_10->prio = VAR_12->wait.cnt;
  VAR_10->contents.size = (u32)VAR_12->wait.ret_arg_1;
  FUNC_5(VAR_10->contents.buffer,VAR_12->wait.ret_arg,VAR_10->contents.size);

  FUNC_8(VAR_3,VAR_10,VAR_10->prio);
  return VAR_0;
 }

 if(!VAR_7) {
  FUNC_1(VAR_9);
  VAR_11->wait.ret_code = VAR_1;
  return VAR_1;
 }

 FUNC_2(&VAR_3->wait_queue);
 VAR_11->wait.queue = &VAR_3->wait_queue;
 VAR_11->wait.id = VAR_4;
 VAR_11->wait.ret_arg = (void*)VAR_5;
 VAR_11->wait.ret_arg_1 = (void*)VAR_6;
 FUNC_1(VAR_9);

 FUNC_4(&VAR_3->wait_queue,VAR_8);
 return VAR_0;
}
