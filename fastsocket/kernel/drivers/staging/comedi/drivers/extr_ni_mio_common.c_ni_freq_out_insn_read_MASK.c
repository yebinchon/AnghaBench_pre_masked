
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int dummy; } ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {unsigned int clock_and_fout; } ;


 unsigned int VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int FUNC_0(struct comedi_device *VAR_2,
     struct comedi_subdevice *VAR_3,
     struct comedi_insn *VAR_4, unsigned int *VAR_5)
{
 VAR_5[0] = VAR_1->clock_and_fout & VAR_0;
 return 1;
}
