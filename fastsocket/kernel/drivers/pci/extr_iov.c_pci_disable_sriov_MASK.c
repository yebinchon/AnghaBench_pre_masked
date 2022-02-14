
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int is_physfn; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (struct pci_dev*) ;

void FUNC_2(struct pci_dev *VAR_1)
{
 FUNC_0();

 if (!VAR_0)
  return;

 if (!VAR_1->is_physfn)
  return;

 FUNC_1(VAR_1);
}
