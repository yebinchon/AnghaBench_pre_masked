
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbduxsub {unsigned int* outBuffer; int sem; int probed; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {struct usbduxsub* private; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_2,
          struct comedi_subdevice *VAR_3,
          struct comedi_insn *VAR_4, unsigned int *VAR_5)
{
 int VAR_6;
 int VAR_7 = FUNC_0(VAR_4->chanspec);
 struct usbduxsub *VAR_8 = VAR_2->private;

 if (!VAR_8)
  return -VAR_0;

 FUNC_1(&VAR_8->sem);
 if (!(VAR_8->probed)) {
  FUNC_2(&VAR_8->sem);
  return -VAR_1;
 }
 for (VAR_6 = 0; VAR_6 < VAR_4->n; VAR_6++)
  VAR_5[VAR_6] = VAR_8->outBuffer[VAR_7];

 FUNC_2(&VAR_8->sem);
 return VAR_6;
}
