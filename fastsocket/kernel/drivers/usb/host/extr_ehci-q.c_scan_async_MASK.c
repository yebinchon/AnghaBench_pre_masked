
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {struct ehci_qh* qh; } ;
struct ehci_qh {scalar_t__ qh_state; scalar_t__ unlink_time; int qtd_list; scalar_t__ needs_rescan; TYPE_3__ qh_next; } ;
struct ehci_hcd {int reclaim; struct ehci_qh* qh_scan_next; TYPE_2__* async; } ;
typedef enum ehci_timer_action { ____Placeholder_ehci_timer_action } ehci_timer_action ;
struct TYPE_8__ {int state; } ;
struct TYPE_5__ {struct ehci_qh* qh; } ;
struct TYPE_6__ {TYPE_1__ qh_next; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_4__* FUNC_1 (struct ehci_hcd*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct ehci_hcd*,struct ehci_qh*) ;
 struct ehci_qh* FUNC_4 (struct ehci_qh*) ;
 int FUNC_5 (struct ehci_qh*) ;
 int FUNC_6 (struct ehci_hcd*,struct ehci_qh*) ;
 scalar_t__ FUNC_7 (scalar_t__,scalar_t__) ;
 int FUNC_8 (struct ehci_hcd*,int) ;
 int FUNC_9 (struct ehci_hcd*,int) ;
 int FUNC_10 (struct ehci_hcd*,struct ehci_qh*) ;

__attribute__((used)) static void FUNC_11 (struct ehci_hcd *VAR_5)
{
 bool VAR_6;
 struct ehci_qh *VAR_7;
 enum ehci_timer_action VAR_8 = VAR_3;

 FUNC_9 (VAR_5, VAR_2);
 VAR_6 = !FUNC_0(FUNC_1(VAR_5)->state);

 VAR_5->qh_scan_next = VAR_5->async->qh_next.qh;
 while (VAR_5->qh_scan_next) {
  VAR_7 = VAR_5->qh_scan_next;
  VAR_5->qh_scan_next = VAR_7->qh_next.qh;
 rescan:

  if (!FUNC_2(&VAR_7->qtd_list)) {
   int VAR_9;
   VAR_7 = FUNC_4(VAR_7);
   VAR_9 = FUNC_3(VAR_5, VAR_7);
   if (VAR_7->needs_rescan)
    FUNC_10(VAR_5, VAR_7);
   VAR_7->unlink_time = VAR_4 + VAR_0;
   FUNC_5(VAR_7);
   if (VAR_9 != 0)
    goto rescan;
  }







  if (FUNC_2(&VAR_7->qtd_list)
    && VAR_7->qh_state == VAR_1) {
   if (!VAR_5->reclaim && (VAR_6 ||
     FUNC_7(VAR_4, VAR_7->unlink_time)))
    FUNC_6(VAR_5, VAR_7);
   else
    VAR_8 = VAR_2;
  }
 }
 if (VAR_8 == VAR_2)
  FUNC_8 (VAR_5, VAR_2);
}
