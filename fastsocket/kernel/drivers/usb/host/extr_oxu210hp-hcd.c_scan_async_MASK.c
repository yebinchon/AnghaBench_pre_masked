
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct oxu_hcd {scalar_t__ stamp; int reclaim; TYPE_2__* async; } ;
struct TYPE_6__ {struct ehci_qh* qh; } ;
struct ehci_qh {scalar_t__ stamp; scalar_t__ qh_state; TYPE_3__ qh_next; int qtd_list; } ;
typedef enum ehci_timer_action { ____Placeholder_ehci_timer_action } ehci_timer_action ;
struct TYPE_4__ {struct ehci_qh* qh; } ;
struct TYPE_5__ {TYPE_1__ qh_next; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct oxu_hcd*,struct ehci_qh*) ;
 struct ehci_qh* FUNC_3 (struct ehci_qh*) ;
 int FUNC_4 (struct ehci_qh*) ;
 int FUNC_5 (struct oxu_hcd*,struct ehci_qh*) ;
 int FUNC_6 (struct oxu_hcd*,int) ;
 int FUNC_7 (struct oxu_hcd*,int) ;

__attribute__((used)) static void FUNC_8(struct oxu_hcd *VAR_3)
{
 struct ehci_qh *VAR_4;
 enum ehci_timer_action VAR_5 = VAR_2;

 if (!++(VAR_3->stamp))
  VAR_3->stamp++;
 FUNC_7(VAR_3, VAR_1);
rescan:
 VAR_4 = VAR_3->async->qh_next.qh;
 if (FUNC_0(VAR_4 != ((void*)0))) {
  do {

   if (!FUNC_1(&VAR_4->qtd_list)
     && VAR_4->stamp != VAR_3->stamp) {
    int VAR_6;






    VAR_4 = FUNC_3(VAR_4);
    VAR_4->stamp = VAR_3->stamp;
    VAR_6 = FUNC_2(VAR_3, VAR_4);
    FUNC_4(VAR_4);
    if (VAR_6 != 0)
     goto rescan;
   }







   if (FUNC_1(&VAR_4->qtd_list)) {
    if (VAR_4->stamp == VAR_3->stamp)
     VAR_5 = VAR_1;
    else if (!VAR_3->reclaim
         && VAR_4->qh_state == VAR_0)
     FUNC_5(VAR_3, VAR_4);
   }

   VAR_4 = VAR_4->qh_next.qh;
  } while (VAR_4);
 }
 if (VAR_5 == VAR_1)
  FUNC_6(VAR_3, VAR_1);
}
