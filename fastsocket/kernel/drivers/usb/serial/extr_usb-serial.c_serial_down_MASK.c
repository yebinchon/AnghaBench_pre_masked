
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int flags; } ;
struct usb_serial_port {int mutex; TYPE_2__ port; scalar_t__ console; TYPE_1__* serial; } ;
struct usb_serial_driver {int (* close ) (struct usb_serial_port*) ;} ;
struct TYPE_3__ {struct usb_serial_driver* type; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct usb_serial_port*) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct usb_serial_port *VAR_1)
{
 struct usb_serial_driver *VAR_2 = VAR_1->serial->type;





 if (VAR_1->console)
  return;




 if (!FUNC_3(VAR_0, &VAR_1->port.flags))
  return;

 FUNC_0(&VAR_1->mutex);
 if (VAR_2->close)
  VAR_2->close(VAR_1);
 FUNC_1(&VAR_1->mutex);
}
