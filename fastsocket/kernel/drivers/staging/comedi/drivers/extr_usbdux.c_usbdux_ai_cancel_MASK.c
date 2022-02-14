
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usbduxsub {int sem; int ai_cmd_running; int probed; TYPE_1__* interface; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_device {struct usbduxsub* private; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct usbduxsub*,int ) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_2,
       struct comedi_subdevice *VAR_3)
{
 struct usbduxsub *VAR_4;
 int VAR_5 = 0;


 VAR_4 = VAR_2->private;
 if (!VAR_4)
  return -VAR_0;

 FUNC_0(&VAR_4->interface->dev, "comedi: usbdux_ai_cancel\n");


 FUNC_1(&VAR_4->sem);
 if (!(VAR_4->probed)) {
  FUNC_2(&VAR_4->sem);
  return -VAR_1;
 }

 VAR_5 = FUNC_3(VAR_4, VAR_4->ai_cmd_running);
 FUNC_2(&VAR_4->sem);
 return VAR_5;
}
