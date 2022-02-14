
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vmxnet3_intr {int type; scalar_t__ num_intrs; TYPE_1__* msix_entries; } ;
struct vmxnet3_adapter {int num_tx_queues; int num_rx_queues; int * netdev; TYPE_2__* pdev; int * rx_queue; int share_intr; int * tx_queue; struct vmxnet3_intr intr; } ;
struct TYPE_4__ {int irq; } ;
struct TYPE_3__ {int vector; } ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void
FUNC_3(struct vmxnet3_adapter *VAR_3)
{
 struct vmxnet3_intr *VAR_4 = &VAR_3->intr;
 FUNC_1(VAR_4->type == VAR_2 || VAR_4->num_intrs <= 0);

 switch (VAR_4->type) {
 case 129:
  FUNC_2(VAR_3->pdev->irq, VAR_3->netdev);
  break;
 case 130:
  FUNC_2(VAR_3->pdev->irq, VAR_3->netdev);
  break;
 default:
  FUNC_0();
 }
}
