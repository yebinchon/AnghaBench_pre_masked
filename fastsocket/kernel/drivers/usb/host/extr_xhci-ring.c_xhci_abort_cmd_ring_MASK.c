
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct xhci_hcd {int cmd_ring_state; int xhc_state; TYPE_1__* op_regs; } ;
struct TYPE_2__ {int cmd_ring; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct xhci_hcd*,char*) ;
 int FUNC_1 (struct xhci_hcd*,char*) ;
 int FUNC_2 (struct xhci_hcd*) ;
 int FUNC_3 (struct xhci_hcd*,int *,int,int ,int) ;
 int FUNC_4 (struct xhci_hcd*) ;
 int FUNC_5 (struct xhci_hcd*,int *) ;
 int FUNC_6 (struct xhci_hcd*,int,int *) ;

__attribute__((used)) static int FUNC_7(struct xhci_hcd *VAR_6)
{
 u64 VAR_7;
 int VAR_8;

 FUNC_0(VAR_6, "Abort command ring\n");

 if (!(VAR_6->cmd_ring_state & VAR_3)) {
  FUNC_0(VAR_6, "The command ring isn't running, "
    "Have the command ring been stopped?\n");
  return 0;
 }

 VAR_7 = FUNC_5(VAR_6, &VAR_6->op_regs->cmd_ring);
 if (!(VAR_7 & VAR_1)) {
  FUNC_0(VAR_6, "Command ring had been stopped\n");
  return 0;
 }
 VAR_6->cmd_ring_state = VAR_2;
 FUNC_6(VAR_6, VAR_7 | VAR_0,
   &VAR_6->op_regs->cmd_ring);
 VAR_8 = FUNC_3(VAR_6, &VAR_6->op_regs->cmd_ring,
   VAR_1, 0, 5 * 1000 * 1000);
 if (VAR_8 < 0) {
  FUNC_1(VAR_6, "Stopped the command ring failed, "
    "maybe the host is dead\n");
  VAR_6->xhc_state |= VAR_5;
  FUNC_4(VAR_6);
  FUNC_2(VAR_6);
  return -VAR_4;
 }

 return 0;
}
