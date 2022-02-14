
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usbduxsub {int ao_cmd_running; int sem; TYPE_2__* interface; int probed; } ;
struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {int minor; struct usbduxsub* private; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int * inttrig; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int ,...) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct usbduxsub*) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_3,
        struct comedi_subdevice *VAR_4, unsigned int VAR_5)
{
 int VAR_6;
 struct usbduxsub *VAR_7 = VAR_3->private;

 if (!VAR_7)
  return -VAR_0;

 FUNC_1(&VAR_7->sem);
 if (!(VAR_7->probed)) {
  FUNC_2(&VAR_7->sem);
  return -VAR_2;
 }
 if (VAR_5 != 0) {
  FUNC_0(&VAR_7->interface->dev,
   "comedi%d: usbdux_ao_inttrig: invalid trignum\n",
   VAR_3->minor);
  return -VAR_1;
 }
 if (!(VAR_7->ao_cmd_running)) {
  VAR_7->ao_cmd_running = 1;
  VAR_6 = FUNC_3(VAR_7);
  if (VAR_6 < 0) {
   FUNC_0(&VAR_7->interface->dev,
    "comedi%d: usbdux_ao_inttrig: submitURB: "
    "err=%d\n", VAR_3->minor, VAR_6);
   VAR_7->ao_cmd_running = 0;
   FUNC_2(&VAR_7->sem);
   return VAR_6;
  }
  VAR_4->async->inttrig = ((void*)0);
 } else {
  FUNC_0(&VAR_7->interface->dev,
   "comedi%d: ao_inttrig but acqu is already running.\n",
   VAR_3->minor);
 }
 FUNC_2(&VAR_7->sem);
 return 1;
}
