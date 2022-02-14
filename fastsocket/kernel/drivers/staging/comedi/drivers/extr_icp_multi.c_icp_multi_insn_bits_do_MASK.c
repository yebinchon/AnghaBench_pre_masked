
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {unsigned int state; } ;
struct comedi_insn {int dummy; } ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ io_addr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (char*,...) ;
 unsigned int FUNC_1 (scalar_t__) ;
 int FUNC_2 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_3,
      struct comedi_subdevice *VAR_4,
      struct comedi_insn *VAR_5, unsigned int *VAR_6)
{




 if (VAR_6[0]) {
  VAR_4->state &= ~VAR_6[0];
  VAR_4->state |= (VAR_6[0] & VAR_6[1]);

  FUNC_0("Digital outputs = %4x \n", VAR_4->state);

  FUNC_2(VAR_4->state, VAR_2->io_addr + VAR_1);
 }

 VAR_6[1] = FUNC_1(VAR_2->io_addr + VAR_0);




 return 2;
}
