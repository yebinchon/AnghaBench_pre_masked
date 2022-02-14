
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_gpct {int dummy; } ;
struct comedi_subdevice {struct ni_gpct* private; } ;
struct comedi_insn {int dummy; } ;
struct comedi_device {int dummy; } ;


 int FUNC_0 (struct ni_gpct*,struct comedi_insn*,unsigned int*) ;

__attribute__((used)) static int FUNC_1(struct comedi_device *VAR_0,
         struct comedi_subdevice *VAR_1,
         struct comedi_insn *VAR_2, unsigned int *VAR_3)
{
 struct ni_gpct *VAR_4 = VAR_1->private;
 return FUNC_0(VAR_4, VAR_2, VAR_3);
}
