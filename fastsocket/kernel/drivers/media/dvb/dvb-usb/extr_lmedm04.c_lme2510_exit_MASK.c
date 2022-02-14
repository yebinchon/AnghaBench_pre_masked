
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct dvb_usb_device {int dummy; } ;


 int FUNC_0 (struct usb_interface*) ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (struct dvb_usb_device*) ;
 struct dvb_usb_device* FUNC_3 (struct usb_interface*) ;

void FUNC_4(struct usb_interface *VAR_0)
{
 struct dvb_usb_device *VAR_1 = FUNC_3(VAR_0);
 void *VAR_2;

 if (VAR_1 != ((void*)0)) {
  VAR_2 = FUNC_2(VAR_1);
  FUNC_0(VAR_0);
  FUNC_1(VAR_2);
 }
}
