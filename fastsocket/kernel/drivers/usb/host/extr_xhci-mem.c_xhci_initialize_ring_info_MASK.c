
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xhci_ring {unsigned int cycle_state; int num_trbs_free; int num_segs; scalar_t__ deq_updates; scalar_t__ enq_updates; TYPE_1__* first_seg; TYPE_1__* deq_seg; int enqueue; int dequeue; TYPE_1__* enq_seg; } ;
struct TYPE_2__ {int trbs; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct xhci_ring *VAR_1,
     unsigned int VAR_2)
{

 VAR_1->enqueue = VAR_1->first_seg->trbs;
 VAR_1->enq_seg = VAR_1->first_seg;
 VAR_1->dequeue = VAR_1->enqueue;
 VAR_1->deq_seg = VAR_1->first_seg;







 VAR_1->cycle_state = VAR_2;

 VAR_1->enq_updates = 0;
 VAR_1->deq_updates = 0;





 VAR_1->num_trbs_free = VAR_1->num_segs * (VAR_0 - 1) - 1;
}
