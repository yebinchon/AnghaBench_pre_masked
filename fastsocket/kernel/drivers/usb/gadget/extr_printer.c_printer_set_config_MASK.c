
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_gadget {int speed; scalar_t__ is_otg; } ;
struct printer_dev {unsigned int config; struct usb_gadget* gadget; } ;
struct TYPE_2__ {int bMaxPower; } ;



 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct printer_dev*,char*,...) ;


 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct usb_gadget*) ;
 int FUNC_2 (struct usb_gadget*,unsigned int) ;

__attribute__((used)) static int
FUNC_3(struct printer_dev *VAR_4, unsigned VAR_5)
{
 int VAR_6 = 0;
 struct usb_gadget *VAR_7 = VAR_4->gadget;

 if (FUNC_1(VAR_7) && VAR_4->config) {

  FUNC_0(VAR_4, "can't change configurations\n");
  return -VAR_1;
 }

 switch (VAR_5) {
 case 130:
  VAR_6 = 0;
  break;
 default:
  VAR_6 = -VAR_0;

 case 0:
  break;
 }

 if (VAR_6) {
  FUNC_2(VAR_4->gadget,
    VAR_4->gadget->is_otg ? 8 : 100);
 } else {
  char *VAR_8;
  unsigned VAR_9;

  VAR_9 = 2 * VAR_2.bMaxPower;
  FUNC_2(VAR_4->gadget, VAR_9);

  switch (VAR_7->speed) {
  case 129: VAR_8 = "full"; break;



  default: VAR_8 = "?"; break;
  }

  VAR_4->config = VAR_5;
  FUNC_0(VAR_4, "%s speed config #%d: %d mA, %s\n",
    VAR_8, VAR_5, VAR_9, VAR_3);
 }
 return VAR_6;
}
