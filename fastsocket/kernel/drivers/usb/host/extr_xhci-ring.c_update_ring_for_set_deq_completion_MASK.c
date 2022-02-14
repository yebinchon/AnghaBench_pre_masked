
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union xhci_trb {int dummy; } xhci_trb ;
struct xhci_virt_device {TYPE_1__* eps; } ;
struct xhci_ring {int num_trbs_free; union xhci_trb* dequeue; TYPE_2__* deq_seg; } ;
struct xhci_hcd {int dummy; } ;
struct TYPE_4__ {union xhci_trb* trbs; struct TYPE_4__* next; } ;
struct TYPE_3__ {union xhci_trb* queued_deq_ptr; } ;


 scalar_t__ FUNC_0 (struct xhci_hcd*,struct xhci_ring*,TYPE_2__*,union xhci_trb*) ;
 int FUNC_1 (struct xhci_hcd*,char*) ;

__attribute__((used)) static void FUNC_2(struct xhci_hcd *VAR_0,
  struct xhci_virt_device *VAR_1,
  struct xhci_ring *VAR_2,
  unsigned int VAR_3)
{
 union xhci_trb *VAR_4;
 int VAR_5;
 bool VAR_6 = 0;

 VAR_5 = VAR_2->num_trbs_free;
 VAR_4 = VAR_2->dequeue;







 if (FUNC_0(VAR_0, VAR_2, VAR_2->deq_seg, VAR_2->dequeue)) {
  VAR_2->deq_seg = VAR_2->deq_seg->next;
  VAR_2->dequeue = VAR_2->deq_seg->trbs;
 }

 while (VAR_2->dequeue != VAR_1->eps[VAR_3].queued_deq_ptr) {

  VAR_2->num_trbs_free++;
  VAR_2->dequeue++;
  if (FUNC_0(VAR_0, VAR_2, VAR_2->deq_seg,
    VAR_2->dequeue)) {
   if (VAR_2->dequeue ==
     VAR_1->eps[VAR_3].queued_deq_ptr)
    break;
   VAR_2->deq_seg = VAR_2->deq_seg->next;
   VAR_2->dequeue = VAR_2->deq_seg->trbs;
  }
  if (VAR_2->dequeue == VAR_4) {
   VAR_6 = 1;
   break;
  }
 }

 if (VAR_6) {
  FUNC_1(VAR_0, "Unable to find new dequeue pointer\n");
  VAR_2->num_trbs_free = VAR_5;
 }
}
