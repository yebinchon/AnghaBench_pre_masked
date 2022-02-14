
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_kbd {scalar_t__* leds; scalar_t__ newleds; TYPE_2__* led; int usbdev; } ;
struct urb {scalar_t__ status; TYPE_1__* dev; struct usb_kbd* context; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,scalar_t__) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int ) ;

__attribute__((used)) static void FUNC_3(struct urb *VAR_1)
{
 struct usb_kbd *VAR_2 = VAR_1->context;

 if (VAR_1->status)
  FUNC_0(&VAR_1->dev->dev, "led urb status %d received\n",
    VAR_1->status);

 if (*(VAR_2->leds) == VAR_2->newleds)
  return;

 *(VAR_2->leds) = VAR_2->newleds;
 VAR_2->led->dev = VAR_2->usbdev;
 if (FUNC_2(VAR_2->led, VAR_0))
  FUNC_1("usb_submit_urb(leds) failed");
}
