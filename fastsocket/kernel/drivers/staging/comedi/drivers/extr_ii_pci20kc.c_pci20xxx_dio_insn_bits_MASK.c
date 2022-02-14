
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {unsigned int state; unsigned int io_bits; } ;
struct comedi_insn {int dummy; } ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ ioaddr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_5,
      struct comedi_subdevice *VAR_6,
      struct comedi_insn *VAR_7, unsigned int *VAR_8)
{
 unsigned int VAR_9 = VAR_8[0];

 VAR_6->state &= ~VAR_9;
 VAR_6->state |= (VAR_9 & VAR_8[1]);

 VAR_9 &= VAR_6->io_bits;
 if (VAR_9 & 0x000000ff)
  FUNC_1((VAR_6->state >> 0) & 0xff,
         VAR_4->ioaddr + VAR_0);
 if (VAR_9 & 0x0000ff00)
  FUNC_1((VAR_6->state >> 8) & 0xff,
         VAR_4->ioaddr + VAR_1);
 if (VAR_9 & 0x00ff0000)
  FUNC_1((VAR_6->state >> 16) & 0xff,
         VAR_4->ioaddr + VAR_2);
 if (VAR_9 & 0xff000000)
  FUNC_1((VAR_6->state >> 24) & 0xff,
         VAR_4->ioaddr + VAR_3);

 VAR_8[1] = FUNC_0(VAR_4->ioaddr + VAR_0);
 VAR_8[1] |= FUNC_0(VAR_4->ioaddr + VAR_1) << 8;
 VAR_8[1] |= FUNC_0(VAR_4->ioaddr + VAR_2) << 16;
 VAR_8[1] |= FUNC_0(VAR_4->ioaddr + VAR_3) << 24;

 return 2;
}
