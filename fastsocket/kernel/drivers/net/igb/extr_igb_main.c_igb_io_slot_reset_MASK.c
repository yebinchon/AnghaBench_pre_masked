
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct net_device {int dummy; } ;
struct e1000_hw {int dummy; } ;
struct igb_adapter {struct e1000_hw hw; } ;
typedef int pci_ers_result_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (struct igb_adapter*) ;
 struct igb_adapter* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct pci_dev*) ;
 scalar_t__ FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*,int ,int ) ;
 struct net_device* FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (struct pci_dev*) ;
 int FUNC_9 (struct pci_dev*) ;
 int FUNC_10 (int ,int ) ;

__attribute__((used)) static pci_ers_result_t FUNC_11(struct pci_dev *VAR_5)
{
 struct net_device *VAR_6 = FUNC_6(VAR_5);
 struct igb_adapter *VAR_7 = FUNC_2(VAR_6);
 struct e1000_hw *VAR_8 = &VAR_7->hw;
 pci_ers_result_t VAR_9;
 int VAR_10;

 if (FUNC_4(VAR_5)) {
  FUNC_0(&VAR_5->dev,
   "Cannot re-enable PCI device after reset.\n");
  VAR_9 = VAR_3;
 } else {
  FUNC_9(VAR_5);
  FUNC_7(VAR_5);
  FUNC_8(VAR_5);

  FUNC_5(VAR_5, VAR_2, 0);
  FUNC_5(VAR_5, VAR_1, 0);

  FUNC_1(VAR_7);
  FUNC_10(VAR_0, ~0);
  VAR_9 = VAR_4;
 }

 VAR_10 = FUNC_3(VAR_5);
 if (VAR_10) {
  FUNC_0(&VAR_5->dev,
   "pci_cleanup_aer_uncorrect_error_status failed 0x%0x\n",
   VAR_10);

 }

 return VAR_9;
}
