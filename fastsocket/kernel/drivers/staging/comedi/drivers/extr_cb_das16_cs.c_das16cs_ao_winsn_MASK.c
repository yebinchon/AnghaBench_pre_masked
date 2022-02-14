
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {scalar_t__ iobase; } ;
struct TYPE_2__ {unsigned int* ao_readback; unsigned short status1; } ;


 int FUNC_0 (int ) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (unsigned short,scalar_t__) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_1,
       struct comedi_subdevice *VAR_2,
       struct comedi_insn *VAR_3, unsigned int *VAR_4)
{
 int VAR_5;
 int VAR_6 = FUNC_0(VAR_3->chanspec);
 unsigned short VAR_7;
 unsigned short VAR_8;
 int VAR_9;

 for (VAR_5 = 0; VAR_5 < VAR_3->n; VAR_5++) {
  VAR_0->ao_readback[VAR_6] = VAR_4[VAR_5];
  VAR_8 = VAR_4[VAR_5];

  FUNC_1(VAR_0->status1, VAR_1->iobase + 4);
  FUNC_2(1);

  VAR_7 = VAR_0->status1 & ~0xf;
  if (VAR_6)
   VAR_7 |= 0x0001;
  else
   VAR_7 |= 0x0008;


  FUNC_1(VAR_7, VAR_1->iobase + 4);
  FUNC_2(1);

  for (VAR_9 = 15; VAR_9 >= 0; VAR_9--) {
   int VAR_10 = (VAR_8 >> VAR_9) & 0x1;
   VAR_10 <<= 1;

   FUNC_1(VAR_7 | VAR_10 | 0x0000, VAR_1->iobase + 4);
   FUNC_2(1);

   FUNC_1(VAR_7 | VAR_10 | 0x0004, VAR_1->iobase + 4);
   FUNC_2(1);
  }


  FUNC_1(VAR_7 | 0x9, VAR_1->iobase + 4);
 }

 return VAR_5;
}
