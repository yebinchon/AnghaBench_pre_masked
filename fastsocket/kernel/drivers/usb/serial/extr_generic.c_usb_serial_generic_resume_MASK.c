
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int count; } ;
struct usb_serial_port {scalar_t__ write_urb; scalar_t__ read_urb; TYPE_1__ port; } ;
struct usb_serial {int num_ports; struct usb_serial_port** port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct usb_serial_port*) ;
 int FUNC_1 (scalar_t__,int ) ;

int FUNC_2(struct usb_serial *VAR_2)
{
 struct usb_serial_port *VAR_3;
 int VAR_4, VAR_5 = 0, VAR_6;

 for (VAR_4 = 0; VAR_4 < VAR_2->num_ports; VAR_4++) {
  VAR_3 = VAR_2->port[VAR_4];
  if (!VAR_3->port.count)
   continue;

  if (VAR_3->read_urb) {
   VAR_6 = FUNC_1(VAR_3->read_urb, VAR_1);
   if (VAR_6 < 0)
    VAR_5++;
  }

  if (VAR_3->write_urb) {
   VAR_6 = FUNC_0(VAR_3);
   if (VAR_6 < 0)
    VAR_5++;
  }
 }

 return VAR_5 ? -VAR_0 : 0;
}
