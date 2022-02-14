
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct beiscsi_hba {int shost; int pcidev; int boot_kset; } ;


 int FUNC_0 (struct beiscsi_hba*) ;
 int FUNC_1 (struct beiscsi_hba*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct pci_dev*) ;
 struct beiscsi_hba* FUNC_8 (struct pci_dev*) ;

__attribute__((used)) static void FUNC_9(struct pci_dev *VAR_0)
{

 struct beiscsi_hba *VAR_1 = ((void*)0);

 VAR_1 = FUNC_8(VAR_0);
 if (!VAR_1) {
  FUNC_2(&VAR_0->dev, "beiscsi_remove called with no phba\n");
  return;
 }

 FUNC_0(VAR_1);
 FUNC_1(VAR_1);
 FUNC_3(VAR_1->boot_kset);
 FUNC_5(VAR_1->shost);
 FUNC_6(VAR_1->pcidev);
 FUNC_4(VAR_1->shost);
 FUNC_7(VAR_0);
}
