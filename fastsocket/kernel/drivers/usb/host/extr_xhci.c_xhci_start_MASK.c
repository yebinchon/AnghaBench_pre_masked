
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct xhci_hcd {int xhc_state; TYPE_1__* op_regs; } ;
struct TYPE_2__ {int status; int command; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct xhci_hcd*,char*,int ) ;
 int FUNC_1 (struct xhci_hcd*,char*,int ) ;
 int FUNC_2 (struct xhci_hcd*,int *,int ,int ,int ) ;
 int FUNC_3 (struct xhci_hcd*,int *) ;
 int FUNC_4 (struct xhci_hcd*,int ,int *) ;

__attribute__((used)) static int FUNC_5(struct xhci_hcd *VAR_5)
{
 u32 VAR_6;
 int VAR_7;

 VAR_6 = FUNC_3(VAR_5, &VAR_5->op_regs->command);
 VAR_6 |= (VAR_0);
 FUNC_0(VAR_5, "// Turn on HC, cmd = 0x%x.\n",
   VAR_6);
 FUNC_4(VAR_5, VAR_6, &VAR_5->op_regs->command);





 VAR_7 = FUNC_2(VAR_5, &VAR_5->op_regs->status,
   VAR_2, 0, VAR_3);
 if (VAR_7 == -VAR_1)
  FUNC_1(VAR_5, "Host took too long to start, "
    "waited %u microseconds.\n",
    VAR_3);
 if (!VAR_7)
  VAR_5->xhc_state &= ~VAR_4;
 return VAR_7;
}
