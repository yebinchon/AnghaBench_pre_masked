
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_gadget {int dummy; } ;
struct TYPE_2__ {int state; struct usb_gadget* gadget; } ;
struct twl4030_usb {TYPE_1__ otg; } ;
struct otg_transceiver {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct twl4030_usb* FUNC_0 (struct otg_transceiver*) ;

__attribute__((used)) static int FUNC_1(struct otg_transceiver *VAR_2,
  struct usb_gadget *VAR_3)
{
 struct twl4030_usb *VAR_4;

 if (!VAR_2)
  return -VAR_0;

 VAR_4 = FUNC_0(VAR_2);
 VAR_4->otg.gadget = VAR_3;
 if (!VAR_3)
  VAR_4->otg.state = VAR_1;

 return 0;
}
