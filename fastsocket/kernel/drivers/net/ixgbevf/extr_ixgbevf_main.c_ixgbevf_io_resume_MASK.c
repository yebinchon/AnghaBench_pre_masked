
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct net_device {int dummy; } ;
struct ixgbevf_adapter {int dummy; } ;


 int FUNC_0 (struct ixgbevf_adapter*) ;
 struct ixgbevf_adapter* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct net_device*) ;
 struct net_device* FUNC_4 (struct pci_dev*) ;

__attribute__((used)) static void FUNC_5(struct pci_dev *VAR_0)
{
 struct net_device *VAR_1 = FUNC_4(VAR_0);
 struct ixgbevf_adapter *VAR_2 = FUNC_1(VAR_1);

 if (FUNC_3(VAR_1))
  FUNC_0(VAR_2);

 FUNC_2(VAR_1);
}
