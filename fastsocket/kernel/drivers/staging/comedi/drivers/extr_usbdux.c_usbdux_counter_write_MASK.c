
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbduxsub {int sem; int * dux_commands; int probed; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int chanspec; } ;
struct comedi_device {struct usbduxsub* private; } ;
typedef int int16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct usbduxsub*,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_3,
    struct comedi_subdevice *VAR_4,
    struct comedi_insn *VAR_5, unsigned int *VAR_6)
{
 struct usbduxsub *VAR_7 = VAR_3->private;
 int VAR_8;

 if (!VAR_7)
  return -VAR_0;

 FUNC_1(&VAR_7->sem);

 if (!(VAR_7->probed)) {
  FUNC_3(&VAR_7->sem);
  return -VAR_1;
 }

 VAR_7->dux_commands[1] = VAR_5->chanspec;
 *((int16_t *) (VAR_7->dux_commands + 2)) = FUNC_0(*VAR_6);

 VAR_8 = FUNC_2(VAR_7, VAR_2);
 if (VAR_8 < 0) {
  FUNC_3(&VAR_7->sem);
  return VAR_8;
 }

 FUNC_3(&VAR_7->sem);

 return 1;
}
