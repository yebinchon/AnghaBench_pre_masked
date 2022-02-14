
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xhci_ring {int enq_updates; int enqueue; int enq_seg; int deq_updates; int dequeue; int deq_seg; } ;
struct xhci_hcd {int dummy; } ;


 int FUNC_0 (struct xhci_hcd*,char*,int ,...) ;
 scalar_t__ FUNC_1 (int ,int ) ;

void FUNC_2(struct xhci_hcd *VAR_0, struct xhci_ring *VAR_1)
{
 FUNC_0(VAR_0, "Ring deq = %p (virt), 0x%llx (dma)\n",
   VAR_1->dequeue,
   (unsigned long long)FUNC_1(VAR_1->deq_seg,
           VAR_1->dequeue));
 FUNC_0(VAR_0, "Ring deq updated %u times\n",
   VAR_1->deq_updates);
 FUNC_0(VAR_0, "Ring enq = %p (virt), 0x%llx (dma)\n",
   VAR_1->enqueue,
   (unsigned long long)FUNC_1(VAR_1->enq_seg,
           VAR_1->enqueue));
 FUNC_0(VAR_0, "Ring enq updated %u times\n",
   VAR_1->enq_updates);
}
