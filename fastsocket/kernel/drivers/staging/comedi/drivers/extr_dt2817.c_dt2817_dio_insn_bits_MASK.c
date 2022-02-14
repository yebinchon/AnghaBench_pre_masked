
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {unsigned int state; unsigned int io_bits; } ;
struct comedi_insn {int dummy; } ;
struct comedi_device {scalar_t__ iobase; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_1,
    struct comedi_subdevice *VAR_2,
    struct comedi_insn *VAR_3, unsigned int *VAR_4)
{
 unsigned int VAR_5;





 if (VAR_4[0]) {
  VAR_5 = VAR_2->state;
  VAR_2->state &= ~VAR_4[0];
  VAR_2->state |= (VAR_4[0] & VAR_4[1]);
  VAR_5 ^= VAR_2->state;
  VAR_5 &= VAR_2->io_bits;
  if (VAR_5 & 0x000000ff)
   FUNC_1(VAR_2->state & 0xff, VAR_1->iobase + VAR_0 + 0);
  if (VAR_5 & 0x0000ff00)
   FUNC_1((VAR_2->state >> 8) & 0xff,
        VAR_1->iobase + VAR_0 + 1);
  if (VAR_5 & 0x00ff0000)
   FUNC_1((VAR_2->state >> 16) & 0xff,
        VAR_1->iobase + VAR_0 + 2);
  if (VAR_5 & 0xff000000)
   FUNC_1((VAR_2->state >> 24) & 0xff,
        VAR_1->iobase + VAR_0 + 3);
 }
 VAR_4[1] = FUNC_0(VAR_1->iobase + VAR_0 + 0);
 VAR_4[1] |= (FUNC_0(VAR_1->iobase + VAR_0 + 1) << 8);
 VAR_4[1] |= (FUNC_0(VAR_1->iobase + VAR_0 + 2) << 16);
 VAR_4[1] |= (FUNC_0(VAR_1->iobase + VAR_0 + 3) << 24);

 return 2;
}
