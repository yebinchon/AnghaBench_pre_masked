
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct net_device {int dummy; } ;
struct igb_adapter {int dummy; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct igb_adapter*) ;
 scalar_t__ FUNC_2 (struct igb_adapter*) ;
 struct igb_adapter* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 (struct net_device*) ;
 struct net_device* FUNC_6 (struct pci_dev*) ;

__attribute__((used)) static void FUNC_7(struct pci_dev *VAR_0)
{
 struct net_device *VAR_1 = FUNC_6(VAR_0);
 struct igb_adapter *VAR_2 = FUNC_3(VAR_1);

 if (FUNC_5(VAR_1)) {
  if (FUNC_2(VAR_2)) {
   FUNC_0(&VAR_0->dev, "igb_up failed after reset\n");
   return;
  }
 }

 FUNC_4(VAR_1);




 FUNC_1(VAR_2);
}
