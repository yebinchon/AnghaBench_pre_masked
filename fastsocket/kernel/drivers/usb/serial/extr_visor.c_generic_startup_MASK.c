
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct visor_private {int lock; } ;
struct usb_serial_port {int dummy; } ;
struct usb_serial {int num_ports; struct usb_serial_port** port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct visor_private*) ;
 struct visor_private* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;
 struct visor_private* FUNC_3 (struct usb_serial_port*) ;
 int FUNC_4 (struct usb_serial_port*,struct visor_private*) ;

__attribute__((used)) static int FUNC_5(struct usb_serial *VAR_2)
{
 struct usb_serial_port **VAR_3 = VAR_2->port;
 struct visor_private *VAR_4;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_2->num_ports; ++VAR_5) {
  VAR_4 = FUNC_1(sizeof(*VAR_4), VAR_1);
  if (!VAR_4) {
   while (VAR_5-- != 0) {
    VAR_4 = FUNC_3(VAR_3[VAR_5]);
    FUNC_4(VAR_3[VAR_5], ((void*)0));
    FUNC_0(VAR_4);
   }
   return -VAR_0;
  }
  FUNC_2(&VAR_4->lock);
  FUNC_4(VAR_3[VAR_5], VAR_4);
 }
 return 0;
}
