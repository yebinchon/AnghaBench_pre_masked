
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
 int FUNC_1 (char*) ;

int FUNC_2(struct comedi_device *VAR_1,
 struct comedi_subdevice *VAR_2, struct comedi_insn *VAR_3, unsigned int *VAR_4)
{
 int VAR_5 = VAR_3->n;
 unsigned int VAR_6 = 0;





 if (VAR_3->n >= 1) {
  VAR_6 = FUNC_0(VAR_0->iobase + 32);
  *VAR_4 = VAR_6 & 0xf;
 } else {




  FUNC_1("Buffer size error\n");
  VAR_5 = -101;
 }

 return VAR_5;
}
