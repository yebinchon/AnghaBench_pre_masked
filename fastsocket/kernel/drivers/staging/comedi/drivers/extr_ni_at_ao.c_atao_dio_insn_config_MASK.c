
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {unsigned int io_bits; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {scalar_t__ iobase; } ;
struct TYPE_2__ {unsigned int cfg3; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int ) ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;



 TYPE_1__* VAR_6 ;
 int FUNC_1 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_7,
    struct comedi_subdevice *VAR_8,
    struct comedi_insn *VAR_9, unsigned int *VAR_10)
{
 int VAR_11 = FUNC_0(VAR_9->chanspec);
 unsigned int VAR_12, VAR_13;






 VAR_12 = (VAR_11 < 4) ? 0x0f : 0xf0;
 VAR_13 = (VAR_11 < 4) ? VAR_3 : VAR_4;

 switch (VAR_10[0]) {
 case 129:
  VAR_8->io_bits |= VAR_12;
  VAR_6->cfg3 |= VAR_13;
  break;
 case 130:
  VAR_8->io_bits &= ~VAR_12;
  VAR_6->cfg3 &= ~VAR_13;
  break;
 case 128:
  VAR_10[1] =
      (VAR_8->io_bits & (1 << VAR_11)) ? VAR_2 : VAR_1;
  return VAR_9->n;
  break;
 default:
  return -VAR_5;
  break;
 }

 FUNC_1(VAR_6->cfg3, VAR_7->iobase + VAR_0);

 return 1;
}
