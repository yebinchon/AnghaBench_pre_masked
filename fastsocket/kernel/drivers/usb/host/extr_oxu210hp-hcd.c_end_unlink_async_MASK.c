
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct oxu_hcd {struct ehci_qh* reclaim; TYPE_3__* async; scalar_t__ reclaim_ready; } ;
struct TYPE_5__ {int * qh; } ;
struct ehci_qh {int qtd_list; struct ehci_qh* reclaim; TYPE_1__ qh_next; int qh_state; } ;
struct TYPE_8__ {int state; } ;
struct TYPE_6__ {int * qh; } ;
struct TYPE_7__ {TYPE_2__ qh_next; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 TYPE_4__* FUNC_2 (struct oxu_hcd*) ;
 int FUNC_3 (struct oxu_hcd*,struct ehci_qh*) ;
 int FUNC_4 (struct oxu_hcd*,struct ehci_qh*) ;
 int FUNC_5 (struct ehci_qh*) ;
 int FUNC_6 (struct oxu_hcd*,struct ehci_qh*) ;
 int FUNC_7 (struct oxu_hcd*,int ) ;
 int FUNC_8 (struct oxu_hcd*,int ) ;

__attribute__((used)) static void FUNC_9(struct oxu_hcd *VAR_3)
{
 struct ehci_qh *VAR_4 = VAR_3->reclaim;
 struct ehci_qh *VAR_5;

 FUNC_8(VAR_3, VAR_2);

 VAR_4->qh_state = VAR_0;
 VAR_4->qh_next.qh = ((void*)0);
 FUNC_5(VAR_4);


 VAR_5 = VAR_4->reclaim;
 VAR_3->reclaim = VAR_5;
 VAR_3->reclaim_ready = 0;
 VAR_4->reclaim = ((void*)0);

 FUNC_3(VAR_3, VAR_4);

 if (!FUNC_1(&VAR_4->qtd_list)
   && FUNC_0(FUNC_2(VAR_3)->state))
  FUNC_4(VAR_3, VAR_4);
 else {
  FUNC_5(VAR_4);




  if (FUNC_0(FUNC_2(VAR_3)->state)
    && VAR_3->async->qh_next.qh == ((void*)0))
   FUNC_7(VAR_3, VAR_1);
 }

 if (VAR_5) {
  VAR_3->reclaim = ((void*)0);
  FUNC_6(VAR_3, VAR_5);
 }
}
