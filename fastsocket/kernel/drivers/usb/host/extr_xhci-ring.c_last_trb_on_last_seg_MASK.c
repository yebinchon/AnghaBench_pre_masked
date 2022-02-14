
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int control; } ;
union xhci_trb {TYPE_1__ link; } ;
struct xhci_segment {scalar_t__ next; union xhci_trb* trbs; } ;
struct xhci_ring {scalar_t__ first_seg; } ;
struct xhci_hcd {struct xhci_ring* event_ring; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static bool FUNC_1(struct xhci_hcd *VAR_2, struct xhci_ring *VAR_3,
  struct xhci_segment *VAR_4, union xhci_trb *VAR_5)
{
 if (VAR_3 == VAR_2->event_ring)
  return (VAR_5 == &VAR_4->trbs[VAR_1]) &&
   (VAR_4->next == VAR_2->event_ring->first_seg);
 else
  return VAR_5->link.control & FUNC_0(VAR_0);
}
