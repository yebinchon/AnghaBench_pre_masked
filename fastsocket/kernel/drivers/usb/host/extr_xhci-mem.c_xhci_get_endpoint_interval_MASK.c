
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_host_endpoint {int desc; } ;
struct usb_device {int speed; } ;


 int FUNC_0 () ;
 unsigned int FUNC_1 (unsigned int) ;




 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 unsigned int FUNC_6 (struct usb_device*,struct usb_host_endpoint*) ;
 unsigned int FUNC_7 (struct usb_device*,struct usb_host_endpoint*) ;
 unsigned int FUNC_8 (struct usb_device*,struct usb_host_endpoint*) ;

__attribute__((used)) static unsigned int FUNC_9(struct usb_device *VAR_0,
  struct usb_host_endpoint *VAR_1)
{
 unsigned int VAR_2 = 0;

 switch (VAR_0->speed) {
 case 130:

  if (FUNC_3(&VAR_1->desc) ||
      FUNC_2(&VAR_1->desc)) {
   VAR_2 = FUNC_8(VAR_0, VAR_1);
   break;
  }


 case 128:
  if (FUNC_4(&VAR_1->desc) ||
      FUNC_5(&VAR_1->desc)) {
   VAR_2 = FUNC_6(VAR_0, VAR_1);
  }
  break;

 case 131:
  if (FUNC_5(&VAR_1->desc)) {
   VAR_2 = FUNC_6(VAR_0, VAR_1);
   break;
  }






 case 129:
  if (FUNC_4(&VAR_1->desc) ||
      FUNC_5(&VAR_1->desc)) {

   VAR_2 = FUNC_7(VAR_0, VAR_1);
  }
  break;

 default:
  FUNC_0();
 }
 return FUNC_1(VAR_2);
}
