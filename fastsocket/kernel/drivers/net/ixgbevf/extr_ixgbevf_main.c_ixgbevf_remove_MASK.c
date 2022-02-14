
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct net_device {scalar_t__ reg_state; } ;
struct TYPE_2__ {int hw_addr; } ;
struct ixgbevf_adapter {int rx_ring; int tx_ring; TYPE_1__ hw; int watchdog_task; int reset_task; int watchdog_timer; int state; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct ixgbevf_adapter*) ;
 int FUNC_6 (struct ixgbevf_adapter*) ;
 int FUNC_7 (int ) ;
 struct ixgbevf_adapter* FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct pci_dev*) ;
 struct net_device* FUNC_10 (struct pci_dev*) ;
 int FUNC_11 (struct pci_dev*) ;
 int FUNC_12 (int ,int *) ;
 int FUNC_13 (struct net_device*) ;

__attribute__((used)) static void FUNC_14(struct pci_dev *VAR_2)
{
 struct net_device *VAR_3 = FUNC_10(VAR_2);
 struct ixgbevf_adapter *VAR_4 = FUNC_8(VAR_3);

 FUNC_12(VAR_1, &VAR_4->state);

 FUNC_1(&VAR_4->watchdog_timer);

 FUNC_0(&VAR_4->reset_task);
 FUNC_0(&VAR_4->watchdog_task);

 if (VAR_3->reg_state == VAR_0)
  FUNC_13(VAR_3);

 FUNC_5(VAR_4);
 FUNC_6(VAR_4);

 FUNC_4(VAR_4->hw.hw_addr);
 FUNC_11(VAR_2);

 FUNC_3(&VAR_4->hw, "Remove complete\n");

 FUNC_7(VAR_4->tx_ring);
 FUNC_7(VAR_4->rx_ring);

 FUNC_2(VAR_3);

 FUNC_9(VAR_2);
}
