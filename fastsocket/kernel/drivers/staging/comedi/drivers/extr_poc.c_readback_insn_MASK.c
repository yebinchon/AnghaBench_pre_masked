
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int chanspec; } ;
struct comedi_device {scalar_t__ private; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct comedi_device *VAR_0, struct comedi_subdevice *VAR_1,
    struct comedi_insn *VAR_2, unsigned int *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_2->chanspec);
 VAR_3[0] = ((unsigned int *)VAR_0->private)[VAR_4];

 return 1;
}
