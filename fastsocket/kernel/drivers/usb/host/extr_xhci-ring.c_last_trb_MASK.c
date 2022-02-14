
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int control; } ;
union xhci_trb {TYPE_1__ link; } ;
struct xhci_segment {union xhci_trb* trbs; } ;
struct xhci_ring {int dummy; } ;
struct xhci_hcd {struct xhci_ring* event_ring; } ;


 size_t VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct xhci_hcd *VAR_1, struct xhci_ring *VAR_2,
  struct xhci_segment *VAR_3, union xhci_trb *VAR_4)
{
 if (VAR_2 == VAR_1->event_ring)
  return VAR_4 == &VAR_3->trbs[VAR_0];
 else
  return FUNC_0(VAR_4->link.control);
}
