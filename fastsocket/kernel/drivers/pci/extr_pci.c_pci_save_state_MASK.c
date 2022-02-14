
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int state_saved; int * saved_config_space; } ;


 int FUNC_0 (struct pci_dev*,int,int *) ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*) ;

int
FUNC_3(struct pci_dev *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < 16; VAR_1++)
  FUNC_0(VAR_0, VAR_1 * 4,&VAR_0->saved_config_space[VAR_1]);
 VAR_0->state_saved = 1;
 if ((VAR_1 = FUNC_1(VAR_0)) != 0)
  return VAR_1;
 if ((VAR_1 = FUNC_2(VAR_0)) != 0)
  return VAR_1;
 return 0;
}
