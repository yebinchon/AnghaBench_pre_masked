
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_wwan_port_private {int * out_urbs; int * in_urbs; } ;
struct usb_serial_port {int dummy; } ;
struct usb_serial {int num_ports; struct usb_serial_port** port; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct usb_wwan_port_private* FUNC_0 (struct usb_serial_port*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct usb_serial *VAR_2)
{
 int VAR_3, VAR_4;
 struct usb_serial_port *VAR_5;
 struct usb_wwan_port_private *VAR_6;


 for (VAR_3 = 0; VAR_3 < VAR_2->num_ports; ++VAR_3) {
  VAR_5 = VAR_2->port[VAR_3];
  VAR_6 = FUNC_0(VAR_5);
  for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
   FUNC_1(VAR_6->in_urbs[VAR_4]);
  for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
   FUNC_1(VAR_6->out_urbs[VAR_4]);
 }
}
