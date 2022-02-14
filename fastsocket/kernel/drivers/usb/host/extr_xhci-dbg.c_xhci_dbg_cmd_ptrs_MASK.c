
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct xhci_hcd {TYPE_1__* op_regs; } ;
struct TYPE_2__ {int cmd_ring; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct xhci_hcd*,char*,int ) ;
 int FUNC_3 (struct xhci_hcd*,int *) ;

void FUNC_4(struct xhci_hcd *VAR_0)
{
 u64 VAR_1;

 VAR_1 = FUNC_3(VAR_0, &VAR_0->op_regs->cmd_ring);
 FUNC_2(VAR_0, "// xHC command ring deq ptr low bits + flags = @%08x\n",
   FUNC_0(VAR_1));
 FUNC_2(VAR_0, "// xHC command ring deq ptr high bits = @%08x\n",
   FUNC_1(VAR_1));
}
