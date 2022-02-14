
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
 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct usb_device*,int ,int ,int ,int,int,int *,int ,int ) ;
 int FUNC_2 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_3(struct usb_serial_port *VAR_3, __u16 VAR_4,
    __u16 VAR_5)
{

 struct usb_device *VAR_6 = VAR_3->serial->dev;
 VAR_5 = VAR_5 & 0x00ff;


 if (VAR_3->serial->num_ports == 4) {
  VAR_5 |= (((__u16) VAR_3->number -
    (__u16) (VAR_3->serial->minor)) + 1) << 8;
  FUNC_0("mos7840_set_uart_reg application number is %x", VAR_5);
 } else {
  if (((__u16) VAR_3->number - (__u16) (VAR_3->serial->minor)) == 0) {
   VAR_5 |= (((__u16) VAR_3->number -
         (__u16) (VAR_3->serial->minor)) + 1) << 8;
   FUNC_0("mos7840_set_uart_reg application number is %x",
       VAR_5);
  } else {
   VAR_5 |=
       (((__u16) VAR_3->number -
         (__u16) (VAR_3->serial->minor)) + 2) << 8;
   FUNC_0("mos7840_set_uart_reg application number is %x",
       VAR_5);
  }
 }
 return FUNC_1(VAR_6, FUNC_2(VAR_6, 0), VAR_0,
          VAR_1, VAR_5, VAR_4, ((void*)0), 0,
          VAR_2);

}
