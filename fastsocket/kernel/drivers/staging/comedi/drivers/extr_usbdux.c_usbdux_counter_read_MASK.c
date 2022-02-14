
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbduxsub {int sem; int * insnBuffer; int probed; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int chanspec; } ;
struct comedi_device {struct usbduxsub* private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (struct usbduxsub*,int ) ;
 int FUNC_3 (struct usbduxsub*,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct comedi_device *VAR_3,
          struct comedi_subdevice *VAR_4,
          struct comedi_insn *VAR_5, unsigned int *VAR_6)
{
 struct usbduxsub *VAR_7 = VAR_3->private;
 int VAR_8 = VAR_5->chanspec;
 int VAR_9;

 if (!VAR_7)
  return -VAR_0;

 FUNC_0(&VAR_7->sem);

 if (!(VAR_7->probed)) {
  FUNC_4(&VAR_7->sem);
  return -VAR_1;
 }

 VAR_9 = FUNC_3(VAR_7, VAR_2);
 if (VAR_9 < 0) {
  FUNC_4(&VAR_7->sem);
  return VAR_9;
 }

 VAR_9 = FUNC_2(VAR_7, VAR_2);
 if (VAR_9 < 0) {
  FUNC_4(&VAR_7->sem);
  return VAR_9;
 }

 VAR_6[0] = FUNC_1(VAR_7->insnBuffer[VAR_8 + 1]);
 FUNC_4(&VAR_7->sem);
 return 1;
}
