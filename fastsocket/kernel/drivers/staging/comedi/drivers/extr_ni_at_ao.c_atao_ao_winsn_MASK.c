
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {scalar_t__ iobase; } ;
struct TYPE_2__ {short cfg1; unsigned int* ao_readback; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 short VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_2 (short,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_3, struct comedi_subdevice *VAR_4,
    struct comedi_insn *VAR_5, unsigned int *VAR_6)
{
 int VAR_7;
 int VAR_8 = FUNC_1(VAR_5->chanspec);
 short VAR_9;

 for (VAR_7 = 0; VAR_7 < VAR_5->n; VAR_7++) {
  VAR_9 = VAR_6[VAR_7] - 0x800;
  if (VAR_8 == 0) {
   VAR_2->cfg1 |= VAR_1;
   FUNC_2(VAR_2->cfg1, VAR_3->iobase + VAR_0);
  }
  FUNC_2(VAR_9, VAR_3->iobase + FUNC_0(VAR_8));
  if (VAR_8 == 0) {
   VAR_2->cfg1 &= ~VAR_1;
   FUNC_2(VAR_2->cfg1, VAR_3->iobase + VAR_0);
  }
  VAR_2->ao_readback[VAR_8] = VAR_6[VAR_7];
 }

 return VAR_7;
}
