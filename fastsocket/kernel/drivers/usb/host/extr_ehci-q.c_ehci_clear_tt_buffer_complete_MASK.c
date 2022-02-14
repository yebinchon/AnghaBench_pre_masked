
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_host_endpoint {struct ehci_qh* hcpriv; } ;
struct usb_hcd {int state; } ;
struct ehci_qh {scalar_t__ qh_state; int qtd_list; scalar_t__ clearing_tt; } ;
struct ehci_hcd {int lock; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 struct ehci_hcd* FUNC_1 (struct usb_hcd*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ehci_hcd*,struct ehci_qh*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct usb_hcd *VAR_1,
  struct usb_host_endpoint *VAR_2)
{
 struct ehci_hcd *VAR_3 = FUNC_1(VAR_1);
 struct ehci_qh *VAR_4 = VAR_2->hcpriv;
 unsigned long VAR_5;

 FUNC_4(&VAR_3->lock, VAR_5);
 VAR_4->clearing_tt = 0;
 if (VAR_4->qh_state == VAR_0 && !FUNC_2(&VAR_4->qtd_list)
   && FUNC_0(VAR_1->state))
  FUNC_3(VAR_3, VAR_4);
 FUNC_5(&VAR_3->lock, VAR_5);
}
