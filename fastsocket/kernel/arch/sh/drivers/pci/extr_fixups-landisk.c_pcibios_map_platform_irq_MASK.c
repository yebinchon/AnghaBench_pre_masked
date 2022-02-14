
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pci_dev {int dummy; } ;


 int FUNC_0 (char*,int,int) ;

int FUNC_1(struct pci_dev *VAR_0, u8 VAR_1, u8 VAR_2)
{






 int VAR_3 = ((VAR_1 + VAR_2 - 1) & 0x3) + 5;

 if ((VAR_1 | (VAR_2 - 1)) > 0x3) {
  FUNC_0("PCI: Bad IRQ mapping request for slot %d pin %c\n",
         VAR_1, VAR_2 - 1 + 'A');
  return -1;
 }
 return VAR_3;
}
