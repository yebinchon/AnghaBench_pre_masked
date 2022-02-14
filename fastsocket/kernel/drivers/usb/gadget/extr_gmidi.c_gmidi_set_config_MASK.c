
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_gadget {int speed; } ;
struct gmidi_device {unsigned int config; int out_ep; int in_ep; struct usb_gadget* gadget; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct gmidi_device*,char*) ;
 int VAR_2 ;

 int FUNC_1 (struct gmidi_device*,char*,char*) ;



 scalar_t__ FUNC_2 (struct usb_gadget*) ;
 int FUNC_3 (struct gmidi_device*) ;
 int FUNC_4 (struct gmidi_device*,int ) ;

__attribute__((used)) static int
FUNC_5(struct gmidi_device *VAR_3, unsigned VAR_4, gfp_t VAR_5)
{
 int VAR_6 = 0;
 struct usb_gadget *VAR_7 = VAR_3->gadget;
 if (FUNC_2(VAR_7) && VAR_3->config) {

  FUNC_0(VAR_3, "can't change configurations\n");
  return -VAR_2;
 }
 FUNC_3(VAR_3);

 switch (VAR_4) {
 case 131:
  VAR_6 = FUNC_4(VAR_3, VAR_5);
  break;
 default:
  VAR_6 = -VAR_0;

 case 0:
  return VAR_6;
 }

 if (!VAR_6 && (!VAR_3->in_ep || !VAR_3->out_ep)) {
  VAR_6 = -VAR_1;
 }
 if (VAR_6) {
  FUNC_3(VAR_3);
 } else {
  char *VAR_8;

  switch (VAR_7->speed) {
  case 128: VAR_8 = "low"; break;
  case 130: VAR_8 = "full"; break;
  case 129: VAR_8 = "high"; break;
  default: VAR_8 = "?"; break;
  }

  VAR_3->config = VAR_4;
  FUNC_1(VAR_3, "%s speed\n", VAR_8);
 }
 return VAR_6;
}
