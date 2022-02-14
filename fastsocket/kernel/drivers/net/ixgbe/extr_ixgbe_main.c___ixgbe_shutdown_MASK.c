
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct pci_dev {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_3__ {int (* enable_tx_laser ) (struct ixgbe_hw*) ;} ;
struct TYPE_4__ {int type; TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ mac; } ;
struct ixgbe_adapter {int wol; struct ixgbe_hw hw; struct net_device* netdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int FUNC_1 (struct ixgbe_hw*,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct ixgbe_adapter*) ;
 int FUNC_3 (struct ixgbe_adapter*) ;
 int FUNC_4 (struct ixgbe_adapter*) ;
 int FUNC_5 (struct ixgbe_adapter*) ;
 int FUNC_6 (struct ixgbe_adapter*) ;



 int FUNC_7 (struct ixgbe_adapter*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*) ;
 scalar_t__ FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct pci_dev*) ;
 struct ixgbe_adapter* FUNC_12 (struct pci_dev*) ;
 int FUNC_13 (struct pci_dev*) ;
 int FUNC_14 (struct pci_dev*,int) ;
 int FUNC_15 () ;
 int FUNC_16 () ;
 int FUNC_17 (struct ixgbe_hw*) ;

__attribute__((used)) static int FUNC_18(struct pci_dev *VAR_7, bool *VAR_8)
{
 struct ixgbe_adapter *VAR_9 = FUNC_12(VAR_7);
 struct net_device *VAR_10 = VAR_9->netdev;
 struct ixgbe_hw *VAR_11 = &VAR_9->hw;
 u32 VAR_12, VAR_13;
 u32 VAR_14 = VAR_9->wol;




 FUNC_9(VAR_10);

 FUNC_15();
 if (FUNC_10(VAR_10)) {
  FUNC_3(VAR_9);
  FUNC_6(VAR_9);
  FUNC_5(VAR_9);
  FUNC_4(VAR_9);
 }
 FUNC_16();

 FUNC_2(VAR_9);







 if (VAR_14) {
  FUNC_8(VAR_10);


  if (VAR_11->mac.ops.enable_tx_laser)
   VAR_11->mac.ops.enable_tx_laser(VAR_11);


  if (VAR_14 & VAR_6) {
   VAR_13 = FUNC_0(VAR_11, VAR_2);
   VAR_13 |= VAR_3;
   FUNC_1(VAR_11, VAR_2, VAR_13);
  }

  VAR_12 = FUNC_0(VAR_11, VAR_0);
  VAR_12 |= VAR_1;
  FUNC_1(VAR_11, VAR_0, VAR_12);

  FUNC_1(VAR_11, VAR_5, VAR_14);
 } else {
  FUNC_1(VAR_11, VAR_4, 0);
  FUNC_1(VAR_11, VAR_5, 0);
 }

 switch (VAR_11->mac.type) {
 case 130:
  FUNC_14(VAR_7, 0);
  break;
 case 129:
 case 128:
  FUNC_14(VAR_7, !!VAR_14);
  break;
 default:
  break;
 }

 *VAR_8 = !!VAR_14;

 FUNC_7(VAR_9);

 FUNC_11(VAR_7);

 return 0;
}
