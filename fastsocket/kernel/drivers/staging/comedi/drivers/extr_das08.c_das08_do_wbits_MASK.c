
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int dummy; } ;
struct comedi_device {int spinlock; scalar_t__ iobase; } ;
struct TYPE_2__ {int do_mux_bits; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_3, struct comedi_subdevice *VAR_4,
     struct comedi_insn *VAR_5, unsigned int *VAR_6)
{
 int VAR_7;


 VAR_7 = (VAR_2->do_mux_bits >> 4) & 0xf;

 VAR_7 &= ~VAR_6[0];

 VAR_7 |= VAR_6[0] & VAR_6[1];

 FUNC_2(&VAR_3->spinlock);
 VAR_2->do_mux_bits &= ~VAR_1;
 VAR_2->do_mux_bits |= FUNC_0(VAR_7);
 FUNC_1(VAR_2->do_mux_bits, VAR_3->iobase + VAR_0);
 FUNC_3(&VAR_3->spinlock);

 VAR_6[1] = VAR_7;

 return 2;
}
