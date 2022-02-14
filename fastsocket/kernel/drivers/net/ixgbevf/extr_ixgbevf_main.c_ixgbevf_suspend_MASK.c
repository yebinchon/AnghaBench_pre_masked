
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct net_device {int dummy; } ;
struct ixgbevf_adapter {int dummy; } ;
typedef int pm_message_t ;


 int FUNC_0 (struct ixgbevf_adapter*) ;
 int FUNC_1 (struct ixgbevf_adapter*) ;
 int FUNC_2 (struct ixgbevf_adapter*) ;
 int FUNC_3 (struct ixgbevf_adapter*) ;
 int FUNC_4 (struct ixgbevf_adapter*) ;
 struct ixgbevf_adapter* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 scalar_t__ FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct pci_dev*) ;
 struct net_device* FUNC_9 (struct pci_dev*) ;
 int FUNC_10 (struct pci_dev*) ;
 int FUNC_11 () ;
 int FUNC_12 () ;

__attribute__((used)) static int FUNC_13(struct pci_dev *VAR_0, pm_message_t VAR_1)
{
 struct net_device *VAR_2 = FUNC_9(VAR_0);
 struct ixgbevf_adapter *VAR_3 = FUNC_5(VAR_2);




 FUNC_6(VAR_2);

 if (FUNC_7(VAR_2)) {
  FUNC_11();
  FUNC_1(VAR_3);
  FUNC_4(VAR_3);
  FUNC_3(VAR_3);
  FUNC_2(VAR_3);
  FUNC_12();
 }

 FUNC_0(VAR_3);







 FUNC_8(VAR_0);

 return 0;
}
