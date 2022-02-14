
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_hcd {int state; } ;
struct urb {scalar_t__ hcpriv; int pipe; } ;
struct oxu_hcd {int lock; } ;
struct ehci_qh {int qtd_list; int qh_state; } ;


 int FUNC_0 (int ) ;





 int FUNC_1 (char*,struct ehci_qh*,int) ;
 struct oxu_hcd* FUNC_2 (struct usb_hcd*) ;
 int FUNC_3 (struct oxu_hcd*,struct ehci_qh*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct oxu_hcd*,char*,struct ehci_qh*,int ) ;
 int FUNC_6 (struct oxu_hcd*,struct ehci_qh*) ;
 int FUNC_7 (struct oxu_hcd*,struct ehci_qh*) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (struct oxu_hcd*,struct ehci_qh*) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static int FUNC_12(struct usb_hcd *VAR_0, struct urb *VAR_1, int VAR_2)
{
 struct oxu_hcd *VAR_3 = FUNC_2(VAR_0);
 struct ehci_qh *VAR_4;
 unsigned long VAR_5;

 FUNC_8(&VAR_3->lock, VAR_5);
 switch (FUNC_11(VAR_1->pipe)) {
 case 131:
 case 132:
 default:
  VAR_4 = (struct ehci_qh *) VAR_1->hcpriv;
  if (!VAR_4)
   break;
  FUNC_10(VAR_3, VAR_4);
  break;

 case 130:
  VAR_4 = (struct ehci_qh *) VAR_1->hcpriv;
  if (!VAR_4)
   break;
  switch (VAR_4->qh_state) {
  case 128:
   FUNC_3(VAR_3, VAR_4);

  case 129:
   FUNC_6(VAR_3, VAR_4);
   break;
  default:
   FUNC_5(VAR_3, "bogus qh %p state %d\n",
     VAR_4, VAR_4->qh_state);
   goto done;
  }


  if (!FUNC_4(&VAR_4->qtd_list)
    && FUNC_0(VAR_0->state)) {
   int VAR_6;

   VAR_6 = FUNC_7(VAR_3, VAR_4);
   FUNC_9(&VAR_3->lock, VAR_5);

   if (VAR_6 != 0) {



    FUNC_1("can't reschedule qh %p, err %d",
     VAR_4, VAR_6);
   }
   return VAR_6;
  }
  break;
 }
done:
 FUNC_9(&VAR_3->lock, VAR_5);
 return 0;
}
