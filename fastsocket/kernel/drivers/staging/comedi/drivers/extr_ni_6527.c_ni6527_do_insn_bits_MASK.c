
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
 scalar_t__ FUNC_0 (int) ;
 TYPE_2__* VAR_1 ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_2,
          struct comedi_subdevice *VAR_3,
          struct comedi_insn *VAR_4, unsigned int *VAR_5)
{
 if (VAR_4->n != 2)
  return -VAR_0;
 if (VAR_5[0]) {
  VAR_3->state &= ~VAR_5[0];
  VAR_3->state |= (VAR_5[0] & VAR_5[1]);



  if (VAR_5[0] & 0x0000ff) {
   FUNC_1((VAR_3->state ^ 0xff),
          VAR_1->mite->daq_io_addr + FUNC_0(3));
  }
  if (VAR_5[0] & 0x00ff00) {
   FUNC_1((VAR_3->state >> 8) ^ 0xff,
          VAR_1->mite->daq_io_addr + FUNC_0(4));
  }
  if (VAR_5[0] & 0xff0000) {
   FUNC_1((VAR_3->state >> 16) ^ 0xff,
          VAR_1->mite->daq_io_addr + FUNC_0(5));
  }
 }
 VAR_5[1] = VAR_3->state;

 return 2;
}
