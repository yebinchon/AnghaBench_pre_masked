
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long data; int function; } ;
struct xhci_virt_ep {struct xhci_hcd* xhci; TYPE_1__ stop_cmd_timer; } ;
struct xhci_hcd {int dummy; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(struct xhci_hcd *VAR_1,
  struct xhci_virt_ep *VAR_2)
{
 FUNC_0(&VAR_2->stop_cmd_timer);
 VAR_2->stop_cmd_timer.data = (unsigned long) VAR_2;
 VAR_2->stop_cmd_timer.function = VAR_0;
 VAR_2->xhci = VAR_1;
}
