
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_wwan_port_private {int rts_state; int dtr_state; } ;
struct usb_wwan_intf_private {int (* send_setup ) (struct usb_serial_port*) ;} ;
struct usb_serial_port {TYPE_1__* serial; } ;
struct tty_struct {struct usb_serial_port* driver_data; } ;
struct file {int dummy; } ;
struct TYPE_2__ {struct usb_wwan_intf_private* private; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (struct usb_serial_port*) ;
 struct usb_wwan_port_private* FUNC_1 (struct usb_serial_port*) ;

int FUNC_2(struct tty_struct *VAR_3, struct file *VAR_4,
        unsigned int VAR_5, unsigned int VAR_6)
{
 struct usb_serial_port *VAR_7 = VAR_3->driver_data;
 struct usb_wwan_port_private *VAR_8;
 struct usb_wwan_intf_private *VAR_9;

 VAR_8 = FUNC_1(VAR_7);
 VAR_9 = VAR_7->serial->private;

 if (!VAR_9->send_setup)
  return -VAR_0;


 if (VAR_5 & VAR_2)
  VAR_8->rts_state = 1;
 if (VAR_5 & VAR_1)
  VAR_8->dtr_state = 1;

 if (VAR_6 & VAR_2)
  VAR_8->rts_state = 0;
 if (VAR_6 & VAR_1)
  VAR_8->dtr_state = 0;
 return VAR_9->send_setup(VAR_7);
}
