
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {scalar_t__ iobase; } ;
struct TYPE_2__ {int* ao_readback; scalar_t__ dac0_coding; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_6,
    struct comedi_subdevice *VAR_7,
    struct comedi_insn *VAR_8, unsigned int *VAR_9)
{
 int VAR_10 = FUNC_0(VAR_8->chanspec);
 int VAR_11;
 int VAR_12;

 for (VAR_12 = 0; VAR_12 < VAR_8->n; VAR_12++) {
  VAR_5->ao_readback[VAR_10] = VAR_11 = VAR_9[VAR_12];
  if (VAR_5->dac0_coding == VAR_4) {
   VAR_11 ^= 0x800;
  }
  FUNC_1(VAR_11 & 0xff,
       VAR_6->iobase + (VAR_10 ? VAR_3 : VAR_1));
  FUNC_1(VAR_11 >> 8,
       VAR_6->iobase + (VAR_10 ? VAR_2 : VAR_0));
 }
 return VAR_12;
}
