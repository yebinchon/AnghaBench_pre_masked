
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ ptr; } ;
struct ehci_qh {int qh_dma; int hw; scalar_t__ dummy; TYPE_1__ qh_next; int qtd_list; struct ehci_hcd* ehci; } ;
struct ehci_hcd {int qh_pool; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct ehci_hcd*,char*) ;
 int FUNC_3 (struct ehci_hcd*,scalar_t__) ;
 int FUNC_4 (struct ehci_qh*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct ehci_qh *VAR_0)
{
 struct ehci_hcd *VAR_1 = VAR_0->ehci;


 if (!FUNC_5 (&VAR_0->qtd_list) || VAR_0->qh_next.ptr) {
  FUNC_2 (VAR_1, "unused qh not empty!\n");
  FUNC_0 ();
 }
 if (VAR_0->dummy)
  FUNC_3 (VAR_1, VAR_0->dummy);
 FUNC_1(VAR_1->qh_pool, VAR_0->hw, VAR_0->qh_dma);
 FUNC_4(VAR_0);
}
