
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ rc_mode; } ;
struct dvb_usb_device {int state; int rc_dev; int rc_input_dev; TYPE_1__ props; int rc_query_work; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

int FUNC_4(struct dvb_usb_device *VAR_2)
{
 if (VAR_2->state & VAR_1) {
  FUNC_0(&VAR_2->rc_query_work);
  FUNC_1();
  if (VAR_2->props.rc_mode == VAR_0)
   FUNC_2(VAR_2->rc_input_dev);
  else
   FUNC_3(VAR_2->rc_dev);
 }
 VAR_2->state &= ~VAR_1;
 return 0;
}
