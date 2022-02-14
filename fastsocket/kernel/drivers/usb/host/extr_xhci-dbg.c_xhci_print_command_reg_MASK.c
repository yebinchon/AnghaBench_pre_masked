
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct xhci_hcd {TYPE_1__* op_regs; } ;
struct TYPE_2__ {int command; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct xhci_hcd*,char*,...) ;
 int FUNC_1 (struct xhci_hcd*,int *) ;

__attribute__((used)) static void FUNC_2(struct xhci_hcd *VAR_5)
{
 u32 VAR_6;

 VAR_6 = FUNC_1(VAR_5, &VAR_5->op_regs->command);
 FUNC_0(VAR_5, "USBCMD 0x%x:\n", VAR_6);
 FUNC_0(VAR_5, "  HC is %s\n",
   (VAR_6 & VAR_4) ? "running" : "being stopped");
 FUNC_0(VAR_5, "  HC has %sfinished hard reset\n",
   (VAR_6 & VAR_3) ? "not " : "");
 FUNC_0(VAR_5, "  Event Interrupts %s\n",
   (VAR_6 & VAR_0) ? "enabled " : "disabled");
 FUNC_0(VAR_5, "  Host System Error Interrupts %s\n",
   (VAR_6 & VAR_1) ? "enabled " : "disabled");
 FUNC_0(VAR_5, "  HC has %sfinished light reset\n",
   (VAR_6 & VAR_2) ? "not " : "");
}
