
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xhci_hcd {int dummy; } ;
struct xhci_ep_ctx {int tx_info; int deq; int ep_info2; int ep_info; } ;
struct xhci_container_ctx {int dummy; } ;


 struct xhci_ep_ctx* FUNC_0 (struct xhci_hcd*,struct xhci_container_ctx*,unsigned int) ;

void FUNC_1(struct xhci_hcd *VAR_0,
  struct xhci_container_ctx *VAR_1,
  struct xhci_container_ctx *VAR_2,
  unsigned int VAR_3)
{
 struct xhci_ep_ctx *VAR_4;
 struct xhci_ep_ctx *VAR_5;

 VAR_4 = FUNC_0(VAR_0, VAR_2, VAR_3);
 VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_3);

 VAR_5->ep_info = VAR_4->ep_info;
 VAR_5->ep_info2 = VAR_4->ep_info2;
 VAR_5->deq = VAR_4->deq;
 VAR_5->tx_info = VAR_4->tx_info;
}
