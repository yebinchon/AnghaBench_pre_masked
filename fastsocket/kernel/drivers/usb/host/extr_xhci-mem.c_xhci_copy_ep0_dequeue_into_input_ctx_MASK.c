
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xhci_virt_device {TYPE_1__* eps; int in_ctx; } ;
struct xhci_ring {int cycle_state; int enqueue; int enq_seg; } ;
struct xhci_hcd {struct xhci_virt_device** devs; } ;
struct xhci_ep_ctx {int deq; } ;
struct usb_device {size_t slot_id; } ;
struct TYPE_2__ {struct xhci_ring* ring; } ;


 int FUNC_0 (int) ;
 struct xhci_ep_ctx* FUNC_1 (struct xhci_hcd*,int ,int ) ;
 int FUNC_2 (int ,int ) ;

void FUNC_3(struct xhci_hcd *VAR_0,
  struct usb_device *VAR_1)
{
 struct xhci_virt_device *VAR_2;
 struct xhci_ep_ctx *VAR_3;
 struct xhci_ring *VAR_4;

 VAR_2 = VAR_0->devs[VAR_1->slot_id];
 VAR_3 = FUNC_1(VAR_0, VAR_2->in_ctx, 0);
 VAR_4 = VAR_2->eps[0].ring;







 VAR_3->deq = FUNC_0(FUNC_2(VAR_4->enq_seg,
       VAR_4->enqueue)
       | VAR_4->cycle_state);
}
