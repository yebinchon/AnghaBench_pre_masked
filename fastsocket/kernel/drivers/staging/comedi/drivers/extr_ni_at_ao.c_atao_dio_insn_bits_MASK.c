
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {unsigned int state; } ;
struct comedi_insn {int n; } ;
struct comedi_device {scalar_t__ iobase; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_3,
         struct comedi_subdevice *VAR_4,
         struct comedi_insn *VAR_5, unsigned int *VAR_6)
{
 if (VAR_5->n != 2)
  return -VAR_2;

 if (VAR_6[0]) {
  VAR_4->state &= ~VAR_6[0];
  VAR_4->state |= VAR_6[0] & VAR_6[1];
  FUNC_1(VAR_4->state, VAR_3->iobase + VAR_1);
 }

 VAR_6[1] = FUNC_0(VAR_3->iobase + VAR_0);

 return 2;
}
