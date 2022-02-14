
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
typedef scalar_t__ pci_power_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct pci_dev*,scalar_t__,int) ;
 int FUNC_2 (struct pci_dev*,scalar_t__) ;
 scalar_t__ FUNC_3 (struct pci_dev*) ;

int FUNC_4(struct pci_dev *VAR_2)
{
 pci_power_t VAR_3 = FUNC_3(VAR_2);
 int VAR_4;

 if (VAR_3 == VAR_1)
  return -VAR_0;

 FUNC_1(VAR_2, VAR_3, FUNC_0(&VAR_2->dev));

 VAR_4 = FUNC_2(VAR_2, VAR_3);

 if (VAR_4)
  FUNC_1(VAR_2, VAR_3, 0);

 return VAR_4;
}
