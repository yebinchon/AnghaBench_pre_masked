
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
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_1 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_5,
    struct comedi_subdevice *VAR_6,
    struct comedi_insn *VAR_7, unsigned int *VAR_8)
{
 int VAR_9 = FUNC_0(VAR_7->chanspec);
 int VAR_10;

 for (VAR_10 = 0; VAR_10 < VAR_7->n; VAR_10++) {
  FUNC_1((VAR_8[VAR_10] & 0xff),
       VAR_5->iobase + (VAR_9 ? VAR_3 : VAR_1));
  FUNC_1((VAR_8[VAR_10] >> 8) & 0x0f,
       VAR_5->iobase + (VAR_9 ? VAR_2 : VAR_0));
  VAR_4->ao_readback[VAR_9] = VAR_8[VAR_10];
 }

 return VAR_10;
}
