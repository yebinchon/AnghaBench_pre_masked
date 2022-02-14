
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct vmxnet3_adapter {int num_tx_queues; int num_rx_queues; int work; TYPE_6__* rqd_start; TYPE_4__* netdev; TYPE_3__* tqd_start; int cmd_lock; TYPE_1__* shared; } ;
struct TYPE_11__ {int error; scalar_t__ stopped; } ;
struct TYPE_12__ {TYPE_5__ status; } ;
struct TYPE_10__ {int name; int dev; } ;
struct TYPE_8__ {int error; scalar_t__ stopped; } ;
struct TYPE_9__ {TYPE_2__ status; } ;
struct TYPE_7__ {int ecr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct vmxnet3_adapter*,int ,int ) ;
 int FUNC_1 (int *,char*,int ,int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (struct vmxnet3_adapter*,int) ;
 int FUNC_7 (struct vmxnet3_adapter*,int) ;

__attribute__((used)) static void
FUNC_8(struct vmxnet3_adapter *VAR_5)
{
 int VAR_6;
 unsigned long VAR_7;
 u32 VAR_8 = FUNC_2(VAR_5->shared->ecr);
 if (!VAR_8)
  return;

 FUNC_6(VAR_5, VAR_8);


 if (VAR_8 & VAR_1)
  FUNC_7(VAR_5, 1);


 if (VAR_8 & (VAR_3 | VAR_2)) {
  FUNC_4(&VAR_5->cmd_lock, VAR_7);
  FUNC_0(VAR_5, VAR_4,
           VAR_0);
  FUNC_5(&VAR_5->cmd_lock, VAR_7);

  for (VAR_6 = 0; VAR_6 < VAR_5->num_tx_queues; VAR_6++)
   if (VAR_5->tqd_start[VAR_6].status.stopped)
    FUNC_1(&VAR_5->netdev->dev,
     "%s: tq[%d] error 0x%x\n",
     VAR_5->netdev->name, VAR_6, FUNC_2(
     VAR_5->tqd_start[VAR_6].status.error));
  for (VAR_6 = 0; VAR_6 < VAR_5->num_rx_queues; VAR_6++)
   if (VAR_5->rqd_start[VAR_6].status.stopped)
    FUNC_1(&VAR_5->netdev->dev,
     "%s: rq[%d] error 0x%x\n",
     VAR_5->netdev->name, VAR_6,
     VAR_5->rqd_start[VAR_6].status.error);

  FUNC_3(&VAR_5->work);
 }
}
