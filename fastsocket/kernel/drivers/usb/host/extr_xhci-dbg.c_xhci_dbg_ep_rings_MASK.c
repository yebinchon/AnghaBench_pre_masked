
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xhci_virt_ep {int ep_state; struct xhci_ring* ring; TYPE_1__* stream_info; } ;
struct xhci_ring {int deq_seg; } ;
struct xhci_hcd {int dummy; } ;
struct TYPE_2__ {int num_streams; struct xhci_ring** stream_rings; } ;


 int VAR_0 ;
 int FUNC_0 (struct xhci_hcd*,char*,unsigned int,unsigned int,...) ;
 int FUNC_1 (struct xhci_hcd*,int ) ;

void FUNC_2(struct xhci_hcd *VAR_1,
  unsigned int VAR_2, unsigned int VAR_3,
  struct xhci_virt_ep *VAR_4)
{
 int VAR_5;
 struct xhci_ring *VAR_6;

 if (VAR_4->ep_state & VAR_0) {
  for (VAR_5 = 1; VAR_5 < VAR_4->stream_info->num_streams; VAR_5++) {
   VAR_6 = VAR_4->stream_info->stream_rings[VAR_5];
   FUNC_0(VAR_1, "Dev %d endpoint %d stream ID %d:\n",
    VAR_2, VAR_3, VAR_5);
   FUNC_1(VAR_1, VAR_6->deq_seg);
  }
 } else {
  VAR_6 = VAR_4->ring;
  if (!VAR_6)
   return;
  FUNC_0(VAR_1, "Dev %d endpoint ring %d:\n",
    VAR_2, VAR_3);
  FUNC_1(VAR_1, VAR_6->deq_seg);
 }
}
