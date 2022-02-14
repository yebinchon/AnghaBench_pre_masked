
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_host_endpoint {struct ehci_qh* hcpriv; int desc; } ;
struct usb_hcd {int dummy; } ;
struct ehci_qh {scalar_t__ qh_state; int qtd_list; int dev; } ;
struct ehci_hcd {int lock; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*) ;
 struct ehci_hcd* FUNC_1 (struct usb_hcd*) ;
 int FUNC_2 (struct ehci_hcd*,struct ehci_qh*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (struct ehci_hcd*,struct ehci_qh*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,int,int,int ) ;

__attribute__((used)) static void
FUNC_11(struct usb_hcd *VAR_4, struct usb_host_endpoint *VAR_5)
{
 struct ehci_hcd *VAR_6 = FUNC_1(VAR_4);
 struct ehci_qh *VAR_7;
 int VAR_8 = FUNC_9(&VAR_5->desc);
 int VAR_9 = FUNC_8(&VAR_5->desc);
 int VAR_10 = FUNC_7(&VAR_5->desc);
 unsigned long VAR_11;

 if (VAR_8 != VAR_2 && VAR_8 != VAR_3)
  return;

 FUNC_4(&VAR_6->lock, VAR_11);
 VAR_7 = VAR_5->hcpriv;






 if (VAR_7) {
  FUNC_10(VAR_7->dev, VAR_9, VAR_10, 0);
  if (!FUNC_3(&VAR_7->qtd_list)) {
   FUNC_0(1, "clear_halt for a busy endpoint\n");
  } else if (VAR_7->qh_state == VAR_1 ||
    VAR_7->qh_state == VAR_0) {





   if (VAR_8 == VAR_2)
    FUNC_6(VAR_6, VAR_7);
   else
    FUNC_2(VAR_6, VAR_7);
  }
 }
 FUNC_5(&VAR_6->lock, VAR_11);
}
