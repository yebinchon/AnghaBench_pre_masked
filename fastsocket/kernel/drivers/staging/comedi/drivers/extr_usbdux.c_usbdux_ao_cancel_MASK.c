
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbduxsub {int sem; int ao_cmd_running; int probed; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_device {struct usbduxsub* private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct usbduxsub*,int ) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_2,
       struct comedi_subdevice *VAR_3)
{
 struct usbduxsub *VAR_4 = VAR_2->private;
 int VAR_5 = 0;

 if (!VAR_4)
  return -VAR_0;


 FUNC_0(&VAR_4->sem);
 if (!(VAR_4->probed)) {
  FUNC_1(&VAR_4->sem);
  return -VAR_1;
 }

 VAR_5 = FUNC_2(VAR_4, VAR_4->ao_cmd_running);
 FUNC_1(&VAR_4->sem);
 return VAR_5;
}
