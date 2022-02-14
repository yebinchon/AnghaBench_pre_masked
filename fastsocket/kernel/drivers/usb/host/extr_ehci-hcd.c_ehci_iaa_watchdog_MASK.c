
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int lost_iaa; } ;
struct ehci_hcd {int lock; TYPE_2__* regs; TYPE_1__ stats; int iaa_watchdog; scalar_t__ reclaim; } ;
struct TYPE_6__ {int state; } ;
struct TYPE_5__ {int status; int command; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (struct ehci_hcd*,int *) ;
 TYPE_3__* FUNC_3 (struct ehci_hcd*) ;
 int FUNC_4 (struct ehci_hcd*,char*,int,int) ;
 int FUNC_5 (struct ehci_hcd*,int,int *) ;
 int FUNC_6 (struct ehci_hcd*) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(unsigned long VAR_2)
{
 struct ehci_hcd *VAR_3 = (struct ehci_hcd *) VAR_2;
 unsigned long VAR_4;

 FUNC_7 (&VAR_3->lock, VAR_4);






 if (VAR_3->reclaim
   && !FUNC_9(&VAR_3->iaa_watchdog)
   && FUNC_1(FUNC_3(VAR_3)->state)) {
  u32 VAR_5, VAR_6;







  VAR_5 = FUNC_2(VAR_3, &VAR_3->regs->command);
  if (VAR_5 & VAR_0)
   FUNC_5(VAR_3, VAR_5 & ~VAR_0,
     &VAR_3->regs->command);







  VAR_6 = FUNC_2(VAR_3, &VAR_3->regs->status);
  if ((VAR_6 & VAR_1) || !(VAR_5 & VAR_0)) {
   FUNC_0 (VAR_3->stats.lost_iaa);
   FUNC_5(VAR_3, VAR_1, &VAR_3->regs->status);
  }

  FUNC_4(VAR_3, "IAA watchdog: status %x cmd %x\n",
    VAR_6, VAR_5);
  FUNC_6(VAR_3);
 }

 FUNC_8(&VAR_3->lock, VAR_4);
}
