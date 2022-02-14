
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {unsigned int state; } ;
struct comedi_insn {int n; } ;
struct comedi_device {scalar_t__ iobase; } ;
struct TYPE_2__ {scalar_t__ do_hi; scalar_t__ do_lo; } ;


 int VAR_0 ;
 int FUNC_0 (int,scalar_t__) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int FUNC_1(struct comedi_device *VAR_2,
          struct comedi_subdevice *VAR_3,
          struct comedi_insn *VAR_4, unsigned int *VAR_5)
{
 if (VAR_4->n != 2)
  return -VAR_0;

 if (VAR_5[0]) {
  VAR_3->state &= ~VAR_5[0];
  VAR_3->state |= VAR_5[0] & VAR_5[1];
 }
 if (VAR_5[1] & 0x00ff)
  FUNC_0(VAR_3->state & 0xff, VAR_2->iobase + VAR_1->do_lo);
 if (VAR_5[1] & 0xff00)
  FUNC_0((VAR_3->state >> 8), VAR_2->iobase + VAR_1->do_hi);

 VAR_5[1] = VAR_3->state;

 return 2;
}
