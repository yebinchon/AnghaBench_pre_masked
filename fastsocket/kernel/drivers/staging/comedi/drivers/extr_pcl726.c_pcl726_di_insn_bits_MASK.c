
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; } ;
struct comedi_device {scalar_t__ iobase; } ;
struct TYPE_2__ {scalar_t__ di_hi; scalar_t__ di_lo; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int FUNC_1(struct comedi_device *VAR_2,
          struct comedi_subdevice *VAR_3,
          struct comedi_insn *VAR_4, unsigned int *VAR_5)
{
 if (VAR_4->n != 2)
  return -VAR_0;

 VAR_5[1] = FUNC_0(VAR_2->iobase + VAR_1->di_lo) |
     (FUNC_0(VAR_2->iobase + VAR_1->di_hi) << 8);

 return 2;
}
