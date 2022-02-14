
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qlcnic_adapter {int * fw; TYPE_1__* ahw; struct pci_dev* pdev; } ;
struct pci_dev {int dev; } ;
struct TYPE_2__ {size_t fw_type; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct qlcnic_adapter*) ;
 int FUNC_2 (struct qlcnic_adapter*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,int ,int *) ;

void FUNC_5(struct qlcnic_adapter *VAR_3)
{
 struct pci_dev *VAR_4 = VAR_3->pdev;
 int VAR_5;

 VAR_3->ahw->fw_type = VAR_1;

next:
 FUNC_1(VAR_3);

 if (VAR_3->ahw->fw_type == VAR_0) {
  VAR_3->fw = ((void*)0);
 } else {
  VAR_5 = FUNC_4(&VAR_3->fw,
          VAR_2[VAR_3->ahw->fw_type],
          &VAR_4->dev);
  if (VAR_5 != 0)
   goto next;

  VAR_5 = FUNC_2(VAR_3);
  if (VAR_5 != 0) {
   FUNC_3(VAR_3->fw);
   FUNC_0(1);
   goto next;
  }
 }
}
