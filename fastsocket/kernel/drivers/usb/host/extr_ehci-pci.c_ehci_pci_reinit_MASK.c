
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct ehci_hcd {int dummy; } ;


 int FUNC_0 (struct ehci_hcd*,char*) ;
 int FUNC_1 (struct pci_dev*) ;

__attribute__((used)) static int FUNC_2(struct ehci_hcd *VAR_0, struct pci_dev *VAR_1)
{
 int VAR_2;






 VAR_2 = FUNC_1(VAR_1);
 if (!VAR_2)
  FUNC_0(VAR_0, "MWI active\n");

 return 0;
}
