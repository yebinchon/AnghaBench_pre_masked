
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

int FUNC_2(struct comedi_device *VAR_3,
        struct comedi_subdevice *VAR_4,
        struct comedi_insn *VAR_5,
        unsigned int *VAR_6)
{
 unsigned int VAR_7, VAR_8;

 VAR_7 = FUNC_0(VAR_5->chanspec);


 if (VAR_7 >= 0 && VAR_7 <= 3) {
  VAR_8 = (unsigned int) FUNC_1(VAR_2->iobase + VAR_0);





  *VAR_6 = (VAR_8 >> (VAR_7 + 8)) & 1;

 } else {

  return -VAR_1;
 }
 return VAR_5->n;

}
