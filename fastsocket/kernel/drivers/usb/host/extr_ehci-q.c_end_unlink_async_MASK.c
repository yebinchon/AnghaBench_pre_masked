
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * qh; } ;
struct ehci_qh {int qtd_list; struct ehci_qh* reclaim; TYPE_1__ qh_next; int qh_state; } ;
struct ehci_hcd {struct ehci_qh* reclaim; TYPE_3__* async; } ;
struct TYPE_8__ {int state; } ;
struct TYPE_6__ {int * qh; } ;
struct TYPE_7__ {TYPE_2__ qh_next; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__* FUNC_1 (struct ehci_hcd*) ;
 int FUNC_2 (struct ehci_hcd*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ehci_hcd*,struct ehci_qh*) ;
 int FUNC_5 (struct ehci_hcd*,struct ehci_qh*) ;
 int FUNC_6 (struct ehci_qh*) ;
 int FUNC_7 (struct ehci_hcd*,struct ehci_qh*) ;
 int FUNC_8 (struct ehci_hcd*,int ) ;

__attribute__((used)) static void FUNC_9 (struct ehci_hcd *VAR_2)
{
 struct ehci_qh *VAR_3 = VAR_2->reclaim;
 struct ehci_qh *VAR_4;

 FUNC_2(VAR_2);


 VAR_3->qh_state = VAR_0;
 VAR_3->qh_next.qh = ((void*)0);
 FUNC_6 (VAR_3);


 VAR_4 = VAR_3->reclaim;
 VAR_2->reclaim = VAR_4;
 VAR_3->reclaim = ((void*)0);

 FUNC_4 (VAR_2, VAR_3);

 if (!FUNC_3 (&VAR_3->qtd_list)
   && FUNC_0 (FUNC_1(VAR_2)->state))
  FUNC_5 (VAR_2, VAR_3);
 else {



  if (FUNC_0 (FUNC_1(VAR_2)->state)
    && VAR_2->async->qh_next.qh == ((void*)0))
   FUNC_8 (VAR_2, VAR_1);
 }
 FUNC_6(VAR_3);

 if (VAR_4) {
  VAR_2->reclaim = ((void*)0);
  FUNC_7 (VAR_2, VAR_4);
 }
}
