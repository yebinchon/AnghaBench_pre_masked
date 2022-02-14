
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct beiscsi_hba {int dummy; } ;


 int FUNC_0 (struct beiscsi_hba*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct pci_dev*) ;
 scalar_t__ FUNC_3 (struct pci_dev*) ;

__attribute__((used)) static void FUNC_4(struct pci_dev *VAR_0)
{

 struct beiscsi_hba *VAR_1 = ((void*)0);

 VAR_1 = (struct beiscsi_hba *)FUNC_3(VAR_0);
 if (!VAR_1) {
  FUNC_1(&VAR_0->dev, "beiscsi_shutdown called with no phba\n");
  return;
 }

 FUNC_0(VAR_1);
 FUNC_2(VAR_0);
}
