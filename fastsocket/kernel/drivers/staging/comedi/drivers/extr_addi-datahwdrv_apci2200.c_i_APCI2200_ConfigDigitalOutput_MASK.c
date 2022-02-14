
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; } ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {unsigned int b_OutputMemoryStatus; } ;


 TYPE_1__* VAR_0 ;

int FUNC_0(struct comedi_device *VAR_1, struct comedi_subdevice *VAR_2,
 struct comedi_insn *VAR_3, unsigned int *VAR_4)
{
 VAR_0->b_OutputMemoryStatus = VAR_4[0];
 return VAR_3->n;
}
