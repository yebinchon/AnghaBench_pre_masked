
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usbduxsub {int* dux_commands; unsigned int* outBuffer; int sem; TYPE_1__* interface; scalar_t__ ao_cmd_running; int probed; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {int minor; struct usbduxsub* private; } ;
typedef int int16_t ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (int *,char*,int ,...) ;
 int FUNC_3 (int *,char*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct usbduxsub*,int ) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct comedi_device *VAR_3,
    struct comedi_subdevice *VAR_4,
    struct comedi_insn *VAR_5, unsigned int *VAR_6)
{
 int VAR_7, VAR_8;
 int VAR_9 = FUNC_0(VAR_5->chanspec);
 struct usbduxsub *VAR_10 = VAR_3->private;

 if (!VAR_10)
  return -VAR_0;

 FUNC_2(&VAR_10->interface->dev,
  "comedi%d: ao_insn_write\n", VAR_3->minor);

 FUNC_4(&VAR_10->sem);
 if (!(VAR_10->probed)) {
  FUNC_6(&VAR_10->sem);
  return -VAR_1;
 }
 if (VAR_10->ao_cmd_running) {
  FUNC_3(&VAR_10->interface->dev,
   "comedi%d: ao_insn_write: "
   "ERROR: asynchronous ao_cmd is running\n", VAR_3->minor);
  FUNC_6(&VAR_10->sem);
  return 0;
 }

 for (VAR_7 = 0; VAR_7 < VAR_5->n; VAR_7++) {
  FUNC_2(&VAR_10->interface->dev,
   "comedi%d: ao_insn_write: data[chan=%d,i=%d]=%d\n",
   VAR_3->minor, VAR_9, VAR_7, VAR_6[VAR_7]);


  VAR_10->dux_commands[1] = 1;

  *((int16_t *) (VAR_10->dux_commands + 2)) =
      FUNC_1(VAR_6[VAR_7]);
  VAR_10->outBuffer[VAR_9] = VAR_6[VAR_7];

  VAR_10->dux_commands[4] = (VAR_9 << 6);
  VAR_8 = FUNC_5(VAR_10, VAR_2);
  if (VAR_8 < 0) {
   FUNC_6(&VAR_10->sem);
   return VAR_8;
  }
 }
 FUNC_6(&VAR_10->sem);

 return VAR_7;
}
