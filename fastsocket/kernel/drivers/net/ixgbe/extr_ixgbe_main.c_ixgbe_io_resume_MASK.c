
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct net_device {int dummy; } ;
struct ixgbe_adapter {scalar_t__ vferr_refcount; struct net_device* netdev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct ixgbe_adapter*) ;
 int FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct net_device*) ;
 struct ixgbe_adapter* FUNC_4 (struct pci_dev*) ;

__attribute__((used)) static void FUNC_5(struct pci_dev *VAR_1)
{
 struct ixgbe_adapter *VAR_2 = FUNC_4(VAR_1);
 struct net_device *VAR_3 = VAR_2->netdev;
 if (FUNC_3(VAR_3))
  FUNC_1(VAR_2);

 FUNC_2(VAR_3);
}
