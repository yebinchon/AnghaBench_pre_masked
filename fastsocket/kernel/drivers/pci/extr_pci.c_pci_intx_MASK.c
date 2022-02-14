
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pci_devres {int restore_intx; int orig_intx; } ;
struct pci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct pci_devres* FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (struct pci_dev*,int ,int*) ;
 int FUNC_2 (struct pci_dev*,int ,int) ;

void
FUNC_3(struct pci_dev *VAR_2, int VAR_3)
{
 u16 VAR_4, VAR_5;

 FUNC_1(VAR_2, VAR_0, &VAR_4);

 if (VAR_3) {
  VAR_5 = VAR_4 & ~VAR_1;
 } else {
  VAR_5 = VAR_4 | VAR_1;
 }

 if (VAR_5 != VAR_4) {
  struct pci_devres *VAR_6;

  FUNC_2(VAR_2, VAR_0, VAR_5);

  VAR_6 = FUNC_0(VAR_2);
  if (VAR_6 && !VAR_6->restore_intx) {
   VAR_6->restore_intx = 1;
   VAR_6->orig_intx = !VAR_3;
  }
 }
}
