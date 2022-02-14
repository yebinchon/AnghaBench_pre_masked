
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int is_added; int dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*) ;

int FUNC_3(struct pci_dev *VAR_0)
{
 int VAR_1;
 VAR_1 = FUNC_0(&VAR_0->dev);
 if (VAR_1)
  return VAR_1;

 VAR_0->is_added = 1;
 FUNC_2(VAR_0);
 FUNC_1(VAR_0);
 return 0;
}
