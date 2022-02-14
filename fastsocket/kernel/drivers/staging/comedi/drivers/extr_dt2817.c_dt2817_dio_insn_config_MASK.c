
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int io_bits; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {scalar_t__ iobase; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_2,
      struct comedi_subdevice *VAR_3,
      struct comedi_insn *VAR_4, unsigned int *VAR_5)
{
 int VAR_6;
 int VAR_7;
 int VAR_8 = 0;

 if (VAR_4->n != 1)
  return -VAR_1;

 VAR_7 = FUNC_0(VAR_4->chanspec);
 if (VAR_7 < 8) {
  VAR_6 = 0xff;
 } else if (VAR_7 < 16) {
  VAR_6 = 0xff00;
 } else if (VAR_7 < 24) {
  VAR_6 = 0xff0000;
 } else
  VAR_6 = 0xff000000;
 if (VAR_5[0])
  VAR_3->io_bits |= VAR_6;
 else
  VAR_3->io_bits &= ~VAR_6;

 if (VAR_3->io_bits & 0x000000ff)
  VAR_8 |= 0x1;
 if (VAR_3->io_bits & 0x0000ff00)
  VAR_8 |= 0x2;
 if (VAR_3->io_bits & 0x00ff0000)
  VAR_8 |= 0x4;
 if (VAR_3->io_bits & 0xff000000)
  VAR_8 |= 0x8;

 FUNC_1(VAR_8, VAR_2->iobase + VAR_0);

 return 1;
}
