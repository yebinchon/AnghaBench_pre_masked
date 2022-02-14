
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct lpfc_hba {struct pci_dev* pcidev; } ;


 int VAR_0 ;
 int FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (struct pci_dev*,int) ;
 int FUNC_2 (struct pci_dev*,int ) ;
 int FUNC_3 (struct pci_dev*,int *) ;

__attribute__((used)) static void
FUNC_4(struct lpfc_hba *VAR_1)
{
 struct pci_dev *VAR_2;
 int VAR_3;


 if (!VAR_1->pcidev)
  return;
 else
  VAR_2 = VAR_1->pcidev;

 VAR_3 = FUNC_2(VAR_2, VAR_0);

 FUNC_1(VAR_2, VAR_3);
 FUNC_0(VAR_2);

 FUNC_3(VAR_2, ((void*)0));

 return;
}
