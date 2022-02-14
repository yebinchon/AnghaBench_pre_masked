
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_hcd {struct urb* status_urb; int rh_timer; int uses_new_polling; } ;
struct urb {TYPE_1__* ep; } ;
struct TYPE_2__ {int desc; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned long) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (struct usb_hcd*,struct urb*,int) ;
 int FUNC_7 (struct usb_hcd*,struct urb*,int) ;
 int FUNC_8 (struct usb_hcd*,struct urb*) ;

__attribute__((used)) static int FUNC_9(struct usb_hcd *VAR_1, struct urb *VAR_2, int VAR_3)
{
 unsigned long VAR_4;
 int VAR_5;

 FUNC_2(&VAR_0, VAR_4);
 VAR_5 = FUNC_6(VAR_1, VAR_2, VAR_3);
 if (VAR_5)
  goto done;

 if (FUNC_5(&VAR_2->ep->desc) == 0) {
  ;

 } else {
  if (!VAR_1->uses_new_polling)
   FUNC_0 (&VAR_1->rh_timer);
  if (VAR_2 == VAR_1->status_urb) {
   VAR_1->status_urb = ((void*)0);
   FUNC_8(VAR_1, VAR_2);

   FUNC_3(&VAR_0);
   FUNC_7(VAR_1, VAR_2, VAR_3);
   FUNC_1(&VAR_0);
  }
 }
 done:
 FUNC_4(&VAR_0, VAR_4);
 return VAR_5;
}
