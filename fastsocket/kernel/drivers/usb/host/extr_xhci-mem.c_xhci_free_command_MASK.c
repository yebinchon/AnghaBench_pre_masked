
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xhci_hcd {int dummy; } ;
struct xhci_command {struct xhci_command* completion; int in_ctx; } ;


 int FUNC_0 (struct xhci_command*) ;
 int FUNC_1 (struct xhci_hcd*,int ) ;

void FUNC_2(struct xhci_hcd *VAR_0,
  struct xhci_command *VAR_1)
{
 FUNC_1(VAR_0,
   VAR_1->in_ctx);
 FUNC_0(VAR_1->completion);
 FUNC_0(VAR_1);
}
