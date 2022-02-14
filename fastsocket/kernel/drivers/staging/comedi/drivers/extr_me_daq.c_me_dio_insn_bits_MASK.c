
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {unsigned int state; unsigned int io_bits; } ;
struct comedi_insn {int dummy; } ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ me_regbase; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_3,
       struct comedi_subdevice *VAR_4,
       struct comedi_insn *VAR_5, unsigned int *VAR_6)
{
 unsigned int VAR_7 = VAR_6[0];
 VAR_4->state &= ~VAR_7;
 VAR_4->state |= (VAR_7 & VAR_6[1]);

 VAR_7 &= VAR_4->io_bits;
 if (VAR_7 & 0x0000ffff) {
  FUNC_1((VAR_4->state & 0xffff),
         VAR_2->me_regbase + VAR_0);
 } else {
  VAR_6[1] &= ~0x0000ffff;
  VAR_6[1] |= FUNC_0(VAR_2->me_regbase + VAR_0);
 }

 if (VAR_7 & 0xffff0000) {
  FUNC_1(((VAR_4->state >> 16) & 0xffff),
         VAR_2->me_regbase + VAR_1);
 } else {
  VAR_6[1] &= ~0xffff0000;
  VAR_6[1] |= FUNC_0(VAR_2->me_regbase + VAR_1) << 16;
 }

 return 2;
}
