
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmxnet3_adapter {int num_tx_queues; int shared_pa; int shared; int pdev; int queue_desc_pa; int tqd_start; int pm_conf; int rss_conf; int work; } ;
struct pci_dev {int dummy; } ;
struct net_device {int dummy; } ;
struct Vmxnet3_TxQueueDesc {int dummy; } ;
struct Vmxnet3_RxQueueDesc {int dummy; } ;
struct Vmxnet3_DriverShared {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 struct vmxnet3_adapter* FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (int ,int,int ,int ) ;
 struct net_device* FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct vmxnet3_adapter*) ;
 int FUNC_11 (struct vmxnet3_adapter*) ;

__attribute__((used)) static void
FUNC_12(struct pci_dev *VAR_2)
{
 struct net_device *VAR_3 = FUNC_7(VAR_2);
 struct vmxnet3_adapter *VAR_4 = FUNC_4(VAR_3);
 int VAR_5 = 0;
 int VAR_6;







  VAR_6 = 1;
 VAR_6 = FUNC_8(VAR_6);

 FUNC_0(&VAR_4->work);

 FUNC_9(VAR_3);

 FUNC_10(VAR_4);
 FUNC_11(VAR_4);



 FUNC_2(VAR_4->pm_conf);

 VAR_5 = sizeof(struct Vmxnet3_TxQueueDesc) * VAR_4->num_tx_queues;
 VAR_5 += sizeof(struct Vmxnet3_RxQueueDesc) * VAR_6;
 FUNC_6(VAR_4->pdev, VAR_5, VAR_4->tqd_start,
       VAR_4->queue_desc_pa);
 FUNC_6(VAR_4->pdev, sizeof(struct Vmxnet3_DriverShared),
       VAR_4->shared, VAR_4->shared_pa);
 FUNC_1(VAR_3);
}
