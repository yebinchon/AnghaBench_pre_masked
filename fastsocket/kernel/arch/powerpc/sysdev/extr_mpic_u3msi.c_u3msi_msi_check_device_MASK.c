
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static int FUNC_3(struct pci_dev *VAR_2, int VAR_3, int VAR_4)
{
 if (VAR_4 == VAR_1)
  FUNC_2("u3msi: MSI-X untested, trying anyway.\n");


 if (FUNC_0(VAR_2) == 0) {
  FUNC_2("u3msi: no magic address found for %s\n",
    FUNC_1(VAR_2));
  return -VAR_0;
 }

 return 0;
}
