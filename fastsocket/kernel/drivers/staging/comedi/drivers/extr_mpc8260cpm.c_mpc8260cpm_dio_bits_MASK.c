
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {scalar_t__ private; } ;
struct comedi_insn {int dummy; } ;
struct comedi_device {int dummy; } ;


 unsigned long* FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(struct comedi_device *VAR_0,
          struct comedi_subdevice *VAR_1,
          struct comedi_insn *VAR_2, unsigned int *VAR_3)
{
 int VAR_4;
 unsigned long *VAR_5;

 VAR_5 = FUNC_0((int)VAR_1->private);

 return 2;
}
