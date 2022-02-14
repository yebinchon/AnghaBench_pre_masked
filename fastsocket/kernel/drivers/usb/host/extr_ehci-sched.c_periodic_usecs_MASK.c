
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


union ehci_shadow {TYPE_6__* sitd; TYPE_4__* itd; TYPE_2__* fstn; TYPE_1__* qh; scalar_t__ ptr; } ;
struct ehci_qh_hw {int hw_info2; int hw_next; } ;
struct ehci_hcd {union ehci_shadow* pshadow; int * periodic; } ;
typedef int __hc32 ;
struct TYPE_12__ {int hw_uframe; int hw_fullspeed_ep; union ehci_shadow sitd_next; int hw_next; TYPE_5__* stream; } ;
struct TYPE_11__ {unsigned int usecs; unsigned int c_usecs; } ;
struct TYPE_10__ {union ehci_shadow itd_next; int hw_next; TYPE_3__* stream; int * hw_transaction; } ;
struct TYPE_9__ {unsigned int usecs; } ;
struct TYPE_8__ {union ehci_shadow fstn_next; int hw_next; int hw_prev; } ;
struct TYPE_7__ {unsigned int usecs; unsigned int c_usecs; union ehci_shadow qh_next; struct ehci_qh_hw* hw; } ;


 int FUNC_0 (struct ehci_hcd*) ;
 unsigned int FUNC_1 (int) ;
 int FUNC_2 (struct ehci_hcd*,int ) ;



 int FUNC_3 (struct ehci_hcd*,int) ;
 int FUNC_4 (struct ehci_hcd*,char*) ;
 int FUNC_5 (struct ehci_hcd*,char*,unsigned int,unsigned int) ;
 int FUNC_6 (struct ehci_hcd*,int ) ;

__attribute__((used)) static unsigned short
FUNC_7 (struct ehci_hcd *VAR_0, unsigned VAR_1, unsigned VAR_2)
{
 __hc32 *VAR_3 = &VAR_0->periodic [VAR_1];
 union ehci_shadow *VAR_4 = &VAR_0->pshadow [VAR_1];
 unsigned VAR_5 = 0;
 struct ehci_qh_hw *VAR_6;

 while (VAR_4->ptr) {
  switch (FUNC_6(VAR_0, FUNC_2(VAR_0, *VAR_3))) {
  case 129:
   VAR_6 = VAR_4->qh->hw;

   if (VAR_6->hw_info2 & FUNC_3(VAR_0, 1 << VAR_2))
    VAR_5 += VAR_4->qh->usecs;

   if (VAR_6->hw_info2 & FUNC_3(VAR_0,
     1 << (8 + VAR_2)))
    VAR_5 += VAR_4->qh->c_usecs;
   VAR_3 = &VAR_6->hw_next;
   VAR_4 = &VAR_4->qh->qh_next;
   break;

  default:



   if (VAR_4->fstn->hw_prev != FUNC_0(VAR_0)) {
    FUNC_4 (VAR_0, "ignoring FSTN cost ...\n");
   }
   VAR_3 = &VAR_4->fstn->hw_next;
   VAR_4 = &VAR_4->fstn->fstn_next;
   break;
  case 130:
   if (VAR_4->itd->hw_transaction[VAR_2])
    VAR_5 += VAR_4->itd->stream->usecs;
   VAR_3 = &VAR_4->itd->hw_next;
   VAR_4 = &VAR_4->itd->itd_next;
   break;
  case 128:

   if (VAR_4->sitd->hw_uframe & FUNC_3(VAR_0,
     1 << VAR_2)) {
    if (VAR_4->sitd->hw_fullspeed_ep &
      FUNC_3(VAR_0, 1<<31))
     VAR_5 += VAR_4->sitd->stream->usecs;
    else
     VAR_5 += FUNC_1 (188);
   }


   if (VAR_4->sitd->hw_uframe &
     FUNC_3(VAR_0, 1 << (8 + VAR_2))) {

    VAR_5 += VAR_4->sitd->stream->c_usecs;
   }

   VAR_3 = &VAR_4->sitd->hw_next;
   VAR_4 = &VAR_4->sitd->sitd_next;
   break;
  }
 }





 return VAR_5;
}
