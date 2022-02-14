
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {scalar_t__ iobase; } ;
struct TYPE_2__ {int* ao_readback; scalar_t__* dac_coding; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_5,
    struct comedi_subdevice *VAR_6,
    struct comedi_insn *VAR_7, unsigned int *VAR_8)
{
 int VAR_9, VAR_10;
 int VAR_11 = FUNC_0(VAR_7->chanspec);

 for (VAR_9 = 0; VAR_9 < VAR_7->n; VAR_9++) {
  VAR_10 = VAR_4->ao_readback[VAR_11] = VAR_8[VAR_9];
  if (VAR_4->dac_coding[VAR_11] == VAR_3)
   VAR_10 ^= 0x800;
  FUNC_1(VAR_11, VAR_5->iobase + VAR_2);
  FUNC_1(VAR_10 & 0xff, VAR_5->iobase + VAR_1);
  FUNC_1(VAR_10 >> 8, VAR_5->iobase + VAR_0);
 }
 return VAR_9;
}
