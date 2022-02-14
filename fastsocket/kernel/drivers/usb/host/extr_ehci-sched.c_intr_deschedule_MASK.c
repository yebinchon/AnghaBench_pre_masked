
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ehci_qh_hw {int hw_info2; int hw_next; } ;
struct ehci_qh {scalar_t__ qh_state; int needs_rescan; int qtd_list; struct ehci_qh_hw* hw; } ;
struct ehci_hcd {int dummy; } ;
struct TYPE_2__ {int state; } ;


 int FUNC_0 (struct ehci_hcd*) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (struct ehci_hcd*,int ) ;
 int FUNC_3 (struct ehci_hcd*,char*,struct ehci_qh*,int) ;
 TYPE_1__* FUNC_4 (struct ehci_hcd*) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (struct ehci_hcd*,struct ehci_qh*) ;
 int FUNC_7 (struct ehci_hcd*,struct ehci_qh*) ;
 int FUNC_8 (struct ehci_hcd*,struct ehci_qh*) ;
 int FUNC_9 (unsigned int) ;
 int FUNC_10 () ;

__attribute__((used)) static void FUNC_11 (struct ehci_hcd *VAR_4, struct ehci_qh *VAR_5)
{
 unsigned VAR_6;
 struct ehci_qh_hw *VAR_7 = VAR_5->hw;
 int VAR_8;





 if (VAR_5->qh_state != VAR_3) {
  if (VAR_5->qh_state == VAR_1)
   VAR_5->needs_rescan = 1;
  return;
 }

 FUNC_8 (VAR_4, VAR_5);






 if (FUNC_5 (&VAR_5->qtd_list)
   || (FUNC_2(VAR_4, VAR_0)
     & VAR_7->hw_info2) != 0)
  VAR_6 = 2;
 else
  VAR_6 = 55;

 FUNC_9 (VAR_6);
 VAR_5->qh_state = VAR_2;
 VAR_7->hw_next = FUNC_0(VAR_4);
 FUNC_10 ();

 FUNC_6(VAR_4, VAR_5);


 if (!FUNC_5(&VAR_5->qtd_list) &&
   FUNC_1(FUNC_4(VAR_4)->state)) {
  VAR_8 = FUNC_7(VAR_4, VAR_5);







  if (VAR_8 != 0)
   FUNC_3(VAR_4, "can't reschedule qh %p, err %d\n",
     VAR_5, VAR_8);
 }
}
