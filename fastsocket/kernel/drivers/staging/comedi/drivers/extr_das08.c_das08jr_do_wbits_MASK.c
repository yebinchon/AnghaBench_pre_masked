
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int dummy; } ;
struct comedi_device {scalar_t__ iobase; } ;
struct TYPE_2__ {unsigned int do_bits; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct comedi_device *VAR_2,
       struct comedi_subdevice *VAR_3,
       struct comedi_insn *VAR_4, unsigned int *VAR_5)
{

 VAR_1->do_bits &= ~VAR_5[0];

 VAR_1->do_bits |= VAR_5[0] & VAR_5[1];
 FUNC_0(VAR_1->do_bits, VAR_2->iobase + VAR_0);

 VAR_5[1] = VAR_1->do_bits;

 return 2;
}
