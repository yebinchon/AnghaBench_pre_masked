
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xhci_segment {struct xhci_segment* next; } ;
struct xhci_ring {int deq_updates; int enq_updates; struct xhci_segment* first_seg; } ;
struct xhci_hcd {int dummy; } ;


 int FUNC_0 (struct xhci_hcd*,char*) ;
 int FUNC_1 (struct xhci_hcd*,struct xhci_segment*) ;

void FUNC_2(struct xhci_hcd *VAR_0, struct xhci_ring *VAR_1)
{

 struct xhci_segment *VAR_2;
 struct xhci_segment *VAR_3 = VAR_1->first_seg;
 FUNC_1(VAR_0, VAR_3);

 if (!VAR_1->enq_updates && !VAR_1->deq_updates) {
  FUNC_0(VAR_0, "  Ring has not been updated\n");
  return;
 }
 for (VAR_2 = VAR_3->next; VAR_2 != VAR_3; VAR_2 = VAR_2->next)
  FUNC_1(VAR_0, VAR_2);
}
