
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {unsigned char irq; } ;



unsigned long FUNC_0(unsigned char VAR_0, unsigned char VAR_1,
     void *VAR_2)
{
 unsigned char VAR_3 = 0;
 struct pci_dev *VAR_4 = (struct pci_dev *) VAR_2;

 VAR_3 = VAR_4->irq;

 return ((unsigned long) VAR_3);
}
