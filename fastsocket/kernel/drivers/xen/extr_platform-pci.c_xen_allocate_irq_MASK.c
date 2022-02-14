
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int,char*,struct pci_dev*) ;

__attribute__((used)) static int FUNC_1(struct pci_dev *VAR_4)
{
 return FUNC_0(VAR_4->irq, VAR_3,
   VAR_0 | VAR_1 | VAR_2,
   "xen-platform-pci", VAR_4);
}
