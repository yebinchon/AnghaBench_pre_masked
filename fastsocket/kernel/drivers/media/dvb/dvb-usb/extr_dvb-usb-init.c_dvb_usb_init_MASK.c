
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ size_of_priv; } ;
struct dvb_usb_device {int * priv; TYPE_1__ props; int state; int i2c_mutex; int usb_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dvb_usb_device*,short*) ;
 int FUNC_1 (struct dvb_usb_device*,int) ;
 int FUNC_2 (struct dvb_usb_device*) ;
 int FUNC_3 (struct dvb_usb_device*) ;
 int FUNC_4 (struct dvb_usb_device*) ;
 int FUNC_5 (char*) ;
 int * FUNC_6 (scalar_t__,int ) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct dvb_usb_device *VAR_3, short *VAR_4)
{
 int VAR_5 = 0;

 FUNC_7(&VAR_3->usb_mutex);
 FUNC_7(&VAR_3->i2c_mutex);

 VAR_3->state = VAR_0;

 if (VAR_3->props.size_of_priv > 0) {
  VAR_3->priv = FUNC_6(VAR_3->props.size_of_priv, VAR_2);
  if (VAR_3->priv == ((void*)0)) {
   FUNC_5("no memory for priv in 'struct dvb_usb_device'");
   return -VAR_1;
  }
 }


 FUNC_1(VAR_3, 1);

 if ((VAR_5 = FUNC_3(VAR_3)) ||
  (VAR_5 = FUNC_0(VAR_3, VAR_4))) {
  FUNC_2(VAR_3);
  return VAR_5;
 }

 if ((VAR_5 = FUNC_4(VAR_3)))
  FUNC_5("could not initialize remote control.");

 FUNC_1(VAR_3, 0);

 return 0;
}
