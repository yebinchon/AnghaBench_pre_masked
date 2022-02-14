
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_usb_device {int state; int i2c_adap; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

int FUNC_1(struct dvb_usb_device *VAR_1)
{
 if (VAR_1->state & VAR_0)
  FUNC_0(&VAR_1->i2c_adap);
 VAR_1->state &= ~VAR_0;
 return 0;
}
