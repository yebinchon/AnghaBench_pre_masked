
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union xhci_trb {int dummy; } xhci_trb ;
struct xhci_hcd {int xhc_state; int lock; } ;
struct xhci_command {int dummy; } ;
struct TYPE_2__ {int primary_hcd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct xhci_hcd*) ;
 int FUNC_5 (struct xhci_hcd*,char*) ;
 int FUNC_6 (struct xhci_hcd*,char*) ;
 int FUNC_7 (struct xhci_hcd*,struct xhci_command*,union xhci_trb*) ;
 TYPE_1__* FUNC_8 (struct xhci_hcd*) ;
 int FUNC_9 (struct xhci_hcd*,char*) ;

int FUNC_10(struct xhci_hcd *VAR_2, struct xhci_command *VAR_3,
  union xhci_trb *VAR_4)
{
 int VAR_5 = 0;
 unsigned long VAR_6;

 FUNC_0(&VAR_2->lock, VAR_6);

 if (VAR_2->xhc_state & VAR_1) {
  FUNC_9(VAR_2, "Abort the command ring,"
    " but the xHCI is dead.\n");
  VAR_5 = -VAR_0;
  goto fail;
 }


 VAR_5 = FUNC_7(VAR_2, VAR_3, VAR_4);
 if (VAR_5) {
  FUNC_9(VAR_2, "Queuing command descriptor failed.\n");
  goto fail;
 }


 VAR_5 = FUNC_4(VAR_2);
 if (VAR_5) {
  FUNC_6(VAR_2, "Abort command ring failed\n");
  if (FUNC_2(VAR_5 == -VAR_0)) {
   FUNC_1(&VAR_2->lock, VAR_6);
   FUNC_3(FUNC_8(VAR_2)->primary_hcd);
   FUNC_5(VAR_2, "xHCI host controller is dead.\n");
   return VAR_5;
  }
 }

fail:
 FUNC_1(&VAR_2->lock, VAR_6);
 return VAR_5;
}
