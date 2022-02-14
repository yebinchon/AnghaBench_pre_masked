
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*,int) ;

__attribute__((used)) static void FUNC_5(struct pci_dev *VAR_2)
{
 int VAR_3, VAR_4;




 if (VAR_1 != VAR_0)
  return;






 VAR_4 = FUNC_2(VAR_2);






 while (VAR_4 != FUNC_3(VAR_2) && VAR_4 >= 128) {
  VAR_3 = FUNC_4(VAR_2, VAR_4);
  if (!VAR_3)
   break;

  FUNC_1(&VAR_2->dev, "Failed attempting to set the MRRS\n");
  VAR_4 /= 2;
 }

 if (VAR_4 < 128)
  FUNC_0(&VAR_2->dev, "MRRS was unable to be configured with a "
   "safe value.  If problems are experienced, try running "
   "with pci=pcie_bus_safe.\n");
}
