
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {scalar_t__ iobase; } ;
struct TYPE_2__ {unsigned long* ao_readback; } ;


 unsigned short FUNC_0 (int ) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (unsigned long,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_1,
       struct comedi_subdevice *VAR_2,
       struct comedi_insn *VAR_3, unsigned int *VAR_4)
{
 int VAR_5 = 0, VAR_6;
 unsigned short VAR_7 = FUNC_0(VAR_3->chanspec);
 unsigned long VAR_8 = 1 << (16 - 1);
 unsigned long VAR_9;


 for (VAR_5 = 0; VAR_5 < VAR_3->n; VAR_5++) {
  VAR_9 = VAR_4[VAR_5] ^ VAR_8;

  do {
   VAR_6 = (FUNC_1(VAR_1->iobase) & 1);
  } while (VAR_6);
  FUNC_2(VAR_9, VAR_1->iobase + (0x02 * VAR_7));
  VAR_0->ao_readback[VAR_7] = VAR_9;
 }


 return VAR_5;
}
