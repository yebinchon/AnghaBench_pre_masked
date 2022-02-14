
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*,int) ;

void FUNC_4(struct pci_dev *VAR_0)
{
 if (!FUNC_2(VAR_0))
  return;

 FUNC_0(&VAR_0->dev, 1);
 FUNC_1(&VAR_0->dev, 0);
 FUNC_3(VAR_0, 0);
}
