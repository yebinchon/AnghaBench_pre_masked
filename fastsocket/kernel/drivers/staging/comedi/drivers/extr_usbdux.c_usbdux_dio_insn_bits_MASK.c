
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbduxsub {unsigned int* dux_commands; int sem; int * insnBuffer; int probed; } ;
struct comedi_subdevice {unsigned int state; unsigned int io_bits; } ;
struct comedi_insn {int n; } ;
struct comedi_device {struct usbduxsub* private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (struct usbduxsub*,int ) ;
 int FUNC_3 (struct usbduxsub*,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct comedi_device *VAR_4,
    struct comedi_subdevice *VAR_5,
    struct comedi_insn *VAR_6, unsigned int *VAR_7)
{

 struct usbduxsub *VAR_8 = VAR_4->private;
 int VAR_9;

 if (!VAR_8)
  return -VAR_0;

 if (VAR_6->n != 2)
  return -VAR_1;

 FUNC_0(&VAR_8->sem);

 if (!(VAR_8->probed)) {
  FUNC_4(&VAR_8->sem);
  return -VAR_2;
 }



 VAR_5->state &= ~VAR_7[0];
 VAR_5->state |= VAR_7[0] & VAR_7[1];
 VAR_8->dux_commands[1] = VAR_5->io_bits;
 VAR_8->dux_commands[2] = VAR_5->state;



 VAR_9 = FUNC_3(VAR_8, VAR_3);
 if (VAR_9 < 0) {
  FUNC_4(&VAR_8->sem);
  return VAR_9;
 }
 VAR_9 = FUNC_2(VAR_8, VAR_3);
 if (VAR_9 < 0) {
  FUNC_4(&VAR_8->sem);
  return VAR_9;
 }

 VAR_7[1] = FUNC_1(VAR_8->insnBuffer[1]);
 FUNC_4(&VAR_8->sem);
 return 2;
}
