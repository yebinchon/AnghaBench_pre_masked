
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_serial_port {TYPE_1__* serial; } ;
struct mct_u232_private {int control_state; int lock; } ;
struct TYPE_2__ {int disc_mutex; int disconnected; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,unsigned int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct mct_u232_private* FUNC_5 (struct usb_serial_port*) ;

__attribute__((used)) static void FUNC_6(struct usb_serial_port *VAR_2, int VAR_3)
{
 unsigned int VAR_4;
 struct mct_u232_private *VAR_5 = FUNC_5(VAR_2);

 FUNC_1(&VAR_2->serial->disc_mutex);
 if (!VAR_2->serial->disconnected) {

  FUNC_3(&VAR_5->lock);
  if (VAR_3)
   VAR_5->control_state |= VAR_0 | VAR_1;
  else
   VAR_5->control_state &= ~(VAR_0 | VAR_1);
  VAR_4 = VAR_5->control_state;
  FUNC_4(&VAR_5->lock);
  FUNC_0(VAR_2->serial, VAR_4);
 }
 FUNC_2(&VAR_2->serial->disc_mutex);
}
