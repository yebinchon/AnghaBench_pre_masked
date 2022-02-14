
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct xhci_hcd {TYPE_1__* op_regs; } ;
struct TYPE_2__ {int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct xhci_hcd*,char*,...) ;
 int FUNC_1 (struct xhci_hcd*,int *) ;

__attribute__((used)) static void FUNC_2(struct xhci_hcd *VAR_3)
{
 u32 VAR_4;

 VAR_4 = FUNC_1(VAR_3, &VAR_3->op_regs->status);
 FUNC_0(VAR_3, "USBSTS 0x%x:\n", VAR_4);
 FUNC_0(VAR_3, "  Event ring is %sempty\n",
   (VAR_4 & VAR_0) ? "not " : "");
 FUNC_0(VAR_3, "  %sHost System Error\n",
   (VAR_4 & VAR_1) ? "WARNING: " : "No ");
 FUNC_0(VAR_3, "  HC is %s\n",
   (VAR_4 & VAR_2) ? "halted" : "running");
}
