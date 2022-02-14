
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct TYPE_2__ {int piar_lock; } ;


 struct pci_dev* FUNC_0 (unsigned long) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

struct pci_dev *FUNC_3(unsigned long VAR_1)
{
 struct pci_dev *VAR_2;
 unsigned long VAR_3;

 FUNC_1(&VAR_0.piar_lock, VAR_3);
 VAR_2 = FUNC_0(VAR_1);
 FUNC_2(&VAR_0.piar_lock, VAR_3);
 return VAR_2;
}
