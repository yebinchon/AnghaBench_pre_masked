
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct xhci_virt_ep {int ep_state; } ;
struct xhci_hcd {TYPE_1__** devs; } ;
struct xhci_dequeue_state {scalar_t__ new_cycle_state; int new_deq_ptr; TYPE_2__* new_deq_seg; } ;
struct TYPE_6__ {scalar_t__ dma; } ;
struct TYPE_5__ {struct xhci_virt_ep* eps; } ;


 int VAR_0 ;
 int FUNC_0 (struct xhci_hcd*,unsigned int,unsigned int,unsigned int,TYPE_2__*,int ,int ) ;
 int FUNC_1 (struct xhci_hcd*,char*,TYPE_2__*,unsigned long long,int ,unsigned long long,scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int ) ;

void FUNC_3(struct xhci_hcd *VAR_1,
  unsigned int VAR_2, unsigned int VAR_3,
  unsigned int VAR_4,
  struct xhci_dequeue_state *VAR_5)
{
 struct xhci_virt_ep *VAR_6 = &VAR_1->devs[VAR_2]->eps[VAR_3];

 FUNC_1(VAR_1, "Set TR Deq Ptr cmd, new deq seg = %p (0x%llx dma), "
   "new deq ptr = %p (0x%llx dma), new cycle = %u\n",
   VAR_5->new_deq_seg,
   (unsigned long long)VAR_5->new_deq_seg->dma,
   VAR_5->new_deq_ptr,
   (unsigned long long)FUNC_2(VAR_5->new_deq_seg, VAR_5->new_deq_ptr),
   VAR_5->new_cycle_state);
 FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4,
   VAR_5->new_deq_seg,
   VAR_5->new_deq_ptr,
   (u32) VAR_5->new_cycle_state);





 VAR_6->ep_state |= VAR_0;
}
