
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct xhci_hcd {TYPE_1__* run_regs; } ;
struct TYPE_2__ {int * rsvd; int microframe_index; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct xhci_hcd*,char*,TYPE_1__*,...) ;
 scalar_t__ FUNC_1 (struct xhci_hcd*,int *) ;

void FUNC_2(struct xhci_hcd *VAR_1)
{
 u32 VAR_2;
 int VAR_3;

 FUNC_0(VAR_1, "xHCI runtime registers at %p:\n", VAR_1->run_regs);
 VAR_2 = FUNC_1(VAR_1, &VAR_1->run_regs->microframe_index);
 FUNC_0(VAR_1, "  %p: Microframe index = 0x%x\n",
   &VAR_1->run_regs->microframe_index,
   (unsigned int) VAR_2);
 for (VAR_3 = 0; VAR_3 < 7; ++VAR_3) {
  VAR_2 = FUNC_1(VAR_1, &VAR_1->run_regs->rsvd[VAR_3]);
  if (VAR_2 != VAR_0)
   FUNC_0(VAR_1, "  WARN: %p: Rsvd[%i] = 0x%x\n",
     &VAR_1->run_regs->rsvd[VAR_3],
     VAR_3, (unsigned int) VAR_2);
 }
}
