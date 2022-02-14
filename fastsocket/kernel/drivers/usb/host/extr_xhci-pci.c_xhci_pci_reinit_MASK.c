
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xhci_hcd {int dummy; } ;
struct pci_dev {int dummy; } ;


 int FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (struct xhci_hcd*,char*) ;

__attribute__((used)) static int FUNC_2(struct xhci_hcd *VAR_0, struct pci_dev *VAR_1)
{







 if (!FUNC_0(VAR_1))
  FUNC_1(VAR_0, "MWI active\n");

 FUNC_1(VAR_0, "Finished xhci_pci_reinit\n");
 return 0;
}
