
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union xhci_trb {int dummy; } xhci_trb ;
struct xhci_segment {union xhci_trb* trbs; struct xhci_segment* next; } ;
struct xhci_ring {int dummy; } ;
struct xhci_hcd {int dummy; } ;


 scalar_t__ FUNC_0 (struct xhci_hcd*,struct xhci_ring*,struct xhci_segment*,union xhci_trb*) ;

__attribute__((used)) static void FUNC_1(struct xhci_hcd *VAR_0,
  struct xhci_ring *VAR_1,
  struct xhci_segment **VAR_2,
  union xhci_trb **VAR_3)
{
 if (FUNC_0(VAR_0, VAR_1, *VAR_2, *VAR_3)) {
  *VAR_2 = (*VAR_2)->next;
  *VAR_3 = ((*VAR_2)->trbs);
 } else {
  (*VAR_3)++;
 }
}
