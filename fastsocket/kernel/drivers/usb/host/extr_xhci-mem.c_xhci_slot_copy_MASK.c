
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xhci_slot_ctx {int dev_state; int tt_info; int dev_info2; int dev_info; } ;
struct xhci_hcd {int dummy; } ;
struct xhci_container_ctx {int dummy; } ;


 struct xhci_slot_ctx* FUNC_0 (struct xhci_hcd*,struct xhci_container_ctx*) ;

void FUNC_1(struct xhci_hcd *VAR_0,
  struct xhci_container_ctx *VAR_1,
  struct xhci_container_ctx *VAR_2)
{
 struct xhci_slot_ctx *VAR_3;
 struct xhci_slot_ctx *VAR_4;

 VAR_3 = FUNC_0(VAR_0, VAR_1);
 VAR_4 = FUNC_0(VAR_0, VAR_2);

 VAR_3->dev_info = VAR_4->dev_info;
 VAR_3->dev_info2 = VAR_4->dev_info2;
 VAR_3->tt_info = VAR_4->tt_info;
 VAR_3->dev_state = VAR_4->dev_state;
}
