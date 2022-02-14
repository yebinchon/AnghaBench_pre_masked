
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xhci_virt_device {int in_ctx; } ;
struct xhci_hcd {int dummy; } ;
struct xhci_ep_ctx {scalar_t__ tx_info; scalar_t__ deq; scalar_t__ ep_info2; scalar_t__ ep_info; } ;
struct usb_host_endpoint {int desc; } ;


 unsigned int FUNC_0 (int *) ;
 struct xhci_ep_ctx* FUNC_1 (struct xhci_hcd*,int ,unsigned int) ;

void FUNC_2(struct xhci_hcd *VAR_0,
  struct xhci_virt_device *VAR_1,
  struct usb_host_endpoint *VAR_2)
{
 unsigned int VAR_3;
 struct xhci_ep_ctx *VAR_4;

 VAR_3 = FUNC_0(&VAR_2->desc);
 VAR_4 = FUNC_1(VAR_0, VAR_1->in_ctx, VAR_3);

 VAR_4->ep_info = 0;
 VAR_4->ep_info2 = 0;
 VAR_4->deq = 0;
 VAR_4->tx_info = 0;



}
