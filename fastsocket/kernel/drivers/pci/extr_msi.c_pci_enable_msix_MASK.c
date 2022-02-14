
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; scalar_t__ msi_enabled; int msix_enabled; } ;
struct msix_entry {int entry; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct pci_dev*,struct msix_entry*,int) ;
 int FUNC_3 (struct pci_dev*,int,int ) ;
 int FUNC_4 (struct pci_dev*) ;

int FUNC_5(struct pci_dev *VAR_2, struct msix_entry *VAR_3, int VAR_4)
{
 int VAR_5, VAR_6;
 int VAR_7, VAR_8;

 if (!VAR_3)
  return -VAR_0;

 VAR_5 = FUNC_3(VAR_2, VAR_4, VAR_1);
 if (VAR_5)
  return VAR_5;

 VAR_6 = FUNC_4(VAR_2);
 if (VAR_4 > VAR_6)
  return VAR_6;


 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
  if (VAR_3[VAR_7].entry >= VAR_6)
   return -VAR_0;
  for (VAR_8 = VAR_7 + 1; VAR_8 < VAR_4; VAR_8++) {
   if (VAR_3[VAR_7].entry == VAR_3[VAR_8].entry)
    return -VAR_0;
  }
 }
 FUNC_0(!!VAR_2->msix_enabled);


 if (VAR_2->msi_enabled) {
  FUNC_1(&VAR_2->dev, "can't enable MSI-X "
         "(MSI IRQ already assigned)\n");
  return -VAR_0;
 }
 VAR_5 = FUNC_2(VAR_2, VAR_3, VAR_4);
 return VAR_5;
}
