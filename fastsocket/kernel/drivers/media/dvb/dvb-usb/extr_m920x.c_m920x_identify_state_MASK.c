
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_host_interface {int dummy; } ;
struct usb_device {int dummy; } ;
struct dvb_usb_device_properties {int dummy; } ;
struct dvb_usb_device_description {int dummy; } ;


 struct usb_host_interface* FUNC_0 (int ,int) ;
 int FUNC_1 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_2(struct usb_device *VAR_0,
    struct dvb_usb_device_properties *VAR_1,
    struct dvb_usb_device_description **VAR_2,
    int *VAR_3)
{
 struct usb_host_interface *VAR_4;

 VAR_4 = FUNC_0(FUNC_1(VAR_0, 0), 1);
 *VAR_3 = (VAR_4 == ((void*)0)) ? 1 : 0;

 return 0;
}
