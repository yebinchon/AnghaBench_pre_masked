
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qlcnic_adapter {int rx_csum; TYPE_2__* msix_entries; TYPE_1__* ahw; struct pci_dev* pdev; } ;
struct pci_dev {int dev; } ;
struct net_device {int watchdog_timeo; int features; int vlan_features; int irq; int mtu; int * netdev_ops; } ;
struct TYPE_4__ {int vector; } ;
struct TYPE_3__ {int capabilities; int max_mc_count; scalar_t__ mc_enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_0 (struct qlcnic_adapter*) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (struct net_device*,int *) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (struct net_device*,int ) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ FUNC_4 (struct qlcnic_adapter*) ;
 int VAR_18 ;
 scalar_t__ FUNC_5 (struct qlcnic_adapter*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*,int *) ;

int FUNC_8(struct qlcnic_adapter *VAR_19,
   struct net_device *VAR_20, int VAR_21)
{
 int VAR_22;
 struct pci_dev *VAR_23 = VAR_19->pdev;

 VAR_19->rx_csum = 1;
 VAR_19->ahw->mc_enabled = 0;
 VAR_19->ahw->max_mc_count = VAR_13;

 VAR_20->netdev_ops = &VAR_17;
 VAR_20->watchdog_timeo = VAR_14 * VAR_0;

 FUNC_3(VAR_20, VAR_20->mtu);

 if (FUNC_4(VAR_19))
  FUNC_1(VAR_20, &VAR_18);
 else
  FUNC_1(VAR_20, &VAR_15);

 FUNC_7(VAR_20, &VAR_16);

 VAR_20->features |= (VAR_9 | VAR_7 |
        VAR_6 | VAR_1 |
        VAR_4);
 VAR_20->vlan_features |= (VAR_9 | VAR_7 |
      VAR_6 | VAR_1);

 if (FUNC_0(VAR_19)) {
  VAR_20->features |= (VAR_10 | VAR_11);
  VAR_20->vlan_features |= (VAR_10 | VAR_11);
 }

 if (VAR_21) {
  VAR_20->features |= VAR_2;
  VAR_20->vlan_features |= VAR_2;
 }

 if (FUNC_5(VAR_19))
  VAR_20->features |= (VAR_5);

 if (FUNC_4(VAR_19))
  VAR_20->features |= VAR_3;

 if (VAR_19->ahw->capabilities & VAR_12)
  VAR_20->features |= VAR_8;

 VAR_20->irq = VAR_19->msix_entries[0].vector;

 VAR_22 = FUNC_6(VAR_20);
 if (VAR_22) {
  FUNC_2(&VAR_23->dev, "failed to register net device\n");
  return VAR_22;
 }

 return 0;
}
