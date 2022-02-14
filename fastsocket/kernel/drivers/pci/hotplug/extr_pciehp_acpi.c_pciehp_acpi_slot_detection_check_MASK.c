
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_2 ;

int FUNC_2(struct pci_dev *VAR_3)
{
 if (VAR_2 != VAR_1)
  return 0;
 if (FUNC_1(FUNC_0(&VAR_3->dev)))
  return 0;
 return -VAR_0;
}
