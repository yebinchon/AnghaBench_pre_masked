
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; } ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ iobase; } ;


 TYPE_1__* VAR_0 ;
 unsigned int FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned int,scalar_t__) ;

int FUNC_2(struct comedi_device *VAR_1, struct comedi_subdevice *VAR_2,
 struct comedi_insn *VAR_3, unsigned int *VAR_4)
{
 unsigned int VAR_5 = 0;



 VAR_5 = 0x80000;



 FUNC_1(VAR_5, VAR_0->iobase + 128 + 8);




 VAR_4[0] = FUNC_0(VAR_0->iobase + 128 + 28);
 return VAR_3->n;
}
