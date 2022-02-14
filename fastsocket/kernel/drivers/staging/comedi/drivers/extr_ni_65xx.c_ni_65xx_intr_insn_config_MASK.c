
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
 TYPE_2__* FUNC_2 (struct comedi_device*) ;
 int FUNC_3 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_2,
        struct comedi_subdevice *VAR_3,
        struct comedi_insn *VAR_4,
        unsigned int *VAR_5)
{
 if (VAR_4->n < 1)
  return -VAR_0;
 if (VAR_5[0] != VAR_1)
  return -VAR_0;

 FUNC_3(VAR_5[1],
        FUNC_2(VAR_2)->mite->daq_io_addr +
        FUNC_1(0));
 FUNC_3(VAR_5[1] >> 8,
        FUNC_2(VAR_2)->mite->daq_io_addr +
        FUNC_1(0x10));
 FUNC_3(VAR_5[1] >> 16,
        FUNC_2(VAR_2)->mite->daq_io_addr +
        FUNC_1(0x20));
 FUNC_3(VAR_5[1] >> 24,
        FUNC_2(VAR_2)->mite->daq_io_addr +
        FUNC_1(0x30));

 FUNC_3(VAR_5[2],
        FUNC_2(VAR_2)->mite->daq_io_addr +
        FUNC_0(0));
 FUNC_3(VAR_5[2] >> 8,
        FUNC_2(VAR_2)->mite->daq_io_addr +
        FUNC_0(0x10));
 FUNC_3(VAR_5[2] >> 16,
        FUNC_2(VAR_2)->mite->daq_io_addr +
        FUNC_0(0x20));
 FUNC_3(VAR_5[2] >> 24,
        FUNC_2(VAR_2)->mite->daq_io_addr +
        FUNC_0(0x30));

 return 2;
}
