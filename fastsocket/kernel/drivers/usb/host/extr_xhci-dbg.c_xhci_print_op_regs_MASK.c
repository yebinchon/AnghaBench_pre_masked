
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xhci_hcd {int op_regs; } ;


 int FUNC_0 (struct xhci_hcd*,char*,int ) ;
 int FUNC_1 (struct xhci_hcd*) ;
 int FUNC_2 (struct xhci_hcd*) ;

__attribute__((used)) static void FUNC_3(struct xhci_hcd *VAR_0)
{
 FUNC_0(VAR_0, "xHCI operational registers at %p:\n", VAR_0->op_regs);
 FUNC_1(VAR_0);
 FUNC_2(VAR_0);
}
