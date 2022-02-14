
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pci_device_id {size_t driver_data; } ;
struct pci_dev {int dev; } ;
struct net_device {int addr_len; int features; int vlan_features; int dev_addr; int name; int * perm_addr; } ;
struct ixgbevf_info {int mac; int * mac_ops; } ;
struct TYPE_6__ {unsigned long data; int function; } ;
struct TYPE_5__ {int type; int * addr; int ops; } ;
struct TYPE_4__ {int ops; } ;
struct ixgbe_hw {int hw_addr; TYPE_2__ mac; TYPE_1__ mbx; struct ixgbevf_adapter* back; } ;
struct ixgbevf_adapter {int bd_number; int watchdog_task; int reset_task; TYPE_3__ watchdog_timer; struct ixgbe_hw hw; int msg_enable; struct pci_dev* pdev; struct net_device* netdev; } ;
struct ixgbe_mbx_operations {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ) ;
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
 int VAR_13 ;
 int FUNC_2 (struct net_device*,int *) ;
 struct net_device* FUNC_3 (int,int ) ;
 int VAR_14 ;
 int FUNC_4 (int *,char*,...) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct ixgbe_hw*,char*,...) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (struct net_device*) ;
 int FUNC_14 (struct ixgbevf_adapter*) ;
 int VAR_15 ;
 struct ixgbevf_info** VAR_16 ;
 int FUNC_15 (struct ixgbevf_adapter*) ;
 int FUNC_16 (struct ixgbevf_adapter*) ;
 int VAR_17 ;
 int FUNC_17 (struct ixgbevf_adapter*) ;
 int VAR_18 ;
 int FUNC_18 (struct ixgbevf_adapter*) ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_19 (int *,int *,int) ;
 struct ixgbevf_adapter* FUNC_20 (struct net_device*) ;
 int FUNC_21 (struct net_device*) ;
 int FUNC_22 (int ,int ) ;
 int FUNC_23 (struct pci_dev*) ;
 int FUNC_24 (struct pci_dev*) ;
 int FUNC_25 (struct pci_dev*) ;
 int FUNC_26 (struct pci_dev*,int ) ;
 int FUNC_27 (struct pci_dev*,int ) ;
 int FUNC_28 (struct pci_dev*,int ) ;
 int FUNC_29 (struct pci_dev*) ;
 int FUNC_30 (struct pci_dev*,struct net_device*) ;
 int FUNC_31 (struct pci_dev*) ;
 int FUNC_32 (char*) ;
 int FUNC_33 (struct net_device*) ;
 int FUNC_34 (int ,char*) ;

