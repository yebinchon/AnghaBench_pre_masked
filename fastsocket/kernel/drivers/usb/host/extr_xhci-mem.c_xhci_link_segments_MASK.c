
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct xhci_segment {TYPE_2__* trbs; int dma; struct xhci_segment* next; } ;
struct xhci_hcd {int quirks; } ;
typedef enum xhci_ring_type { ____Placeholder_xhci_ring_type } xhci_ring_type ;
struct TYPE_3__ {int control; int segment_ptr; } ;
struct TYPE_4__ {TYPE_1__ link; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct xhci_hcd*) ;

__attribute__((used)) static void FUNC_5(struct xhci_hcd *VAR_7, struct xhci_segment *VAR_8,
  struct xhci_segment *VAR_9, enum xhci_ring_type VAR_10)
{
 u32 VAR_11;

 if (!VAR_8 || !VAR_9)
  return;
 VAR_8->next = VAR_9;
 if (VAR_10 != VAR_4) {
  VAR_8->trbs[VAR_0-1].link.segment_ptr =
   FUNC_2(VAR_9->dma);


  VAR_11 = FUNC_3(VAR_8->trbs[VAR_0-1].link.control);
  VAR_11 &= ~VAR_3;
  VAR_11 |= FUNC_0(VAR_2);


  if (FUNC_4(VAR_7) ||
    (VAR_10 == VAR_5 &&
     (VAR_7->quirks & VAR_6)))
   VAR_11 |= VAR_1;
  VAR_8->trbs[VAR_0-1].link.control = FUNC_1(VAR_11);
 }
}
