
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_hcd {int rh_timer; struct urb* status_urb; scalar_t__ uses_new_polling; int flags; TYPE_1__* driver; } ;
struct urb {int actual_length; int transfer_buffer; } ;
struct TYPE_2__ {int (* hub_status_data ) (struct usb_hcd*,char*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct usb_hcd*) ;
 int FUNC_1 (struct usb_hcd*) ;
 int VAR_1 ;
 int FUNC_2 (int ,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (struct usb_hcd*,char*) ;
 scalar_t__ FUNC_11 (int) ;
 int FUNC_12 (struct usb_hcd*,struct urb*,int ) ;
 int FUNC_13 (struct usb_hcd*,struct urb*) ;

void FUNC_14(struct usb_hcd *VAR_4)
{
 struct urb *VAR_5;
 int VAR_6;
 unsigned long VAR_7;
 char VAR_8[6];

 if (FUNC_11(!FUNC_1(VAR_4)))
  return;
 if (!VAR_4->uses_new_polling && !VAR_4->status_urb)
  return;

 VAR_6 = VAR_4->driver->hub_status_data(VAR_4, VAR_8);
 if (VAR_6 > 0) {


  FUNC_7(&VAR_2, VAR_7);
  VAR_5 = VAR_4->status_urb;
  if (VAR_5) {
   FUNC_2(VAR_0, &VAR_4->flags);
   VAR_4->status_urb = ((void*)0);
   VAR_5->actual_length = VAR_6;
   FUNC_3(VAR_5->transfer_buffer, VAR_8, VAR_6);

   FUNC_13(VAR_4, VAR_5);
   FUNC_8(&VAR_2);
   FUNC_12(VAR_4, VAR_5, 0);
   FUNC_6(&VAR_2);
  } else {
   VAR_6 = 0;
   FUNC_5(VAR_0, &VAR_4->flags);
  }
  FUNC_9(&VAR_2, VAR_7);
 }





 if (VAR_4->uses_new_polling ? FUNC_0(VAR_4) :
   (VAR_6 == 0 && VAR_4->status_urb != ((void*)0)))
  FUNC_4 (&VAR_4->rh_timer, (VAR_3/(VAR_1/4) + 1) * (VAR_1/4));
}
