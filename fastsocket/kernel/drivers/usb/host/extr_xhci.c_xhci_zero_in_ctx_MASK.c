
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xhci_virt_device {int in_ctx; } ;
struct xhci_slot_ctx {int dev_info; } ;
struct xhci_input_control_ctx {scalar_t__ add_flags; scalar_t__ drop_flags; } ;
struct xhci_hcd {int dummy; } ;
struct xhci_ep_ctx {scalar_t__ tx_info; scalar_t__ deq; scalar_t__ ep_info2; scalar_t__ ep_info; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 struct xhci_ep_ctx* FUNC_2 (struct xhci_hcd*,int ,int) ;
 struct xhci_input_control_ctx* FUNC_3 (struct xhci_hcd*,int ) ;
 struct xhci_slot_ctx* FUNC_4 (struct xhci_hcd*,int ) ;

__attribute__((used)) static void FUNC_5(struct xhci_hcd *VAR_1, struct xhci_virt_device *VAR_2)
{
 struct xhci_input_control_ctx *VAR_3;
 struct xhci_ep_ctx *VAR_4;
 struct xhci_slot_ctx *VAR_5;
 int VAR_6;






 VAR_3 = FUNC_3(VAR_1, VAR_2->in_ctx);
 VAR_3->drop_flags = 0;
 VAR_3->add_flags = 0;
 VAR_5 = FUNC_4(VAR_1, VAR_2->in_ctx);
 VAR_5->dev_info &= FUNC_1(~VAR_0);

 VAR_5->dev_info |= FUNC_1(FUNC_0(1));
 for (VAR_6 = 1; VAR_6 < 31; ++VAR_6) {
  VAR_4 = FUNC_2(VAR_1, VAR_2->in_ctx, VAR_6);
  VAR_4->ep_info = 0;
  VAR_4->ep_info2 = 0;
  VAR_4->deq = 0;
  VAR_4->tx_info = 0;
 }
}
