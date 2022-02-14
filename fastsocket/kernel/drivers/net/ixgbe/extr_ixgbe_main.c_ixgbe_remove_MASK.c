
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dev; } ;
struct net_device {scalar_t__ reg_state; } ;
struct TYPE_2__ {int hw_addr; } ;
struct ixgbe_adapter {int flags; TYPE_1__ hw; int ixgbe_ieee_ets; int ixgbe_ieee_pfc; int service_task; int state; struct net_device* netdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct ixgbe_adapter*) ;
 int FUNC_7 (struct ixgbe_adapter*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct ixgbe_adapter*) ;
 int FUNC_10 (struct ixgbe_adapter*) ;
 int FUNC_11 (struct ixgbe_adapter*) ;
 int FUNC_12 (int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_13 (struct pci_dev*) ;
 int FUNC_14 (struct pci_dev*) ;
 struct ixgbe_adapter* FUNC_15 (struct pci_dev*) ;
 int FUNC_16 (struct pci_dev*,int ) ;
 int FUNC_17 (struct pci_dev*,int ) ;
 int FUNC_18 (int ,int *) ;
 int FUNC_19 (struct net_device*) ;

__attribute__((used)) static void FUNC_20(struct pci_dev *VAR_6)
{
 struct ixgbe_adapter *VAR_7 = FUNC_15(VAR_6);
 struct net_device *VAR_8 = VAR_7->netdev;

 FUNC_7(VAR_7);

 FUNC_18(VAR_4, &VAR_7->state);
 FUNC_1(&VAR_7->service_task);
 FUNC_8(VAR_8);

 if (VAR_8->reg_state == VAR_3)
  FUNC_19(VAR_8);
 FUNC_6(VAR_7);

 FUNC_10(VAR_7);






 FUNC_5(VAR_7->hw.hw_addr);
 FUNC_16(VAR_6, FUNC_17(VAR_6,
         VAR_0));

 FUNC_3("complete\n");

 FUNC_4(VAR_8);

 FUNC_14(VAR_6);

 FUNC_13(VAR_6);
}
