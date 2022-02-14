
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_serial_port {TYPE_2__* interrupt_in_urb; TYPE_1__* serial; int number; } ;
struct tty_struct {struct usb_serial_port* driver_data; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int ) ;

__attribute__((used)) static void FUNC_2(struct tty_struct *VAR_1)
{
 struct usb_serial_port *VAR_2 = VAR_1->driver_data;

 FUNC_0("keyspan_pda_rx_unthrottle port %d", VAR_2->number);
 VAR_2->interrupt_in_urb->dev = VAR_2->serial->dev;
 if (FUNC_1(VAR_2->interrupt_in_urb, VAR_0))
  FUNC_0(" usb_submit_urb(read urb) failed");
 return;
}
