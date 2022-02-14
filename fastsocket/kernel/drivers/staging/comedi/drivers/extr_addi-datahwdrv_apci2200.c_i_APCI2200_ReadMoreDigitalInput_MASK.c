
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ iobase; } ;


 scalar_t__ VAR_0 ;
 unsigned int FUNC_0 (int ) ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*) ;

int FUNC_3(struct comedi_device *VAR_3, struct comedi_subdevice *VAR_4,
 struct comedi_insn *VAR_5, unsigned int *VAR_6)
{

 unsigned int VAR_7 = VAR_6[0];
 unsigned int VAR_8 = 0;
 unsigned int VAR_9;

 VAR_9 = FUNC_0(VAR_5->chanspec);

 *VAR_6 = (unsigned int) FUNC_1(VAR_2->iobase + VAR_0);
 switch (VAR_9) {
 case 2:
  VAR_8 = 3;
  *VAR_6 = (*VAR_6 >> (2 * VAR_7)) & VAR_8;
  break;
 case 4:
  VAR_8 = 15;
  *VAR_6 = (*VAR_6 >> (4 * VAR_7)) & VAR_8;
  break;
 case 7:
  break;

 default:
  FUNC_2("\nWrong parameters\n");
  return -VAR_1;
  break;
 }

 return VAR_5->n;
}
