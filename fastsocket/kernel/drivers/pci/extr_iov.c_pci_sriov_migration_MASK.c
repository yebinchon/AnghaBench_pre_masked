
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int is_physfn; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct pci_dev*) ;

irqreturn_t FUNC_1(struct pci_dev *VAR_2)
{
 if (!VAR_2->is_physfn)
  return VAR_1;

 return FUNC_0(VAR_2) ? VAR_0 : VAR_1;
}
