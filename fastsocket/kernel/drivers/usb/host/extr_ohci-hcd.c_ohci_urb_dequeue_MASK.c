
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {TYPE_2__* ed; } ;
typedef TYPE_1__ urb_priv_t ;
struct usb_hcd {int state; } ;
struct urb {TYPE_1__* hcpriv; } ;
struct ohci_hcd {int lock; } ;
struct TYPE_4__ {scalar_t__ state; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct ohci_hcd*,struct urb*,int) ;
 struct ohci_hcd* FUNC_2 (struct usb_hcd*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct ohci_hcd*,TYPE_2__*) ;
 int FUNC_6 (struct urb*,char*,int,int) ;
 int FUNC_7 (struct usb_hcd*,struct urb*,int) ;

__attribute__((used)) static int FUNC_8(struct usb_hcd *VAR_1, struct urb *VAR_2, int VAR_3)
{
 struct ohci_hcd *VAR_4 = FUNC_2 (VAR_1);
 unsigned long VAR_5;
 int VAR_6;





 FUNC_3 (&VAR_4->lock, VAR_5);
 VAR_6 = FUNC_7(VAR_1, VAR_2, VAR_3);
 if (VAR_6) {
  ;
 } else if (FUNC_0(VAR_1->state)) {
  urb_priv_t *VAR_7;





  VAR_7 = VAR_2->hcpriv;
  if (VAR_7) {
   if (VAR_7->ed->state == VAR_0)
    FUNC_5 (VAR_4, VAR_7->ed);
  }
 } else {




  if (VAR_2->hcpriv)
   FUNC_1(VAR_4, VAR_2, VAR_3);
 }
 FUNC_4 (&VAR_4->lock, VAR_5);
 return VAR_6;
}
