
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {int dummy; } ;
struct TYPE_4__ {unsigned int filter_interval; int filter_enable; TYPE_1__* mite; } ;
struct TYPE_3__ {scalar_t__ daq_io_addr; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 unsigned int VAR_3 ;
 TYPE_2__* VAR_4 ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_5,
     struct comedi_subdevice *VAR_6,
     struct comedi_insn *VAR_7, unsigned int *VAR_8)
{
 int VAR_9 = FUNC_0(VAR_7->chanspec);
 unsigned int VAR_10;

 if (VAR_7->n != 2)
  return -VAR_2;

 if (VAR_8[0] != VAR_3)
  return -VAR_2;

 if (VAR_8[1]) {
  VAR_10 = (VAR_8[1] + 100) / 200;
  VAR_8[1] = VAR_10 * 200;

  if (VAR_10 != VAR_4->filter_interval) {
   FUNC_3(VAR_10 & 0xff,
          VAR_4->mite->daq_io_addr + FUNC_2(0));
   FUNC_3((VAR_10 >> 8) & 0xff,
          VAR_4->mite->daq_io_addr + FUNC_2(1));
   FUNC_3((VAR_10 >> 16) & 0x0f,
          VAR_4->mite->daq_io_addr + FUNC_2(2));

   FUNC_3(VAR_1,
          VAR_4->mite->daq_io_addr + VAR_0);

   VAR_4->filter_interval = VAR_10;
  }

  VAR_4->filter_enable |= 1 << VAR_9;
 } else {
  VAR_4->filter_enable &= ~(1 << VAR_9);
 }

 FUNC_3(VAR_4->filter_enable,
        VAR_4->mite->daq_io_addr + FUNC_1(0));
 FUNC_3(VAR_4->filter_enable >> 8,
        VAR_4->mite->daq_io_addr + FUNC_1(1));
 FUNC_3(VAR_4->filter_enable >> 16,
        VAR_4->mite->daq_io_addr + FUNC_1(2));

 return 2;
}
