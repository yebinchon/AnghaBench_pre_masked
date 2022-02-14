
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct pci_dev {int device; int irq; int dev; } ;
struct net_device {unsigned long mem_start; scalar_t__ mem_end; TYPE_1__* wireless_data; int type; int watchdog_timeo; int dev_addr; int addr_len; int * ethtool_ops; int * wireless_handlers; int * netdev_ops; int irq; int base_addr; } ;
struct TYPE_6__ {int * spy_data; } ;
struct TYPE_7__ {scalar_t__ iw_mode; int state_off; int firmware; scalar_t__ reset_task_pending; int reset_task; scalar_t__ stats_timestamp; int stats_work; int state; int slock; int stats_lock; int mgmt_wqueue; int * mgmt_received; int mgmt_lock; int reset_done; scalar_t__ device_base; TYPE_1__ wireless_data; int spy_data; int monitor_type; struct net_device* ndev; struct pci_dev* pdev; } ;
typedef TYPE_2__ islpci_private ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_2 ;
 int FUNC_1 (int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct net_device*,int *) ;
 int VAR_10 ;
 int VAR_11 ;
 struct net_device* FUNC_3 (int) ;
 int VAR_12 ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_7 (TYPE_2__*) ;
 int VAR_15 ;
 int FUNC_8 (int ,int ,int) ;
 int FUNC_9 (int *) ;
 TYPE_2__* FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct pci_dev*,int ) ;
 int FUNC_12 (struct pci_dev*,struct net_device*) ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ FUNC_13 (struct net_device*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int ,int ) ;

struct net_device *
FUNC_16(struct pci_dev *VAR_18)
{
 islpci_private *VAR_19;
 struct net_device *VAR_20 = FUNC_3(sizeof (islpci_private));

 if (!VAR_20)
  return VAR_20;

 FUNC_12(VAR_18, VAR_20);





 VAR_20->base_addr = FUNC_11(VAR_18, 0);
 VAR_20->irq = VAR_18->irq;


 VAR_20->netdev_ops = &VAR_15;
 VAR_20->wireless_handlers = &VAR_16;
 VAR_20->ethtool_ops = &VAR_14;


 VAR_20->addr_len = VAR_2;

 FUNC_8(VAR_20->dev_addr, VAR_12, 6);

 VAR_20->watchdog_timeo = VAR_7;


 VAR_19 = FUNC_10(VAR_20);
 VAR_19->ndev = VAR_20;
 VAR_19->pdev = VAR_18;
 VAR_19->monitor_type = VAR_1;
 VAR_19->ndev->type = (VAR_19->iw_mode == VAR_8) ?
  VAR_19->monitor_type : VAR_0;


 VAR_19->wireless_data.spy_data = &VAR_19->spy_data;
 VAR_20->wireless_data = &VAR_19->wireless_data;


 VAR_20->mem_start = (unsigned long) VAR_19->device_base;
 VAR_20->mem_end = VAR_20->mem_start + VAR_6;





 FUNC_5(&VAR_19->reset_done);


 FUNC_9(&VAR_19->mgmt_lock);
 VAR_19->mgmt_received = ((void*)0);
 FUNC_5(&VAR_19->mgmt_wqueue);
 FUNC_9(&VAR_19->stats_lock);
 FUNC_14(&VAR_19->slock);


 VAR_19->state = VAR_9;
 VAR_19->state_off = 1;


 FUNC_1(&VAR_19->stats_work, VAR_17);
 VAR_19->stats_timestamp = 0;

 FUNC_1(&VAR_19->reset_task, VAR_13);
 VAR_19->reset_task_pending = 0;


 if (FUNC_6(VAR_19))
  goto do_free_netdev;


 switch (VAR_18->device) {
 case 0x3877:
  FUNC_15(VAR_19->firmware, VAR_3);
  break;

 case 0x3886:
  FUNC_15(VAR_19->firmware, VAR_4);
  break;

 default:
  FUNC_15(VAR_19->firmware, VAR_5);
  break;
 }

 if (FUNC_13(VAR_20)) {
  FUNC_0(VAR_10,
        "ERROR: register_netdev() failed \n");
  goto do_islpci_free_memory;
 }

 return VAR_20;

      do_islpci_free_memory:
 FUNC_7(VAR_19);
      do_free_netdev:
 FUNC_12(VAR_18, ((void*)0));
 FUNC_4(VAR_20);
 VAR_19 = ((void*)0);
 return ((void*)0);
}
