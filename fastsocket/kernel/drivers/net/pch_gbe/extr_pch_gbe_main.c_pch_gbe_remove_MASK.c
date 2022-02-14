
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct TYPE_2__ {int reg; } ;
struct pch_gbe_adapter {TYPE_1__ hw; int rx_ring; int tx_ring; int reset_task; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct pch_gbe_adapter* FUNC_4 (struct net_device*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (struct pci_dev*) ;
 struct net_device* FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (struct pci_dev*) ;
 int FUNC_9 (struct net_device*) ;

__attribute__((used)) static void FUNC_10(struct pci_dev *VAR_0)
{
 struct net_device *VAR_1 = FUNC_7(VAR_0);
 struct pch_gbe_adapter *VAR_2 = FUNC_4(VAR_1);

 FUNC_0(&VAR_2->reset_task);
 FUNC_9(VAR_1);

 FUNC_5(&VAR_2->hw);

 FUNC_3(VAR_2->tx_ring);
 FUNC_3(VAR_2->rx_ring);

 FUNC_2(VAR_2->hw.reg);
 FUNC_8(VAR_0);
 FUNC_1(VAR_1);
 FUNC_6(VAR_0);
}
