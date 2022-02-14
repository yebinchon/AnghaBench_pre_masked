
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_serial_port {TYPE_1__* serial; scalar_t__ number; } ;
struct usb_device {int dummy; } ;
typedef int __u16 ;
struct TYPE_2__ {int num_ports; scalar_t__ minor; struct usb_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct usb_device*,int ,int ,int ,int,int,int*,int ,int ) ;
 int FUNC_2 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_3(struct usb_serial_port *VAR_4, __u16 VAR_5,
    __u16 *VAR_6)
{
 struct usb_device *VAR_7 = VAR_4->serial->dev;
 int VAR_8 = 0;
 __u16 VAR_9;




 if (VAR_4->serial->num_ports == 4) {
  VAR_9 =
      (((__u16) VAR_4->number - (__u16) (VAR_4->serial->minor)) +
       1) << 8;
  FUNC_0("mos7840_get_uart_reg application number is %x", VAR_9);
 } else {
  if (((__u16) VAR_4->number - (__u16) (VAR_4->serial->minor)) == 0) {
   VAR_9 = (((__u16) VAR_4->number -
         (__u16) (VAR_4->serial->minor)) + 1) << 8;
   FUNC_0("mos7840_get_uart_reg application number is %x",
       VAR_9);
  } else {
   VAR_9 = (((__u16) VAR_4->number -
         (__u16) (VAR_4->serial->minor)) + 2) << 8;
   FUNC_0("mos7840_get_uart_reg application number is %x",
       VAR_9);
  }
 }
 VAR_8 = FUNC_1(VAR_7, FUNC_2(VAR_7, 0), VAR_0,
         VAR_1, VAR_9, VAR_5, VAR_6, VAR_3,
         VAR_2);
 *VAR_6 = (*VAR_6) & 0x00ff;
 return VAR_8;
}
