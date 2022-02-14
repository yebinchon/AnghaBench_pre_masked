
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ehci_qh {scalar_t__ qh_state; int needs_rescan; struct ehci_qh* reclaim; } ;
struct ehci_hcd {struct ehci_qh* reclaim; } ;
struct TYPE_2__ {int state; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* FUNC_1 (struct ehci_hcd*) ;
 int FUNC_2 (struct ehci_hcd*) ;
 int FUNC_3 (struct ehci_hcd*,struct ehci_qh*) ;

__attribute__((used)) static void FUNC_4 (struct ehci_hcd *VAR_3, struct ehci_qh *VAR_4)
{

 if (!FUNC_0(FUNC_1(VAR_3)->state) && VAR_3->reclaim)
  FUNC_2(VAR_3);





 if (VAR_4->qh_state != VAR_1) {
  if (VAR_4->qh_state == VAR_0)
   VAR_4->needs_rescan = 1;
  return;
 }


 if (VAR_3->reclaim) {
  struct ehci_qh *VAR_5;

  for (VAR_5 = VAR_3->reclaim;
    VAR_5->reclaim;
    VAR_5 = VAR_5->reclaim)
   continue;
  VAR_4->qh_state = VAR_2;
  VAR_5->reclaim = VAR_4;


 } else
  FUNC_3 (VAR_3, VAR_4);
}
