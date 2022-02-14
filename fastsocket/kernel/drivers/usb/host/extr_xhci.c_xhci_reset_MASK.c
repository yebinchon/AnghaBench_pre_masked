
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct xhci_hcd {TYPE_2__* bus_state; TYPE_1__* op_regs; } ;
struct TYPE_4__ {scalar_t__ resuming_ports; scalar_t__ suspended_ports; scalar_t__ port_c_suspend; } ;
struct TYPE_3__ {int status; int command; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct xhci_hcd*,char*) ;
 int FUNC_1 (struct xhci_hcd*,int *,int,int ,int) ;
 int FUNC_2 (struct xhci_hcd*,int *) ;
 int FUNC_3 (struct xhci_hcd*,char*) ;
 int FUNC_4 (struct xhci_hcd*,int,int *) ;

int FUNC_5(struct xhci_hcd *VAR_3)
{
 u32 VAR_4;
 u32 VAR_5;
 int VAR_6, VAR_7;

 VAR_5 = FUNC_2(VAR_3, &VAR_3->op_regs->status);
 if ((VAR_5 & VAR_2) == 0) {
  FUNC_3(VAR_3, "Host controller not halted, aborting reset.\n");
  return 0;
 }

 FUNC_0(VAR_3, "// Reset the HC\n");
 VAR_4 = FUNC_2(VAR_3, &VAR_3->op_regs->command);
 VAR_4 |= VAR_0;
 FUNC_4(VAR_3, VAR_4, &VAR_3->op_regs->command);

 VAR_6 = FUNC_1(VAR_3, &VAR_3->op_regs->command,
   VAR_0, 0, 10 * 1000 * 1000);
 if (VAR_6)
  return VAR_6;

 FUNC_0(VAR_3, "Wait for controller to be ready for doorbell rings\n");




 VAR_6 = FUNC_1(VAR_3, &VAR_3->op_regs->status,
   VAR_1, 0, 10 * 1000 * 1000);

 for (VAR_7 = 0; VAR_7 < 2; ++VAR_7) {
  VAR_3->bus_state[VAR_7].port_c_suspend = 0;
  VAR_3->bus_state[VAR_7].suspended_ports = 0;
  VAR_3->bus_state[VAR_7].resuming_ports = 0;
 }

 return VAR_6;
}
