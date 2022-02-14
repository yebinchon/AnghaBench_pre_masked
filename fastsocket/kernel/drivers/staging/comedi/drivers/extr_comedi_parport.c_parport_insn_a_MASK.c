
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int dummy; } ;
struct comedi_device {scalar_t__ iobase; } ;
struct TYPE_2__ {unsigned int a_data; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 unsigned int FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_2, struct comedi_subdevice *VAR_3,
     struct comedi_insn *VAR_4, unsigned int *VAR_5)
{
 if (VAR_5[0]) {
  VAR_1->a_data &= ~VAR_5[0];
  VAR_1->a_data |= (VAR_5[0] & VAR_5[1]);

  FUNC_1(VAR_1->a_data, VAR_2->iobase + VAR_0);
 }

 VAR_5[1] = FUNC_0(VAR_2->iobase + VAR_0);

 return 2;
}
