
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbduxsub {int dummy; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {struct usbduxsub* private; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct comedi_device*,struct comedi_subdevice*,int ,unsigned int,int ) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_2,
       struct comedi_subdevice *VAR_3,
       struct comedi_insn *VAR_4, unsigned int *VAR_5)
{
 struct usbduxsub *VAR_6 = VAR_2->private;

 if (!VAR_6)
  return -VAR_0;

 if ((VAR_4->n) != 1) {




  return -VAR_1;
 }






 return FUNC_1(VAR_2, VAR_3, FUNC_0(VAR_4->chanspec), VAR_5[0], 0);
}
