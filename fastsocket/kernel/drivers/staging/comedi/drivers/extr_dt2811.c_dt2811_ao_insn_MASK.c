
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {scalar_t__ iobase; } ;
struct TYPE_2__ {unsigned int* ao_readback; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_3, struct comedi_subdevice *VAR_4,
     struct comedi_insn *VAR_5, unsigned int *VAR_6)
{
 int VAR_7;
 int VAR_8;

 VAR_8 = FUNC_0(VAR_5->chanspec);

 for (VAR_7 = 0; VAR_7 < VAR_5->n; VAR_7++) {
  FUNC_1(VAR_6[VAR_7] & 0xff, VAR_3->iobase + VAR_1 + 2 * VAR_8);
  FUNC_1((VAR_6[VAR_7] >> 8) & 0xff,
       VAR_3->iobase + VAR_0 + 2 * VAR_8);
  VAR_2->ao_readback[VAR_8] = VAR_6[VAR_7];
 }

 return VAR_7;
}
