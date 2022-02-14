
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {struct usb_serial* serial; } ;
struct usb_serial {int disc_mutex; int disconnected; scalar_t__ dev; } ;
struct sierra_port_private {int rts_state; int dtr_state; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct usb_serial_port*) ;
 struct sierra_port_private* FUNC_3 (struct usb_serial_port*) ;

__attribute__((used)) static void FUNC_4(struct usb_serial_port *VAR_0, int VAR_1)
{
 struct usb_serial *VAR_2 = VAR_0->serial;
 struct sierra_port_private *VAR_3;

 VAR_3 = FUNC_3(VAR_0);
 VAR_3->rts_state = VAR_1;
 VAR_3->dtr_state = VAR_1;

 if (VAR_2->dev) {
  FUNC_0(&VAR_2->disc_mutex);
  if (!VAR_2->disconnected)
   FUNC_2(VAR_0);
  FUNC_1(&VAR_2->disc_mutex);
 }
}
