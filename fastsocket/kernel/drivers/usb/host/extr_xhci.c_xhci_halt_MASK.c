
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xhci_hcd {int cmd_ring_state; int xhc_state; TYPE_1__* op_regs; } ;
struct TYPE_2__ {int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct xhci_hcd*,char*) ;
 int FUNC_1 (struct xhci_hcd*,int *,int ,int ,int ) ;
 int FUNC_2 (struct xhci_hcd*) ;
 int FUNC_3 (struct xhci_hcd*,char*,int ) ;

int FUNC_4(struct xhci_hcd *VAR_4)
{
 int VAR_5;
 FUNC_0(VAR_4, "// Halt the HC\n");
 FUNC_2(VAR_4);

 VAR_5 = FUNC_1(VAR_4, &VAR_4->op_regs->status,
   VAR_1, VAR_1, VAR_2);
 if (!VAR_5) {
  VAR_4->xhc_state |= VAR_3;
  VAR_4->cmd_ring_state = VAR_0;
 } else
  FUNC_3(VAR_4, "Host not halted after %u microseconds.\n",
    VAR_2);
 return VAR_5;
}
