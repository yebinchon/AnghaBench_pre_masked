
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct xhci_hcd {TYPE_1__* op_regs; } ;
struct TYPE_2__ {int command; int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct xhci_hcd*,int *) ;
 int FUNC_1 (struct xhci_hcd*,int,int *) ;

void FUNC_2(struct xhci_hcd *VAR_3)
{
 u32 VAR_4;
 u32 VAR_5;
 u32 VAR_6;

 VAR_6 = ~(VAR_2);
 VAR_4 = FUNC_0(VAR_3, &VAR_3->op_regs->status) & VAR_1;
 if (!VAR_4)
  VAR_6 &= ~VAR_0;

 VAR_5 = FUNC_0(VAR_3, &VAR_3->op_regs->command);
 VAR_5 &= VAR_6;
 FUNC_1(VAR_3, VAR_5, &VAR_3->op_regs->command);
}
