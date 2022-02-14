
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct oxu_hcd {TYPE_2__* regs; scalar_t__ reclaim_ready; struct ehci_qh* async; struct ehci_qh* reclaim; int lock; } ;
struct TYPE_4__ {struct ehci_qh* qh; } ;
struct ehci_qh {scalar_t__ qh_state; TYPE_1__ qh_next; int hw_next; } ;
struct TYPE_6__ {scalar_t__ state; } ;
struct TYPE_5__ {int command; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct oxu_hcd*) ;
 TYPE_3__* FUNC_3 (struct oxu_hcd*) ;
 struct ehci_qh* FUNC_4 (struct ehci_qh*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct oxu_hcd*,int ) ;
 int FUNC_7 (struct oxu_hcd*,int ) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 () ;
 int FUNC_10 (int,int *) ;

__attribute__((used)) static void FUNC_11(struct oxu_hcd *VAR_8, struct ehci_qh *VAR_9)
{
 int VAR_10 = FUNC_5(&VAR_8->regs->command);
 struct ehci_qh *VAR_11;
 if (FUNC_8(VAR_9 == VAR_8->async)) {

  if (FUNC_3(VAR_8)->state != VAR_2
    && !VAR_8->reclaim) {

   FUNC_10(VAR_10 & ~VAR_0, &VAR_8->regs->command);
   FUNC_9();

   FUNC_7(VAR_8, VAR_6);
  }
  return;
 }

 VAR_9->qh_state = VAR_4;
 VAR_8->reclaim = VAR_9 = FUNC_4(VAR_9);

 VAR_11 = VAR_8->async;
 while (VAR_11->qh_next.qh != VAR_9)
  VAR_11 = VAR_11->qh_next.qh;

 VAR_11->hw_next = VAR_9->hw_next;
 VAR_11->qh_next = VAR_9->qh_next;
 FUNC_9();

 if (FUNC_8(FUNC_3(VAR_8)->state == VAR_2)) {



  FUNC_2(VAR_8);
  return;
 }

 VAR_8->reclaim_ready = 0;
 VAR_10 |= VAR_1;
 FUNC_10(VAR_10, &VAR_8->regs->command);
 (void) FUNC_5(&VAR_8->regs->command);
 FUNC_6(VAR_8, VAR_7);
}
