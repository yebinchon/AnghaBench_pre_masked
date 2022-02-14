
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct urb {TYPE_2__* ep; } ;
struct list_head {int dummy; } ;
struct ehci_qh {scalar_t__ qh_state; } ;
struct ehci_hcd {int lock; } ;
typedef int gfp_t ;
struct TYPE_10__ {int bandwidth_int_reqs; } ;
struct TYPE_11__ {TYPE_3__ self; } ;
struct TYPE_8__ {unsigned int bEndpointAddress; } ;
struct TYPE_9__ {int hcpriv; TYPE_1__ desc; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (struct list_head*) ;
 scalar_t__ VAR_2 ;
 TYPE_4__* FUNC_3 (struct ehci_hcd*) ;
 struct ehci_qh* FUNC_4 (struct ehci_hcd*,struct urb*,struct list_head*,unsigned int,int *) ;
 int FUNC_5 (struct ehci_hcd*,struct ehci_qh*) ;
 int FUNC_6 (struct ehci_hcd*,struct urb*,struct list_head*) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (TYPE_4__*,struct urb*) ;
 int FUNC_11 (TYPE_4__*,struct urb*) ;

__attribute__((used)) static int FUNC_12 (
 struct ehci_hcd *VAR_3,
 struct urb *VAR_4,
 struct list_head *VAR_5,
 gfp_t VAR_6
) {
 unsigned VAR_7;
 unsigned long VAR_8;
 struct ehci_qh *VAR_9;
 int VAR_10;
 struct list_head VAR_11;


 VAR_7 = VAR_4->ep->desc.bEndpointAddress;

 FUNC_7 (&VAR_3->lock, VAR_8);

 if (FUNC_9(!FUNC_1(FUNC_3(VAR_3)))) {
  VAR_10 = -VAR_1;
  goto done_not_linked;
 }
 VAR_10 = FUNC_10(FUNC_3(VAR_3), VAR_4);
 if (FUNC_9(VAR_10))
  goto done_not_linked;


 FUNC_2 (&VAR_11);
 VAR_9 = FUNC_4(VAR_3, VAR_4, &VAR_11, VAR_7, &VAR_4->ep->hcpriv);
 if (VAR_9 == ((void*)0)) {
  VAR_10 = -VAR_0;
  goto done;
 }
 if (VAR_9->qh_state == VAR_2) {
  if ((VAR_10 = FUNC_5 (VAR_3, VAR_9)) != 0)
   goto done;
 }


 VAR_9 = FUNC_4(VAR_3, VAR_4, VAR_5, VAR_7, &VAR_4->ep->hcpriv);
 FUNC_0 (VAR_9 == ((void*)0));


 FUNC_3(VAR_3)->self.bandwidth_int_reqs++;

done:
 if (FUNC_9(VAR_10))
  FUNC_11(FUNC_3(VAR_3), VAR_4);
done_not_linked:
 FUNC_8 (&VAR_3->lock, VAR_8);
 if (VAR_10)
  FUNC_6 (VAR_3, VAR_4, VAR_5);

 return VAR_10;
}
