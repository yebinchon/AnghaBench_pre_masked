
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qib_devdata {int dummy; } ;
struct pci_dev {int dummy; } ;


 int FUNC_0 (struct pci_dev*) ;
 struct qib_devdata* FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*,char*) ;
 int FUNC_3 (struct qib_devdata*,int) ;

__attribute__((used)) static void
FUNC_4(struct pci_dev *VAR_0)
{
 struct qib_devdata *VAR_1 = FUNC_1(VAR_0);
 FUNC_2(VAR_0, "QIB resume function called\n");
 FUNC_0(VAR_0);





 FUNC_3(VAR_1, 1);
}
