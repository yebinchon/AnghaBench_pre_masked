
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xhci_virt_ep {TYPE_1__* ring; } ;
struct xhci_hcd {int dummy; } ;
struct xhci_ep_ctx {int deq; int ep_info; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {int cycle_state; int dequeue; int deq_seg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ) ;

void FUNC_3(struct xhci_hcd *VAR_2,
  struct xhci_ep_ctx *VAR_3,
  struct xhci_virt_ep *VAR_4)
{
 dma_addr_t VAR_5;
 VAR_3->ep_info &= FUNC_0(~(VAR_1 | VAR_0));
 VAR_5 = FUNC_2(VAR_4->ring->deq_seg, VAR_4->ring->dequeue);
 VAR_3->deq = FUNC_1(VAR_5 | VAR_4->ring->cycle_state);
}
