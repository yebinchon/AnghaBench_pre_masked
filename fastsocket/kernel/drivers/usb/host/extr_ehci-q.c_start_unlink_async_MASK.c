
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {struct ehci_qh* qh; } ;
struct ehci_qh {scalar_t__ qh_state; TYPE_2__ qh_next; TYPE_1__* hw; } ;
struct ehci_hcd {TYPE_3__* regs; struct ehci_qh* qh_scan_next; struct ehci_qh* async; struct ehci_qh* reclaim; int lock; } ;
struct TYPE_8__ {scalar_t__ state; } ;
struct TYPE_7__ {int command; } ;
struct TYPE_5__ {int hw_next; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ehci_hcd*,int *) ;
 TYPE_4__* FUNC_4 (struct ehci_hcd*) ;
 int FUNC_5 (struct ehci_hcd*,int,int *) ;
 int FUNC_6 (struct ehci_hcd*) ;
 int FUNC_7 (struct ehci_hcd*) ;
 struct ehci_qh* FUNC_8 (struct ehci_qh*) ;
 int FUNC_9 (struct ehci_hcd*,int ) ;
 scalar_t__ FUNC_10 (int) ;
 int FUNC_11 () ;

__attribute__((used)) static void FUNC_12 (struct ehci_hcd *VAR_7, struct ehci_qh *VAR_8)
{
 int VAR_9 = FUNC_3(VAR_7, &VAR_7->regs->command);
 struct ehci_qh *VAR_10;
 if (FUNC_10 (VAR_8 == VAR_7->async)) {

  if (FUNC_4(VAR_7)->state != VAR_2
    && !VAR_7->reclaim) {

   FUNC_5(VAR_7, VAR_9 & ~VAR_0,
        &VAR_7->regs->command);
   FUNC_11 ();

   FUNC_9 (VAR_7, VAR_6);
  }
  return;
 }

 VAR_8->qh_state = VAR_4;
 VAR_7->reclaim = VAR_8 = FUNC_8 (VAR_8);

 VAR_10 = VAR_7->async;
 while (VAR_10->qh_next.qh != VAR_8)
  VAR_10 = VAR_10->qh_next.qh;

 VAR_10->hw->hw_next = VAR_8->hw->hw_next;
 VAR_10->qh_next = VAR_8->qh_next;
 if (VAR_7->qh_scan_next == VAR_8)
  VAR_7->qh_scan_next = VAR_8->qh_next.qh;
 FUNC_11 ();


 if (FUNC_10(!FUNC_1(FUNC_4(VAR_7)->state))) {



  FUNC_6 (VAR_7);
  return;
 }

 VAR_9 |= VAR_1;
 FUNC_5(VAR_7, VAR_9, &VAR_7->regs->command);
 (void)FUNC_3(VAR_7, &VAR_7->regs->command);
 FUNC_7(VAR_7);
}
