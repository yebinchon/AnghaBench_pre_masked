
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int class; } ;
struct TYPE_2__ {int piar_lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct pci_dev*) ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

void FUNC_3(struct pci_dev *VAR_2)
{
 unsigned long VAR_3;


 if ((VAR_2->class >> 16) == VAR_0)
  return;

 FUNC_1(&VAR_1.piar_lock, VAR_3);
 FUNC_0(VAR_2);
 FUNC_2(&VAR_1.piar_lock, VAR_3);
}
