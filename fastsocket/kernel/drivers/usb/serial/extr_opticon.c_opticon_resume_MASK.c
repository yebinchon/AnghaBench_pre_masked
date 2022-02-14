
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ count; } ;
struct usb_serial_port {int mutex; TYPE_1__ port; } ;
struct usb_serial {struct usb_serial_port** port; } ;
struct usb_interface {int dummy; } ;
struct opticon_private {int bulk_read_urb; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct usb_serial* FUNC_2 (struct usb_interface*) ;
 struct opticon_private* FUNC_3 (struct usb_serial*) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct usb_interface *VAR_1)
{
 struct usb_serial *VAR_2 = FUNC_2(VAR_1);
 struct opticon_private *VAR_3 = FUNC_3(VAR_2);
 struct usb_serial_port *VAR_4 = VAR_2->port[0];
 int VAR_5;

 FUNC_0(&VAR_4->mutex);
 if (VAR_4->port.count)
  VAR_5 = FUNC_4(VAR_3->bulk_read_urb, VAR_0);
 else
  VAR_5 = 0;
 FUNC_1(&VAR_4->mutex);
 return VAR_5;
}
