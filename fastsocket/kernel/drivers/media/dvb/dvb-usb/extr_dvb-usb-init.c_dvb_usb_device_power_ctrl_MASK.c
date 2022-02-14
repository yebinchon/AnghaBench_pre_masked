
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* power_ctrl ) (struct dvb_usb_device*,int) ;} ;
struct dvb_usb_device {int powered; TYPE_1__ props; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct dvb_usb_device*,int) ;

int FUNC_2(struct dvb_usb_device *VAR_0, int VAR_1)
{
 if (VAR_1)
  VAR_0->powered++;
 else
  VAR_0->powered--;

 if (VAR_0->powered == 0 || (VAR_1 && VAR_0->powered == 1)) {
  FUNC_0("power control: %d\n", VAR_1);
  if (VAR_0->props.power_ctrl)
   return VAR_0->props.power_ctrl(VAR_0, VAR_1);
 }
 return 0;
}
