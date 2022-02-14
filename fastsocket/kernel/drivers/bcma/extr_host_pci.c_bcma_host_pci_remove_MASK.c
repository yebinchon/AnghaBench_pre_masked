
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct bcma_bus {int mmio; } ;


 int FUNC_0 (struct bcma_bus*) ;
 int FUNC_1 (struct bcma_bus*) ;
 int FUNC_2 (struct pci_dev*) ;
 struct bcma_bus* FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*,int ) ;
 int FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*,int *) ;

__attribute__((used)) static void FUNC_7(struct pci_dev *VAR_0)
{
 struct bcma_bus *VAR_1 = FUNC_3(VAR_0);

 FUNC_0(VAR_1);
 FUNC_4(VAR_0, VAR_1->mmio);
 FUNC_5(VAR_0);
 FUNC_2(VAR_0);
 FUNC_1(VAR_1);
 FUNC_6(VAR_0, ((void*)0));
}
