
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct pci_dev {int dummy; } ;
typedef enum pci_bar_type { ____Placeholder_pci_bar_type } pci_bar_type ;


 int FUNC_0 (struct pci_dev*,int,struct resource*,int) ;
 int FUNC_1 (struct pci_dev*,int,int*) ;
 int VAR_0 ;
 int FUNC_2 (struct resource*) ;

int FUNC_3(struct pci_dev *VAR_1, int VAR_2)
{
 struct resource VAR_3;
 enum pci_bar_type VAR_4;
 int VAR_5 = FUNC_1(VAR_1, VAR_2, &VAR_4);

 if (!VAR_0)
  return 0;

 if (!VAR_5)
  return 0;

  FUNC_0(VAR_1, VAR_4, &VAR_3, VAR_5);
 return FUNC_2(&VAR_3);
}
