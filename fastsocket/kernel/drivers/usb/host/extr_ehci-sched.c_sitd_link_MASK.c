
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct ehci_sitd* sitd; } ;
struct ehci_sitd {unsigned int frame; int sitd_dma; int hw_next; TYPE_1__ sitd_next; } ;
struct ehci_hcd {int * periodic; TYPE_1__* pshadow; } ;


 int VAR_0 ;
 int FUNC_0 (struct ehci_hcd*,int) ;
 int FUNC_1 () ;

__attribute__((used)) static inline void
FUNC_2 (struct ehci_hcd *VAR_1, unsigned VAR_2, struct ehci_sitd *VAR_3)
{

 VAR_3->sitd_next = VAR_1->pshadow [VAR_2];
 VAR_3->hw_next = VAR_1->periodic [VAR_2];
 VAR_1->pshadow [VAR_2].sitd = VAR_3;
 VAR_3->frame = VAR_2;
 FUNC_1 ();
 VAR_1->periodic[VAR_2] = FUNC_0(VAR_1, VAR_3->sitd_dma | VAR_0);
}
