
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct pci_device_id {int dummy; } ;
struct pci_dev {int dev; } ;
struct TYPE_7__ {int addr; } ;
struct TYPE_8__ {int reg; TYPE_1__ mac; struct pch_gbe_adapter* back; } ;
struct pch_gbe_adapter {TYPE_2__ hw; int rx_ring; int tx_ring; int wake_up_evt; int reset_task; int watchdog_timer; int napi; struct pci_dev* pdev; struct net_device* netdev; } ;
struct net_device {int features; int dev_addr; int addr_len; int watchdog_timeo; int * netdev_ops; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct net_device*,int *) ;
 struct net_device* FUNC_3 (int) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,char*,int ) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int ,int ) ;
 struct pch_gbe_adapter* FUNC_13 (struct net_device*) ;
 int FUNC_14 (struct net_device*) ;
 int FUNC_15 (struct net_device*,int *,int ,int ) ;
 int FUNC_16 (struct net_device*) ;
 int FUNC_17 (struct pch_gbe_adapter*) ;
 int FUNC_18 (TYPE_2__*) ;
 int FUNC_19 (TYPE_2__*) ;
 int FUNC_20 (TYPE_2__*) ;
 int FUNC_21 (struct pch_gbe_adapter*) ;
 int FUNC_22 (TYPE_2__*) ;
 int FUNC_23 (TYPE_2__*) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_24 (struct pch_gbe_adapter*) ;
 int VAR_12 ;
 int FUNC_25 (struct net_device*) ;
 int FUNC_26 (struct pch_gbe_adapter*) ;
 int VAR_13 ;
 int FUNC_27 (struct pci_dev*) ;
 int FUNC_28 (struct pci_dev*) ;
 int FUNC_29 (struct pci_dev*,int ,int ) ;
 int FUNC_30 (struct pci_dev*) ;
 int FUNC_31 (struct pci_dev*,int ) ;
 int FUNC_32 (struct pci_dev*,int ) ;
 int FUNC_33 (struct pci_dev*,int ) ;
 int FUNC_34 (struct pci_dev*,struct net_device*) ;
 int FUNC_35 (struct pci_dev*) ;
 int FUNC_36 (struct net_device*) ;
 int FUNC_37 (int *,int ,unsigned long) ;

__attribute__((used)) static int FUNC_38(struct pci_dev *VAR_14,
     const struct pci_device_id *VAR_15)
{
 struct net_device *VAR_16;
 struct pch_gbe_adapter *VAR_17;
 int VAR_18;

 VAR_18 = FUNC_28(VAR_14);
 if (VAR_18)
  return VAR_18;

 if (FUNC_33(VAR_14, FUNC_0(64))
  || FUNC_32(VAR_14, FUNC_0(64))) {
  VAR_18 = FUNC_33(VAR_14, FUNC_0(32));
  if (VAR_18) {
   VAR_18 = FUNC_32(VAR_14,
         FUNC_0(32));
   if (VAR_18) {
    FUNC_5(&VAR_14->dev, "ERR: No usable DMA "
     "configuration, aborting\n");
    goto err_disable_device;
   }
  }
 }

 VAR_18 = FUNC_31(VAR_14, VAR_2);
 if (VAR_18) {
  FUNC_5(&VAR_14->dev,
   "ERR: Can't reserve PCI I/O and memory resources\n");
  goto err_disable_device;
 }
 FUNC_35(VAR_14);

 VAR_16 = FUNC_3((int)sizeof(struct pch_gbe_adapter));
 if (!VAR_16) {
  VAR_18 = -VAR_1;
  FUNC_5(&VAR_14->dev,
   "ERR: Can't allocate and set up an Ethernet device\n");
  goto err_release_pci;
 }
 FUNC_2(VAR_16, &VAR_14->dev);

 FUNC_34(VAR_14, VAR_16);
 VAR_17 = FUNC_13(VAR_16);
 VAR_17->netdev = VAR_16;
 VAR_17->pdev = VAR_14;
 VAR_17->hw.back = VAR_17;
 VAR_17->hw.reg = FUNC_29(VAR_14, VAR_6, 0);
 if (!VAR_17->hw.reg) {
  VAR_18 = -VAR_0;
  FUNC_5(&VAR_14->dev, "Can't ioremap\n");
  goto err_free_netdev;
 }

 VAR_16->netdev_ops = &VAR_11;
 VAR_16->watchdog_timeo = VAR_8;
 FUNC_15(VAR_16, &VAR_17->napi,
         VAR_10, VAR_7);
 VAR_16->features = VAR_5 |
  VAR_4 | VAR_3;
 FUNC_25(VAR_16);

 FUNC_22(&VAR_17->hw);
 FUNC_23(&VAR_17->hw);


 VAR_18 = FUNC_26(VAR_17);
 if (VAR_18)
  goto err_iounmap;


 VAR_18 = FUNC_21(VAR_17);
 if (VAR_18) {
  FUNC_5(&VAR_14->dev, "PHY initialize error\n");
  goto err_free_adapter;
 }
 FUNC_18(&VAR_17->hw);


 VAR_18 = FUNC_20(&VAR_17->hw);
 if (VAR_18) {
  FUNC_5(&VAR_14->dev, "MAC address Read Error\n");
  goto err_free_adapter;
 }

 FUNC_12(VAR_16->dev_addr, VAR_17->hw.mac.addr, VAR_16->addr_len);
 if (!FUNC_10(VAR_16->dev_addr)) {






  FUNC_5(&VAR_14->dev, "Invalid MAC address, "
                      "interface disabled.\n");
 }
 FUNC_37(&VAR_17->watchdog_timer, VAR_13,
      (unsigned long)VAR_17);

 FUNC_1(&VAR_17->reset_task, VAR_12);

 FUNC_17(VAR_17);


 VAR_17->wake_up_evt = VAR_9;
 FUNC_6(&VAR_14->dev, "MAC address : %pM\n", VAR_16->dev_addr);


 FUNC_24(VAR_17);

 VAR_18 = FUNC_36(VAR_16);
 if (VAR_18)
  goto err_free_adapter;

 FUNC_14(VAR_16);
 FUNC_16(VAR_16);

 FUNC_4(&VAR_14->dev, "OKIsemi(R) PCH Network Connection\n");

 FUNC_7(&VAR_14->dev, 1);
 return 0;

err_free_adapter:
 FUNC_19(&VAR_17->hw);
 FUNC_11(VAR_17->tx_ring);
 FUNC_11(VAR_17->rx_ring);
err_iounmap:
 FUNC_9(VAR_17->hw.reg);
err_free_netdev:
 FUNC_8(VAR_16);
err_release_pci:
 FUNC_30(VAR_14);
err_disable_device:
 FUNC_27(VAR_14);
 return VAR_18;
}
