
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_serial_port {TYPE_1__* read_urb; TYPE_1__* interrupt_in_urb; int write_wait; } ;
struct usb_serial {struct usb_serial_port** port; } ;
struct mct_u232_private {int lock; } ;
struct TYPE_2__ {struct usb_serial_port* context; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct mct_u232_private* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct usb_serial_port*,struct mct_u232_private*) ;

__attribute__((used)) static int FUNC_5(struct usb_serial *VAR_2)
{
 struct mct_u232_private *VAR_3;
 struct usb_serial_port *VAR_4, *VAR_5;

 VAR_3 = FUNC_1(sizeof(struct mct_u232_private), VAR_1);
 if (!VAR_3)
  return -VAR_0;
 FUNC_2(&VAR_3->lock);
 FUNC_4(VAR_2->port[0], VAR_3);

 FUNC_0(&VAR_2->port[0]->write_wait);


 VAR_4 = VAR_2->port[0];
 VAR_5 = VAR_2->port[1];

 FUNC_3(VAR_4->read_urb);
 VAR_4->read_urb = VAR_5->interrupt_in_urb;
 VAR_5->interrupt_in_urb = ((void*)0);
 VAR_4->read_urb->context = VAR_4;

 return 0;
}
