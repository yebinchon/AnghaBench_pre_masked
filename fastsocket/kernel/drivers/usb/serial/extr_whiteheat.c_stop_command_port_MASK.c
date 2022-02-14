
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct whiteheat_command_private {int mutex; int port_running; } ;
struct usb_serial_port {int read_urb; } ;
struct usb_serial {struct usb_serial_port** port; } ;


 size_t VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct whiteheat_command_private* FUNC_2 (struct usb_serial_port*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct usb_serial *VAR_1)
{
 struct usb_serial_port *VAR_2;
 struct whiteheat_command_private *VAR_3;

 VAR_2 = VAR_1->port[VAR_0];
 VAR_3 = FUNC_2(VAR_2);
 FUNC_0(&VAR_3->mutex);
 VAR_3->port_running--;
 if (!VAR_3->port_running)
  FUNC_3(VAR_2->read_urb);
 FUNC_1(&VAR_3->mutex);
}
