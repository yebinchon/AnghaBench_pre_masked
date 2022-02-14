
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pci_dev {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct pci_dev*,int ,int) ;

void FUNC_2(struct pci_dev *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(VAR_3, VAR_0,
     VAR_2 * sizeof(u16));
 if (VAR_4)
  FUNC_0(&VAR_3->dev,
   "unable to preallocate PCI Express save buffer\n");

 VAR_4 = FUNC_1(VAR_3, VAR_1, sizeof(u16));
 if (VAR_4)
  FUNC_0(&VAR_3->dev,
   "unable to preallocate PCI-X save buffer\n");
}
