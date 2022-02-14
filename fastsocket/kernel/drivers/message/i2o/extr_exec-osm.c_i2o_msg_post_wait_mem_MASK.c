
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {void* tcntxt; void* icntxt; } ;
struct TYPE_6__ {TYPE_1__ s; } ;
struct i2o_message {TYPE_2__ u; } ;
struct i2o_dma {int * virt; } ;
struct i2o_exec_wait {int m; int lock; TYPE_3__* msg; scalar_t__ complete; int * wq; int list; int tcntxt; struct i2o_dma dma; } ;
struct i2o_controller {int dummy; } ;
struct TYPE_8__ {int context; } ;
struct TYPE_7__ {int * body; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 void* FUNC_1 (int ) ;
 TYPE_4__ VAR_3 ;
 struct i2o_exec_wait* FUNC_2 () ;
 int FUNC_3 (struct i2o_exec_wait*) ;
 int VAR_4 ;
 int FUNC_4 (struct i2o_controller*,int ) ;
 int FUNC_5 (struct i2o_controller*,struct i2o_message*) ;
 int FUNC_6 (struct i2o_controller*,struct i2o_message*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int ,scalar_t__,unsigned long) ;
 int VAR_5 ;

int FUNC_12(struct i2o_controller *VAR_6, struct i2o_message *VAR_7,
     unsigned long VAR_8, struct i2o_dma *VAR_9)
{
 FUNC_0(VAR_5);
 struct i2o_exec_wait *VAR_10;
 static u32 VAR_11 = 0x80000000;
 unsigned long VAR_12;
 int VAR_13 = 0;

 VAR_10 = FUNC_2();
 if (!VAR_10) {
  FUNC_5(VAR_6, VAR_7);
  return -VAR_0;
 }

 if (VAR_11 == 0xffffffff)
  VAR_11 = 0x80000000;

 if (VAR_9)
  VAR_10->dma = *VAR_9;






 VAR_7->u.s.icntxt = FUNC_1(VAR_3.context);
 VAR_10->tcntxt = VAR_11++;
 VAR_7->u.s.tcntxt = FUNC_1(VAR_10->tcntxt);

 VAR_10->wq = &VAR_5;




 FUNC_8(&VAR_10->list, &VAR_4);





 FUNC_6(VAR_6, VAR_7);

 FUNC_11(VAR_5, VAR_10->complete, VAR_8 * VAR_2);

 FUNC_9(&VAR_10->lock, VAR_12);

 VAR_10->wq = ((void*)0);

 if (VAR_10->complete)
  VAR_13 = FUNC_7(VAR_10->msg->body[0]) >> 24;
 else {







  if (VAR_9)
   VAR_9->virt = ((void*)0);

  VAR_13 = -VAR_1;
 }

 FUNC_10(&VAR_10->lock, VAR_12);

 if (VAR_13 != -VAR_1) {
  FUNC_4(VAR_6, VAR_10->m);
  FUNC_3(VAR_10);
 }

 return VAR_13;
}
