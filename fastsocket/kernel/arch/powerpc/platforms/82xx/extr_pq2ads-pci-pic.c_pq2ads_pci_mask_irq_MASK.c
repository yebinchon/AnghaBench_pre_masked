
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pq2ads_pci_pic {TYPE_1__* regs; } ;
struct TYPE_2__ {int mask; } ;


 int VAR_0 ;
 struct pq2ads_pci_pic* FUNC_0 (unsigned int) ;
 int FUNC_1 () ;
 int VAR_1 ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (unsigned int) ;

__attribute__((used)) static void FUNC_6(unsigned int VAR_2)
{
 struct pq2ads_pci_pic *VAR_3 = FUNC_0(VAR_2);
 int VAR_4 = VAR_0 - FUNC_5(VAR_2) - 1;

 if (VAR_4 != -1) {
  unsigned long VAR_5;
  FUNC_3(&VAR_1, VAR_5);

  FUNC_2(&VAR_3->regs->mask, 1 << VAR_4);
  FUNC_1();

  FUNC_4(&VAR_1, VAR_5);
 }
}
