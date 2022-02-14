
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int controller; } ;
struct usb_hcd {int rh_timer; int uses_new_polling; struct urb* status_urb; TYPE_2__ self; } ;
struct urb {unsigned int transfer_buffer_length; struct usb_hcd* hcpriv; TYPE_1__* dev; } ;
struct TYPE_3__ {int maxchild; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct usb_hcd*) ;
 int VAR_1 ;
 int FUNC_1 (int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct usb_hcd*,struct urb*) ;

__attribute__((used)) static int FUNC_6 (struct usb_hcd *VAR_4, struct urb *VAR_5)
{
 int VAR_6;
 unsigned long VAR_7;
 unsigned VAR_8 = 1 + (VAR_5->dev->maxchild / 8);

 FUNC_3 (&VAR_2, VAR_7);
 if (VAR_4->status_urb || VAR_5->transfer_buffer_length < VAR_8) {
  FUNC_1 (VAR_4->self.controller, "not queuing rh status urb\n");
  VAR_6 = -VAR_0;
  goto done;
 }

 VAR_6 = FUNC_5(VAR_4, VAR_5);
 if (VAR_6)
  goto done;

 VAR_4->status_urb = VAR_5;
 VAR_5->hcpriv = VAR_4;
 if (!VAR_4->uses_new_polling)
  FUNC_2(&VAR_4->rh_timer, (VAR_3/(VAR_1/4) + 1) * (VAR_1/4));


 else if (FUNC_0(VAR_4))
  FUNC_2(&VAR_4->rh_timer, VAR_3);
 VAR_6 = 0;
 done:
 FUNC_4 (&VAR_2, VAR_7);
 return VAR_6;
}
