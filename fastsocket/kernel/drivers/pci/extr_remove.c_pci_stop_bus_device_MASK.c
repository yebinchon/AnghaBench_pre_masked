
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {scalar_t__ subordinate; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct pci_dev*) ;

void FUNC_2(struct pci_dev *VAR_0)
{
 if (VAR_0->subordinate)
  FUNC_0(VAR_0->subordinate);

 FUNC_1(VAR_0);
}
