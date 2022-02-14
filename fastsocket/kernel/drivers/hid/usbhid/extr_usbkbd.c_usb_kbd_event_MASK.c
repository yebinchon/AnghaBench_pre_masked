
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_kbd {int newleds; int* leds; TYPE_1__* led; int usbdev; } ;
struct input_dev {int led; } ;
struct TYPE_2__ {int dev; int status; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*) ;
 struct usb_kbd* FUNC_1 (struct input_dev*) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_4(struct input_dev *VAR_8, unsigned int VAR_9,
    unsigned int VAR_10, int VAR_11)
{
 struct usb_kbd *VAR_12 = FUNC_1(VAR_8);

 if (VAR_9 != VAR_1)
  return -1;

 VAR_12->newleds = (!!FUNC_2(VAR_5, VAR_8->led) << 3) | (!!FUNC_2(VAR_4, VAR_8->led) << 3) |
         (!!FUNC_2(VAR_7, VAR_8->led) << 2) | (!!FUNC_2(VAR_3, VAR_8->led) << 1) |
         (!!FUNC_2(VAR_6, VAR_8->led));

 if (VAR_12->led->status == -VAR_0)
  return 0;

 if (*(VAR_12->leds) == VAR_12->newleds)
  return 0;

 *(VAR_12->leds) = VAR_12->newleds;
 VAR_12->led->dev = VAR_12->usbdev;
 if (FUNC_3(VAR_12->led, VAR_2))
  FUNC_0("usb_submit_urb(leds) failed");

 return 0;
}
