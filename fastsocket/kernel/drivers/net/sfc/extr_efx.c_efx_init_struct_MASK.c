
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_3__ {struct net_device* dev; } ;
struct efx_nic {int rx_checksum_enabled; int workqueue; int workqueue_name; TYPE_2__* type; int interrupt_mode; int * channel; int flush_wq; int mac_work; TYPE_1__ mdio; int * phy_op; int mac_lock; int stats_lock; struct net_device* net_dev; int name; int state; int msg_enable; struct pci_dev* pci_dev; int selftest_work; int monitor_work; int reset_work; int mtd_list; int biu_lock; } ;
struct TYPE_4__ {int phys_addr_channels; int max_interrupt_mode; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int VAR_2 ;
 int FUNC_4 (int ) ;
 int VAR_3 ;
 int FUNC_5 (struct efx_nic*,int,int *) ;
 int VAR_4 ;
 int FUNC_6 (struct efx_nic*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_7 (int *) ;
 int VAR_9 ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int *) ;
 char* FUNC_10 (struct pci_dev*) ;
 int FUNC_11 (int ,int,char*,char*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ,char*,int) ;

__attribute__((used)) static int FUNC_14(struct efx_nic *VAR_10,
      struct pci_dev *VAR_11, struct net_device *VAR_12)
{
 int VAR_13;


 FUNC_12(&VAR_10->biu_lock);



 FUNC_3(&VAR_10->reset_work, VAR_7);
 FUNC_1(&VAR_10->monitor_work, VAR_6);
 FUNC_1(&VAR_10->selftest_work, VAR_8);
 VAR_10->pci_dev = VAR_11;
 VAR_10->msg_enable = VAR_3;
 VAR_10->state = VAR_2;
 FUNC_13(VAR_10->name, FUNC_10(VAR_11), sizeof(VAR_10->name));

 VAR_10->net_dev = VAR_12;
 VAR_10->rx_checksum_enabled = 1;
 FUNC_12(&VAR_10->stats_lock);
 FUNC_9(&VAR_10->mac_lock);
 VAR_10->phy_op = &VAR_4;
 VAR_10->mdio.dev = VAR_12;
 FUNC_3(&VAR_10->mac_work, VAR_5);
 FUNC_7(&VAR_10->flush_wq);

 for (VAR_13 = 0; VAR_13 < VAR_0; VAR_13++) {
  VAR_10->channel[VAR_13] = FUNC_5(VAR_10, VAR_13, ((void*)0));
  if (!VAR_10->channel[VAR_13])
   goto fail;
 }

 FUNC_0(VAR_10->type->phys_addr_channels > VAR_0);


 VAR_10->interrupt_mode = FUNC_8(VAR_10->type->max_interrupt_mode,
      VAR_9);


 FUNC_11(VAR_10->workqueue_name, sizeof(VAR_10->workqueue_name), "sfc%s",
   FUNC_10(VAR_11));
 VAR_10->workqueue = FUNC_4(VAR_10->workqueue_name);
 if (!VAR_10->workqueue)
  goto fail;

 return 0;

fail:
 FUNC_6(VAR_10);
 return -VAR_1;
}
