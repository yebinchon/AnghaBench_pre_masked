
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int wakeup_prepared; int dev; } ;
typedef int pci_power_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct pci_dev*,int) ;
 scalar_t__ FUNC_2 (struct pci_dev*,int ) ;
 int FUNC_3 (struct pci_dev*,int) ;

int FUNC_4(struct pci_dev *VAR_1, pci_power_t VAR_2, bool VAR_3)
{
 int VAR_4 = 0;

 if (VAR_3 && !FUNC_0(&VAR_1->dev))
  return -VAR_0;


 if (!!VAR_3 == !!VAR_1->wakeup_prepared)
  return 0;







 if (VAR_3) {
  int VAR_5;

  if (FUNC_2(VAR_1, VAR_2))
   FUNC_1(VAR_1, 1);
  else
   VAR_4 = 1;
  VAR_5 = FUNC_3(VAR_1, 1);
  if (VAR_4)
   VAR_4 = VAR_5;
  if (!VAR_4)
   VAR_1->wakeup_prepared = 1;
 } else {
  FUNC_3(VAR_1, 0);
  FUNC_1(VAR_1, 0);
  VAR_1->wakeup_prepared = 0;
 }

 return VAR_4;
}
