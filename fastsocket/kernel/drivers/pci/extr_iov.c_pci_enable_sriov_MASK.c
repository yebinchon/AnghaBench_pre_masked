
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int is_physfn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 int FUNC_1 (struct pci_dev*,int) ;

int FUNC_2(struct pci_dev *VAR_3, int VAR_4)
{
 FUNC_0();

 if (!VAR_2)
  return -VAR_1;

 if (!VAR_3->is_physfn)
  return -VAR_0;

 return FUNC_1(VAR_3, VAR_4);
}
