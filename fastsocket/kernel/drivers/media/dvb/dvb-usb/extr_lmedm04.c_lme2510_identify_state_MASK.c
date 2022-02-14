
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {int dummy; } ;
struct dvb_usb_device_properties {int dummy; } ;
struct dvb_usb_device_description {int dummy; } ;


 int FUNC_0 (struct usb_device*) ;

__attribute__((used)) static int FUNC_1(struct usb_device *VAR_0,
  struct dvb_usb_device_properties *VAR_1,
  struct dvb_usb_device_description **VAR_2,
  int *VAR_3)
{
 if (FUNC_0(VAR_0) == 0x44)
  *VAR_3 = 1;
 else
  *VAR_3 = 0;
 return 0;
}
