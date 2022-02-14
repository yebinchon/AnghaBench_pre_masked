
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usbduxsub {TYPE_1__* interface; int pwm_cmd_running; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_device {int minor; struct usbduxsub* private; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (struct usbduxsub*,int ) ;
 int FUNC_2 (struct usbduxsub*,int ) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_1,
        struct comedi_subdevice *VAR_2)
{
 struct usbduxsub *VAR_3 = VAR_1->private;
 int VAR_4 = 0;


 VAR_4 = FUNC_2(VAR_3, VAR_3->pwm_cmd_running);

 FUNC_0(&VAR_3->interface->dev,
  "comedi %d: sending pwm off command to the usb device.\n",
  VAR_1->minor);
 VAR_4 = FUNC_1(VAR_3, VAR_0);
 if (VAR_4 < 0)
  return VAR_4;

 return VAR_4;
}
