
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int io_bits; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {scalar_t__ iobase; } ;
struct TYPE_2__ {int com_reg_2_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 TYPE_1__* VAR_3 ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_4,
        struct comedi_subdevice *VAR_5,
        struct comedi_insn *VAR_6,
        unsigned int *VAR_7)
{
 int VAR_8;
 int VAR_9;

 for (VAR_8 = 0; VAR_8 < VAR_6->n; VAR_8++) {
  VAR_9 = (FUNC_0(VAR_6->chanspec) < 4) ? 0x0f : 0xf0;
  VAR_5->io_bits &= ~VAR_9;
  if (VAR_7[VAR_8])
   VAR_5->io_bits |= VAR_9;
 }
 VAR_3->com_reg_2_state &= ~(VAR_0 | VAR_1);
 if (VAR_5->io_bits & 0x0f)
  VAR_3->com_reg_2_state |= VAR_0;
 if (VAR_5->io_bits & 0xf0)
  VAR_3->com_reg_2_state |= VAR_1;
 FUNC_1(VAR_3->com_reg_2_state, VAR_4->iobase + VAR_2);

 return VAR_8;
}
