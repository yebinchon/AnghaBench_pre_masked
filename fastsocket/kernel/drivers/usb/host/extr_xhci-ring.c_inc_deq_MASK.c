
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct xhci_ring {scalar_t__ type; int cycle_state; int dequeue; TYPE_1__* deq_seg; int num_trbs_free; int deq_updates; } ;
struct xhci_hcd {int dummy; } ;
struct TYPE_4__ {int trbs; struct TYPE_4__* next; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct xhci_hcd*,struct xhci_ring*,TYPE_1__*,int ) ;
 scalar_t__ FUNC_1 (struct xhci_hcd*,struct xhci_ring*,TYPE_1__*,int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_3(struct xhci_hcd *VAR_1, struct xhci_ring *VAR_2)
{
 unsigned long long VAR_3;

 VAR_2->deq_updates++;





 if (VAR_2->type != VAR_0 &&
   !FUNC_0(VAR_1, VAR_2, VAR_2->deq_seg, VAR_2->dequeue))
  VAR_2->num_trbs_free++;

 do {





  if (FUNC_0(VAR_1, VAR_2, VAR_2->deq_seg, VAR_2->dequeue)) {
   if (VAR_2->type == VAR_0 &&
     FUNC_1(VAR_1, VAR_2,
      VAR_2->deq_seg, VAR_2->dequeue)) {
    VAR_2->cycle_state = (VAR_2->cycle_state ? 0 : 1);
   }
   VAR_2->deq_seg = VAR_2->deq_seg->next;
   VAR_2->dequeue = VAR_2->deq_seg->trbs;
  } else {
   VAR_2->dequeue++;
  }
 } while (FUNC_0(VAR_1, VAR_2, VAR_2->deq_seg, VAR_2->dequeue));

 VAR_3 = (unsigned long long) FUNC_2(VAR_2->deq_seg, VAR_2->dequeue);
}
