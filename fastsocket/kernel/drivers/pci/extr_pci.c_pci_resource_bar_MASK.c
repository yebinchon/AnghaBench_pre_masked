
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int rom_base_reg; int dev; } ;
typedef enum pci_bar_type { ____Placeholder_pci_bar_type } pci_bar_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct pci_dev*,int,int*) ;

int FUNC_2(struct pci_dev *VAR_5, int VAR_6, enum pci_bar_type *VAR_7)
{
 int VAR_8;

 if (VAR_6 < VAR_2) {
  *VAR_7 = VAR_4;
  return VAR_0 + 4 * VAR_6;
 } else if (VAR_6 == VAR_2) {
  *VAR_7 = VAR_3;
  return VAR_5->rom_base_reg;
 } else if (VAR_6 < VAR_1) {

  VAR_8 = FUNC_1(VAR_5, VAR_6, VAR_7);
  if (VAR_8)
   return VAR_8;
 }

 FUNC_0(&VAR_5->dev, "BAR %d: invalid resource\n", VAR_6);
 return 0;
}
