
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
 TYPE_1__* VAR_1 ;
 unsigned int FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*) ;

int FUNC_3(struct comedi_device *VAR_2, struct comedi_subdevice *VAR_3,
 struct comedi_insn *VAR_4, unsigned int *VAR_5)
{
 unsigned int VAR_6;
 unsigned int VAR_7;
 VAR_7 = FUNC_0(VAR_4->chanspec);
 VAR_6 = VAR_5[0];
 *VAR_5 = FUNC_1(VAR_1->iobase + VAR_0);
 if (VAR_6 == 0) {
  *VAR_5 = (*VAR_5 >> VAR_7) & 0x1;
 }
 else {
  if (VAR_6 == 1) {

   *VAR_5 = *VAR_5 & 0x3;
  }
  else {
   FUNC_2("\nSpecified channel not supported \n");
  }
 }
 return VAR_4->n;
}
