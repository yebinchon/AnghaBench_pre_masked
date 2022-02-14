
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xhci_virt_ep {int stop_cmds_pending; int stop_cmd_timer; int ep_state; } ;
struct xhci_hcd {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct xhci_hcd *VAR_1,
  struct xhci_virt_ep *VAR_2)
{
 VAR_2->ep_state &= ~VAR_0;




 if (FUNC_0(&VAR_2->stop_cmd_timer))
  VAR_2->stop_cmds_pending--;
}
