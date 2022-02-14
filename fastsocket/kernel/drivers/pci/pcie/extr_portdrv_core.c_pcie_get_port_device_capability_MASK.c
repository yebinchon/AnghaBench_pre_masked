
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev_rh1 {int __pcie_osc_capabilities_valid; int pcie_osc_capabilities; } ;
struct pci_dev {struct pci_dev_rh1* rh_reserved1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 (struct pci_dev*,int ) ;
 scalar_t__ FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*,int ,int*) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 () ;
 int FUNC_6 (struct pci_dev*,int*) ;
 scalar_t__ VAR_10 ;

int FUNC_7(struct pci_dev *VAR_11)
{
 int VAR_12 = 0;
 u32 VAR_13;
 int VAR_14 = 0;
 int VAR_15;
 struct pci_dev_rh1 *VAR_16 = VAR_11->rh_reserved1;

 if (VAR_16->__pcie_osc_capabilities_valid)
  return VAR_16->pcie_osc_capabilities;

 VAR_15 = FUNC_6(VAR_11, &VAR_14);
 if (VAR_10) {
  if (VAR_15) {
   FUNC_5();
   return 0;
  }
 } else {
  VAR_14 = VAR_2 | VAR_1
    | VAR_3;
  if (FUNC_0())
   VAR_14 |= VAR_0;
 }


 if ((VAR_14 & VAR_1) &&
     FUNC_4(VAR_11) & VAR_4) {
  FUNC_3(VAR_11, VAR_5, &VAR_13);
  if (VAR_13 & VAR_6)
   VAR_12 |= VAR_1;
 }

 if ((VAR_14 & VAR_0)
     && (FUNC_1(VAR_11, VAR_8)))
  VAR_12 |= VAR_0;

 if (FUNC_1(VAR_11, VAR_9))
  VAR_12 |= VAR_3;
 if ((VAR_14 & VAR_2)
     && FUNC_2(VAR_11) == VAR_7)
  VAR_12 |= VAR_2;

 VAR_16->pcie_osc_capabilities = VAR_12;
 VAR_16->__pcie_osc_capabilities_valid = 1;

 return VAR_12;
}
