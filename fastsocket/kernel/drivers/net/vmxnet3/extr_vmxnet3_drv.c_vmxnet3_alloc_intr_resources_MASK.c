
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int type; int mask_mode; int num_intrs; TYPE_1__* msix_entries; } ;
struct vmxnet3_adapter {scalar_t__ share_intr; int num_tx_queues; int num_rx_queues; TYPE_2__ intr; TYPE_4__* netdev; TYPE_3__* pdev; int cmd_lock; } ;
struct TYPE_8__ {int dev; } ;
struct TYPE_7__ {int dev; } ;
struct TYPE_5__ {int entry; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct vmxnet3_adapter*,int ) ;
 int VAR_8 ;
 int FUNC_1 (struct vmxnet3_adapter*,int ,int ) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (TYPE_4__*,char*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (struct vmxnet3_adapter*,int) ;

__attribute__((used)) static void
FUNC_8(struct vmxnet3_adapter *VAR_9)
{
 u32 VAR_10;
 unsigned long VAR_11;


 FUNC_5(&VAR_9->cmd_lock, VAR_11);
 FUNC_1(VAR_9, VAR_8,
          VAR_0);
 VAR_10 = FUNC_0(VAR_9, VAR_8);
 FUNC_6(&VAR_9->cmd_lock, VAR_11);
 VAR_9->intr.type = VAR_10 & 0x3;
 VAR_9->intr.mask_mode = (VAR_10 >> 2) & 0x3;

 if (VAR_9->intr.type == VAR_3) {
  VAR_9->intr.type = VAR_6;
 }
 VAR_9->num_rx_queues = 1;
 FUNC_2(&VAR_9->netdev->dev,
   "Using INTx interrupt, #Rx queues: 1.\n");
 VAR_9->intr.type = VAR_4;


 VAR_9->intr.num_intrs = 1;
}
