
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {scalar_t__ iobase; } ;
struct TYPE_2__ {unsigned int* ao_readback; scalar_t__* bipolar; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_3, struct comedi_subdevice *VAR_4,
     struct comedi_insn *VAR_5, unsigned int *VAR_6)
{
 int VAR_7, VAR_8;
 int VAR_9;
 int VAR_10 = FUNC_0(VAR_5->chanspec);

 for (VAR_9 = 0; VAR_9 < VAR_5->n; VAR_9++) {
  VAR_8 = VAR_6[VAR_9] & 0xff;
  VAR_7 = (VAR_6[VAR_9] >> 8) & 0xf;
  if (VAR_2->bipolar[VAR_10])
   VAR_7 ^= 0x8;





  FUNC_1(VAR_7, VAR_3->iobase + VAR_0 + 2 * VAR_10);
  FUNC_1(VAR_8, VAR_3->iobase + VAR_1 + 2 * VAR_10);
  VAR_2->ao_readback[VAR_10] = VAR_6[VAR_9];
 }

 return VAR_9;
}
