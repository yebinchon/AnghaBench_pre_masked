
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct net_device {int dummy; } ;
struct e1000_hw {int dummy; } ;
struct e1000_adapter {scalar_t__ need_ioport; struct e1000_hw hw; } ;
typedef int pci_ers_result_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct e1000_adapter*) ;
 int FUNC_1 (int ,int ) ;
 struct e1000_adapter* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*,int ,int ) ;
 struct net_device* FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static pci_ers_result_t FUNC_9(struct pci_dev *VAR_5)
{
 struct net_device *VAR_6 = FUNC_6(VAR_5);
 struct e1000_adapter *VAR_7 = FUNC_2(VAR_6);
 struct e1000_hw *VAR_8 = &VAR_7->hw;
 int VAR_9;

 if (VAR_7->need_ioport)
  VAR_9 = FUNC_3(VAR_5);
 else
  VAR_9 = FUNC_4(VAR_5);
 if (VAR_9) {
  FUNC_8("Cannot re-enable PCI device after reset.\n");
  return VAR_2;
 }
 FUNC_7(VAR_5);

 FUNC_5(VAR_5, VAR_1, 0);
 FUNC_5(VAR_5, VAR_0, 0);

 FUNC_0(VAR_7);
 FUNC_1(VAR_4, ~0);

 return VAR_3;
}
