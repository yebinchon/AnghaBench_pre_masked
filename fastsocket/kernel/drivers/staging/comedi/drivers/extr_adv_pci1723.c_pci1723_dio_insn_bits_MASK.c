
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {unsigned int state; } ;
struct comedi_insn {int dummy; } ;
struct comedi_device {scalar_t__ iobase; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_2,
     struct comedi_subdevice *VAR_3,
     struct comedi_insn *VAR_4, unsigned int *VAR_5)
{
 if (VAR_5[0]) {
  VAR_3->state &= ~VAR_5[0];
  VAR_3->state |= (VAR_5[0] & VAR_5[1]);
  FUNC_1(VAR_3->state, VAR_2->iobase + VAR_1);
 }
 VAR_5[1] = FUNC_0(VAR_2->iobase + VAR_0);
 return 2;
}
