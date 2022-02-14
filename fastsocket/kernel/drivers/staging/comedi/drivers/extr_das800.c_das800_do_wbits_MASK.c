
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int dummy; } ;
struct comedi_device {int spinlock; scalar_t__ iobase; } ;
struct TYPE_2__ {int do_bits; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_0 (int,scalar_t__) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_5,
      struct comedi_subdevice *VAR_6, struct comedi_insn *VAR_7,
      unsigned int *VAR_8)
{
 int VAR_9;
 unsigned long VAR_10;


 VAR_8[0] &= 0xf;
 VAR_9 = VAR_4->do_bits >> 4;
 VAR_9 &= ~VAR_8[0];
 VAR_9 |= VAR_8[0] & VAR_8[1];
 VAR_4->do_bits = VAR_9 << 4;

 FUNC_1(&VAR_5->spinlock, VAR_10);
 FUNC_0(VAR_0, VAR_5->iobase + VAR_3);
 FUNC_0(VAR_4->do_bits | VAR_1, VAR_5->iobase + VAR_2);
 FUNC_2(&VAR_5->spinlock, VAR_10);

 VAR_8[1] = VAR_9;

 return 2;
}
