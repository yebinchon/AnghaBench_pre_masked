
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int io_bits; } ;
struct comedi_insn {int chanspec; } ;
struct comedi_device {scalar_t__ iobase; } ;
struct TYPE_2__ {int dacsr; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_4,
      struct comedi_subdevice *VAR_5,
      struct comedi_insn *VAR_6, unsigned int *VAR_7)
{
 int VAR_8;

 VAR_8 = (FUNC_0(VAR_6->chanspec) < 8) ? 0x00ff : 0xff00;
 if (VAR_7[0])
  VAR_5->io_bits |= VAR_8;
 else
  VAR_5->io_bits &= ~VAR_8;

 if (VAR_5->io_bits & 0x00ff)
  VAR_3->dacsr |= VAR_2;
 else
  VAR_3->dacsr &= ~VAR_2;
 if (VAR_5->io_bits & 0xff00)
  VAR_3->dacsr |= VAR_1;
 else
  VAR_3->dacsr &= ~VAR_1;

 FUNC_1(VAR_3->dacsr, VAR_4->iobase + VAR_0);

 return 1;
}
