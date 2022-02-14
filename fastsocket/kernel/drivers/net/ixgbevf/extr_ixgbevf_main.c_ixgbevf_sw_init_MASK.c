
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct pci_dev {int dev; int subsystem_device; int subsystem_vendor; int revision; int device; int vendor; } ;
struct net_device {int addr_len; int dev_addr; } ;
struct TYPE_7__ {int (* reset_hw ) (struct ixgbe_hw*) ;int (* init_hw ) (struct ixgbe_hw*) ;int (* get_mac_addr ) (struct ixgbe_hw*,int ) ;} ;
struct TYPE_8__ {int max_tx_queues; int max_rx_queues; int addr; TYPE_3__ ops; } ;
struct TYPE_5__ {int (* init_params ) (struct ixgbe_hw*) ;} ;
struct TYPE_6__ {TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_4__ mac; TYPE_2__ mbx; int subsystem_device_id; int subsystem_vendor_id; int revision_id; int device_id; int vendor_id; } ;
struct ixgbevf_adapter {int rx_itr_setting; int tx_itr_setting; int state; int flags; int rx_ring_count; int tx_ring_count; struct ixgbe_hw hw; int mbx_lock; struct net_device* netdev; struct pci_dev* pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct ixgbevf_adapter*) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct ixgbe_hw*) ;
 int FUNC_10 (struct ixgbe_hw*) ;
 int FUNC_11 (struct ixgbe_hw*) ;
 int FUNC_12 (struct ixgbe_hw*,int ) ;

__attribute__((used)) static int FUNC_13(struct ixgbevf_adapter *VAR_4)
{
 struct ixgbe_hw *VAR_5 = &VAR_4->hw;
 struct pci_dev *VAR_6 = VAR_4->pdev;
 struct net_device *VAR_7 = VAR_4->netdev;
 int VAR_8;



 VAR_5->vendor_id = VAR_6->vendor;
 VAR_5->device_id = VAR_6->device;
 VAR_5->revision_id = VAR_6->revision;
 VAR_5->subsystem_vendor_id = VAR_6->subsystem_vendor;
 VAR_5->subsystem_device_id = VAR_6->subsystem_device;

 VAR_5->mbx.ops.init_params(VAR_5);


 VAR_5->mac.max_tx_queues = 2;
 VAR_5->mac.max_rx_queues = 2;


 FUNC_8(&VAR_4->mbx_lock);

 VAR_8 = VAR_5->mac.ops.reset_hw(VAR_5);
 if (VAR_8) {
  FUNC_0(&VAR_6->dev,
    "PF still in reset state.  Is the PF interface up?\n");
 } else {
  VAR_8 = VAR_5->mac.ops.init_hw(VAR_5);
  if (VAR_8) {
   FUNC_6("init_shared_code failed: %d\n", VAR_8);
   goto out;
  }
  FUNC_4(VAR_4);
  VAR_8 = VAR_5->mac.ops.get_mac_addr(VAR_5, VAR_5->mac.addr);
  if (VAR_8)
   FUNC_0(&VAR_6->dev, "Error reading MAC address\n");
  else if (FUNC_3(VAR_4->hw.mac.addr))
   FUNC_0(&VAR_6->dev,
     "MAC address not assigned by administrator.\n");
  FUNC_5(VAR_7->dev_addr, VAR_5->mac.addr, VAR_7->addr_len);
 }

 if (!FUNC_2(VAR_7->dev_addr)) {
  FUNC_0(&VAR_6->dev, "Assigning random MAC address\n");
  FUNC_1(VAR_7);
  FUNC_5(VAR_5->mac.addr, VAR_7->dev_addr, VAR_7->addr_len);
 }


 VAR_4->rx_itr_setting = 1;
 VAR_4->tx_itr_setting = 1;


 VAR_4->tx_ring_count = VAR_1;
 VAR_4->rx_ring_count = VAR_0;


 VAR_4->flags |= VAR_2;

 FUNC_7(VAR_3, &VAR_4->state);
 return 0;

out:
 return VAR_8;
}
