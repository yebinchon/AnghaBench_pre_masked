
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {scalar_t__ iobase; } ;
struct TYPE_2__ {int ao_nbits; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int,scalar_t__) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_1, struct comedi_subdevice *VAR_2,
     struct comedi_insn *VAR_3, unsigned int *VAR_4)
{
 int VAR_5;
 int VAR_6, VAR_7;
 int VAR_8;

 VAR_8 = FUNC_0(VAR_3->chanspec);

 for (VAR_5 = 0; VAR_5 < VAR_3->n; VAR_5++) {
  if (VAR_0->ao_nbits == 12) {
   VAR_6 = (VAR_4[VAR_5] << 4) & 0xff;
   VAR_7 = (VAR_4[VAR_5] >> 4) & 0xff;
  } else {
   VAR_6 = VAR_4[VAR_5] & 0xff;
   VAR_7 = (VAR_4[VAR_5] >> 8) & 0xff;
  }
  FUNC_3(VAR_6, VAR_1->iobase + FUNC_1(VAR_8));
  FUNC_3(VAR_7, VAR_1->iobase + FUNC_2(VAR_8));
 }

 return VAR_5;
}
