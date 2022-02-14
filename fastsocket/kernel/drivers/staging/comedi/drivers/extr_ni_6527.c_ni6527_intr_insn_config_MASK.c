
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; } ;
struct comedi_device {int dummy; } ;
struct TYPE_4__ {TYPE_1__* mite; } ;
struct TYPE_3__ {scalar_t__ daq_io_addr; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 TYPE_2__* VAR_2 ;
 int FUNC_2 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_3,
       struct comedi_subdevice *VAR_4,
       struct comedi_insn *VAR_5, unsigned int *VAR_6)
{
 if (VAR_5->n < 1)
  return -VAR_0;
 if (VAR_6[0] != VAR_1)
  return -VAR_0;

 FUNC_2(VAR_6[1],
        VAR_2->mite->daq_io_addr + FUNC_1(0));
 FUNC_2(VAR_6[1] >> 8,
        VAR_2->mite->daq_io_addr + FUNC_1(1));
 FUNC_2(VAR_6[1] >> 16,
        VAR_2->mite->daq_io_addr + FUNC_1(2));

 FUNC_2(VAR_6[2],
        VAR_2->mite->daq_io_addr + FUNC_0(0));
 FUNC_2(VAR_6[2] >> 8,
        VAR_2->mite->daq_io_addr + FUNC_0(1));
 FUNC_2(VAR_6[2] >> 16,
        VAR_2->mite->daq_io_addr + FUNC_0(2));

 return 2;
}
