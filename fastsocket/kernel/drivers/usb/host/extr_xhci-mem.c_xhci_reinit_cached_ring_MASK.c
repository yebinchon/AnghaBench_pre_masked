
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union xhci_trb {int dummy; } xhci_trb ;
struct xhci_segment {struct xhci_segment* next; TYPE_2__* trbs; } ;
struct xhci_ring {int type; int td_list; struct xhci_segment* first_seg; } ;
struct xhci_hcd {int dummy; } ;
typedef enum xhci_ring_type { ____Placeholder_xhci_ring_type } xhci_ring_type ;
struct TYPE_3__ {int control; } ;
struct TYPE_4__ {TYPE_1__ link; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*,int ,int) ;
 int FUNC_2 (struct xhci_ring*,unsigned int) ;
 int FUNC_3 (struct xhci_hcd*,struct xhci_segment*,struct xhci_segment*,int) ;

__attribute__((used)) static void FUNC_4(struct xhci_hcd *VAR_2,
   struct xhci_ring *VAR_3, unsigned int VAR_4,
   enum xhci_ring_type VAR_5)
{
 struct xhci_segment *VAR_6 = VAR_3->first_seg;
 int VAR_7;

 do {
  FUNC_1(VAR_6->trbs, 0,
    sizeof(union xhci_trb)*VAR_0);
  if (VAR_4 == 0) {
   for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++)
    VAR_6->trbs[VAR_7].link.control |= VAR_1;
  }

  FUNC_3(VAR_2, VAR_6, VAR_6->next, VAR_5);
  VAR_6 = VAR_6->next;
 } while (VAR_6 != VAR_3->first_seg);
 VAR_3->type = VAR_5;
 FUNC_2(VAR_3, VAR_4);



 FUNC_0(&VAR_3->td_list);
}