__attribute__((used)) static int FUNC_35(struct pci_dev *VAR_21, const struct pci_device_id *VAR_22)
{
 struct net_device *VAR_23;
 struct ixgbevf_adapter *VAR_24 = ((void*)0);
 struct ixgbe_hw *VAR_25 = ((void*)0);
 const struct ixgbevf_info *VAR_26 = VAR_16[VAR_22->driver_data];
 static int VAR_27;
 int VAR_28, VAR_29;

 VAR_28 = FUNC_24(VAR_21);
 if (VAR_28)
  return VAR_28;

 if (!FUNC_6(&VAR_21->dev, FUNC_0(64)) &&
     !FUNC_5(&VAR_21->dev, FUNC_0(64))) {
  VAR_29 = 1;
 } else {
  VAR_28 = FUNC_6(&VAR_21->dev, FUNC_0(32));
  if (VAR_28) {
   VAR_28 = FUNC_5(&VAR_21->dev,
          FUNC_0(32));
   if (VAR_28) {
    FUNC_4(&VAR_21->dev, "No usable DMA "
     "configuration, aborting\n");
    goto err_dma;
   }
  }
  VAR_29 = 0;
 }

 VAR_28 = FUNC_26(VAR_21, VAR_15);
 if (VAR_28) {
  FUNC_4(&VAR_21->dev, "pci_request_regions failed 0x%x\n", VAR_28);
  goto err_pci_reg;
 }

 FUNC_31(VAR_21);

 VAR_23 = FUNC_3(sizeof(struct ixgbevf_adapter),
       VAR_3);
 if (!VAR_23) {
  VAR_28 = -VAR_2;
  goto err_alloc_etherdev;
 }

 FUNC_2(VAR_23, &VAR_21->dev);

 FUNC_30(VAR_21, VAR_23);
 VAR_24 = FUNC_20(VAR_23);

 VAR_24->netdev = VAR_23;
 VAR_24->pdev = VAR_21;
 VAR_25 = &VAR_24->hw;
 VAR_25->back = VAR_24;
 VAR_24->msg_enable = FUNC_22(VAR_14, VAR_0);





 FUNC_29(VAR_21);

 VAR_25->hw_addr = FUNC_10(FUNC_28(VAR_21, 0),
         FUNC_27(VAR_21, 0));
 if (!VAR_25->hw_addr) {
  VAR_28 = -VAR_1;
  goto err_ioremap;
 }

 FUNC_13(VAR_23);

 VAR_24->bd_number = VAR_27;


 FUNC_19(&VAR_25->mac.ops, VAR_26->mac_ops, sizeof(VAR_25->mac.ops));
 VAR_25->mac.type = VAR_26->mac;

 FUNC_19(&VAR_25->mbx.ops, &VAR_17,
        sizeof(struct ixgbe_mbx_operations));


 VAR_28 = FUNC_18(VAR_24);
 if (VAR_28)
  goto err_sw_init;


 FUNC_19(VAR_23->perm_addr, VAR_24->hw.mac.addr, VAR_23->addr_len);

 if (!FUNC_12(VAR_23->dev_addr)) {
  FUNC_32("invalid MAC address\n");
  VAR_28 = -VAR_1;
  goto err_sw_init;
 }

 VAR_23->features = VAR_11 |
      VAR_10 |
      VAR_8 |
      VAR_7 |
      VAR_6;

 VAR_23->features |= VAR_9;
 VAR_23->features |= VAR_12;
 VAR_23->features |= VAR_13;
 VAR_23->features |= VAR_4;
 VAR_23->vlan_features |= VAR_12;
 VAR_23->vlan_features |= VAR_13;
 VAR_23->vlan_features |= VAR_10;
 VAR_23->vlan_features |= VAR_9;
 VAR_23->vlan_features |= VAR_11;

 if (VAR_29)
  VAR_23->features |= VAR_5;

 FUNC_9(&VAR_24->watchdog_timer);
 VAR_24->watchdog_timer.function = VAR_19;
 VAR_24->watchdog_timer.data = (unsigned long)VAR_24;

 FUNC_1(&VAR_24->reset_task, VAR_18);
 FUNC_1(&VAR_24->watchdog_task, VAR_20);

 VAR_28 = FUNC_15(VAR_24);
 if (VAR_28)
  goto err_sw_init;

 FUNC_34(VAR_23->name, "eth%d");

 VAR_28 = FUNC_33(VAR_23);
 if (VAR_28)
  goto err_register;

 FUNC_21(VAR_23);

 FUNC_16(VAR_24);


 FUNC_8(VAR_25, "%pM\n", VAR_23->dev_addr);

 FUNC_8(VAR_25, "MAC: %d\n", VAR_25->mac.type);

 FUNC_8(VAR_25, "Intel(R) 82599 Virtual Function\n");
 VAR_27++;
 return 0;

err_register:
 FUNC_14(VAR_24);
err_sw_init:
 FUNC_17(VAR_24);
 FUNC_11(VAR_25->hw_addr);
err_ioremap:
 FUNC_7(VAR_23);
err_alloc_etherdev:
 FUNC_25(VAR_21);
err_pci_reg:
err_dma:
 FUNC_23(VAR_21);
 return VAR_28;
}
