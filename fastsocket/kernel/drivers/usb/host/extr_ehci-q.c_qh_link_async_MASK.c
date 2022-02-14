
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {struct ehci_qh* qh; } ;
struct ehci_qh {scalar_t__ qh_state; scalar_t__ xacterrs; TYPE_3__* hw; TYPE_2__ qh_next; int clearing_tt; int qh_dma; } ;
struct ehci_hcd {TYPE_1__* regs; struct ehci_qh* async; } ;
typedef int __hc32 ;
struct TYPE_8__ {int state; } ;
struct TYPE_7__ {int hw_next; } ;
struct TYPE_5__ {int command; int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ehci_hcd*,int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ehci_hcd*,int *) ;
 TYPE_4__* FUNC_3 (struct ehci_hcd*) ;
 int FUNC_4 (struct ehci_hcd*,int,int *) ;
 int FUNC_5 (struct ehci_hcd*,int *,int ,int ,int) ;
 int FUNC_6 (struct ehci_qh*) ;
 int FUNC_7 (struct ehci_hcd*,struct ehci_qh*) ;
 int FUNC_8 (struct ehci_hcd*,int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 () ;

__attribute__((used)) static void FUNC_11 (struct ehci_hcd *VAR_7, struct ehci_qh *VAR_8)
{
 __hc32 VAR_9 = FUNC_0(VAR_7, VAR_8->qh_dma);
 struct ehci_qh *VAR_10;


 if (FUNC_9(VAR_8->clearing_tt))
  return;

 FUNC_1(VAR_8->qh_state != VAR_3);


 VAR_10 = VAR_7->async;
 FUNC_8 (VAR_7, VAR_6);
 if (!VAR_10->qh_next.qh) {
  u32 VAR_11 = FUNC_2(VAR_7, &VAR_7->regs->command);

  if (!(VAR_11 & VAR_0)) {

   (void)FUNC_5(VAR_7, &VAR_7->regs->status,
     VAR_5, 0, 150);
   VAR_11 |= VAR_0 | VAR_1;
   FUNC_4(VAR_7, VAR_11, &VAR_7->regs->command);
   FUNC_3(VAR_7)->state = VAR_2;

  }
 }


 FUNC_7(VAR_7, VAR_8);


 VAR_8->qh_next = VAR_10->qh_next;
 VAR_8->hw->hw_next = VAR_10->hw->hw_next;
 FUNC_10 ();

 VAR_10->qh_next.qh = VAR_8;
 VAR_10->hw->hw_next = VAR_9;

 FUNC_6(VAR_8);
 VAR_8->xacterrs = 0;
 VAR_8->qh_state = VAR_4;

}
