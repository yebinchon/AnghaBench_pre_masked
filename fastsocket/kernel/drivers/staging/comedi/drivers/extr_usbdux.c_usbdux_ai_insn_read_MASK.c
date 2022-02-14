
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usbduxsub {int sem; int * insnBuffer; int * dux_commands; TYPE_1__* interface; scalar_t__ ai_cmd_running; int probed; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; int subdev; } ;
struct comedi_device {int minor; struct usbduxsub* private; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int *,char*,int ,int,int ) ;
 int FUNC_4 (int *,char*,int ) ;
 int FUNC_5 (int *) ;
 unsigned int FUNC_6 (int ) ;
 int FUNC_7 (struct usbduxsub*,int ) ;
 int FUNC_8 (struct usbduxsub*,int ) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct comedi_device *VAR_2,
          struct comedi_subdevice *VAR_3,
          struct comedi_insn *VAR_4, unsigned int *VAR_5)
{
 int VAR_6;
 unsigned int VAR_7 = 0;
 int VAR_8, VAR_9;
 int VAR_10;
 struct usbduxsub *VAR_11 = VAR_2->private;

 if (!VAR_11)
  return 0;

 FUNC_3(&VAR_11->interface->dev,
  "comedi%d: ai_insn_read, insn->n=%d, insn->subdev=%d\n",
  VAR_2->minor, VAR_4->n, VAR_4->subdev);

 FUNC_5(&VAR_11->sem);
 if (!(VAR_11->probed)) {
  FUNC_9(&VAR_11->sem);
  return -VAR_0;
 }
 if (VAR_11->ai_cmd_running) {
  FUNC_4(&VAR_11->interface->dev,
   "comedi%d: ai_insn_read not possible. "
   "Async Command is running.\n", VAR_2->minor);
  FUNC_9(&VAR_11->sem);
  return 0;
 }


 VAR_8 = FUNC_0(VAR_4->chanspec);
 VAR_9 = FUNC_1(VAR_4->chanspec);

 VAR_11->dux_commands[1] = FUNC_2(VAR_8, VAR_9);


 VAR_10 = FUNC_8(VAR_11, VAR_1);
 if (VAR_10 < 0) {
  FUNC_9(&VAR_11->sem);
  return VAR_10;
 }

 for (VAR_6 = 0; VAR_6 < VAR_4->n; VAR_6++) {
  VAR_10 = FUNC_7(VAR_11, VAR_1);
  if (VAR_10 < 0) {
   FUNC_9(&VAR_11->sem);
   return 0;
  }
  VAR_7 = FUNC_6(VAR_11->insnBuffer[1]);
  if (FUNC_1(VAR_4->chanspec) <= 1)
   VAR_7 = VAR_7 ^ 0x800;

  VAR_5[VAR_6] = VAR_7;
 }
 FUNC_9(&VAR_11->sem);
 return VAR_6;
}
