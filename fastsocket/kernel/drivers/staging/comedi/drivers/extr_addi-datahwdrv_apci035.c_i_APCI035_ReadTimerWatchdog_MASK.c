
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int* unused; int n; } ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ b_TimerSelectMode; scalar_t__ iobase; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (scalar_t__) ;

int FUNC_1(struct comedi_device *VAR_3, struct comedi_subdevice *VAR_4,
 struct comedi_insn *VAR_5, unsigned int *VAR_6)
{
 unsigned int VAR_7 = 0;
 VAR_2 = VAR_5->unused[0];





 VAR_7 = FUNC_0(VAR_1->iobase + ((VAR_2 - 1) * 32) + 16);





 VAR_6[0] = ((VAR_7 >> 1) & 1);



 VAR_6[1] = ((VAR_7 >> 2) & 1);



 VAR_6[2] = ((VAR_7 >> 3) & 1);



 VAR_6[3] = ((VAR_7 >> 0) & 1);
 if (VAR_1->b_TimerSelectMode == VAR_0) {
  VAR_6[4] = FUNC_0(VAR_1->iobase + ((VAR_2 - 1) * 32) + 0);

 }

 return VAR_5->n;
}
