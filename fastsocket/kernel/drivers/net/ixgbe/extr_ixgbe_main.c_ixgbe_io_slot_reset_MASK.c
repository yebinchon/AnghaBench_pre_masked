
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct ixgbe_adapter {int hw; } ;
typedef int pci_ers_result_t ;


 int FUNC_0 (int *,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct ixgbe_adapter*) ;
 int FUNC_4 (struct pci_dev*) ;
 scalar_t__ FUNC_5 (struct pci_dev*) ;
 struct ixgbe_adapter* FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (struct pci_dev*) ;
 int FUNC_9 (struct pci_dev*) ;
 int FUNC_10 (struct pci_dev*,int) ;
 int VAR_3 ;

__attribute__((used)) static pci_ers_result_t FUNC_11(struct pci_dev *VAR_4)
{
 struct ixgbe_adapter *VAR_5 = FUNC_6(VAR_4);
 pci_ers_result_t VAR_6;
 int VAR_7;

 if (FUNC_5(VAR_4)) {
  FUNC_2(VAR_3, "Cannot re-enable PCI device after reset.\n");
  VAR_6 = VAR_1;
 } else {
  FUNC_9(VAR_4);
  FUNC_7(VAR_4);
  FUNC_8(VAR_4);

  FUNC_10(VAR_4, 0);

  FUNC_3(VAR_5);
  FUNC_0(&VAR_5->hw, VAR_0, ~0);
  VAR_6 = VAR_2;
 }

 VAR_7 = FUNC_4(VAR_4);
 if (VAR_7) {
  FUNC_1("pci_cleanup_aer_uncorrect_error_status "
     "failed 0x%0x\n", VAR_7);

 }

 return VAR_6;
}
