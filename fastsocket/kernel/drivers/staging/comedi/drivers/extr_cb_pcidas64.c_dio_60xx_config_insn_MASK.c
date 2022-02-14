
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {unsigned int io_bits; } ;
struct comedi_insn {int chanspec; } ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ dio_counter_iobase; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;



 TYPE_1__* FUNC_1 (struct comedi_device*) ;
 int FUNC_2 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_4,
    struct comedi_subdevice *VAR_5,
    struct comedi_insn *VAR_6, unsigned int *VAR_7)
{
 unsigned int VAR_8;

 VAR_8 = 1 << FUNC_0(VAR_6->chanspec);

 switch (VAR_7[0]) {
 case 130:
  VAR_5->io_bits &= ~VAR_8;
  break;
 case 129:
  VAR_5->io_bits |= VAR_8;
  break;
 case 128:
  VAR_7[1] = (VAR_5->io_bits & VAR_8) ? VAR_1 : VAR_0;
  return 2;
 default:
  return -VAR_3;
 }

 FUNC_2(VAR_5->io_bits,
        FUNC_1(VAR_4)->dio_counter_iobase + VAR_2);

 return 1;
}
