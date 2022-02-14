
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int devfn; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*,int ,int ) ;

void FUNC_3(struct pci_dev *VAR_2)
{

 if (FUNC_0(VAR_2->devfn) != 0)
  return;

 if (!FUNC_1(VAR_2))
  return;

 FUNC_2(VAR_2, VAR_0, VAR_1);
}
