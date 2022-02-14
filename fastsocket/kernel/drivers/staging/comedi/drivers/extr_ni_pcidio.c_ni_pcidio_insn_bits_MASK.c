
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {unsigned int state; } ;
struct comedi_insn {int n; } ;
struct comedi_device {int dummy; } ;
struct TYPE_4__ {TYPE_1__* mite; } ;
struct TYPE_3__ {scalar_t__ daq_io_addr; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 TYPE_2__* VAR_1 ;
 unsigned int FUNC_1 (scalar_t__) ;
 int FUNC_2 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_2,
          struct comedi_subdevice *VAR_3,
          struct comedi_insn *VAR_4, unsigned int *VAR_5)
{
 if (VAR_4->n != 2)
  return -VAR_0;
 if (VAR_5[0]) {
  VAR_3->state &= ~VAR_5[0];
  VAR_3->state |= (VAR_5[0] & VAR_5[1]);
  FUNC_2(VAR_3->state, VAR_1->mite->daq_io_addr + FUNC_0(0));
 }
 VAR_5[1] = FUNC_1(VAR_1->mite->daq_io_addr + FUNC_0(0));

 return 2;
}
