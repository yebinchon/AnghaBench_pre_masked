
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_interface {int dummy; } ;
struct usb_device_id {int dummy; } ;
struct TYPE_2__ {scalar_t__ idProduct; scalar_t__ idVendor; } ;
struct usb_device {TYPE_1__ descriptor; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct usb_interface*,int *,int ,int *,int ) ;
 struct usb_device* FUNC_1 (struct usb_interface*) ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (struct usb_device*,char*) ;

__attribute__((used)) static int FUNC_3(struct usb_interface *VAR_6,
   const struct usb_device_id *VAR_7)
{
 struct usb_device *VAR_8 = FUNC_1(VAR_6);

 if (VAR_8->descriptor.idProduct == VAR_2 &&
  VAR_8->descriptor.idVendor == VAR_3 &&
  FUNC_2(VAR_8, "dvb-usb-opera1-fpga-01.fw") != 0
     ) {
  return -VAR_0;
 }

 if (0 != FUNC_0(VAR_6, &VAR_5,
         VAR_1, ((void*)0), VAR_4))
  return -VAR_0;
 return 0;
}
