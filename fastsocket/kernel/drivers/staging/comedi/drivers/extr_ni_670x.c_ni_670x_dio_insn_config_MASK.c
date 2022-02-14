
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {int io_bits; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {int dummy; } ;
struct TYPE_4__ {TYPE_1__* mite; } ;
struct TYPE_3__ {scalar_t__ daq_io_addr; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;



 TYPE_2__* VAR_4 ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_5,
       struct comedi_subdevice *VAR_6,
       struct comedi_insn *VAR_7, unsigned int *VAR_8)
{
 int VAR_9 = FUNC_0(VAR_7->chanspec);

 switch (VAR_8[0]) {
 case 129:
  VAR_6->io_bits |= 1 << VAR_9;
  break;
 case 130:
  VAR_6->io_bits &= ~(1 << VAR_9);
  break;
 case 128:
  VAR_8[1] =
      (VAR_6->io_bits & (1 << VAR_9)) ? VAR_1 : VAR_0;
  return VAR_7->n;
  break;
 default:
  return -VAR_3;
  break;
 }
 FUNC_1(VAR_6->io_bits, VAR_4->mite->daq_io_addr + VAR_2);

 return VAR_7->n;
}
