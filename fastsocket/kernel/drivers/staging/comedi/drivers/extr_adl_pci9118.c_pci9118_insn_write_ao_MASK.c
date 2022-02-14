
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {scalar_t__ iobase; } ;
struct TYPE_2__ {unsigned int* ao_data; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_3,
     struct comedi_subdevice *VAR_4,
     struct comedi_insn *VAR_5, unsigned int *VAR_6)
{
 int VAR_7, VAR_8, VAR_9;

 VAR_9 = FUNC_0(VAR_5->chanspec);
 if (VAR_9) {
  VAR_8 = VAR_1;
 } else {
  VAR_8 = VAR_0;
 }

 for (VAR_7 = 0; VAR_7 < VAR_5->n; VAR_7++) {
  FUNC_1(VAR_6[VAR_7], VAR_3->iobase + VAR_8);
  VAR_2->ao_data[VAR_9] = VAR_6[VAR_7];
 }

 return VAR_7;
}
