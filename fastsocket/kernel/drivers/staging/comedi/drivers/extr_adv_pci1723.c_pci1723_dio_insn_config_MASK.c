
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {unsigned int io_bits; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {scalar_t__ iobase; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;



 scalar_t__ VAR_3 ;
 int FUNC_1 (unsigned short,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_4,
       struct comedi_subdevice *VAR_5,
       struct comedi_insn *VAR_6, unsigned int *VAR_7)
{
 unsigned int VAR_8;
 unsigned int VAR_9;
 unsigned short VAR_10;

 VAR_8 = 1 << FUNC_0(VAR_6->chanspec);
 if (VAR_8 & 0x00FF) {
  VAR_9 = 0x00FF;
 } else {
  VAR_9 = 0xFF00;
 }
 switch (VAR_7[0]) {
 case 130:
  VAR_5->io_bits &= ~VAR_9;
  break;
 case 129:
  VAR_5->io_bits |= VAR_9;
  break;
 case 128:
  VAR_7[1] = (VAR_5->io_bits & VAR_9) ? VAR_1 : VAR_0;
  return VAR_6->n;
 default:
  return -VAR_2;
 }


 VAR_10 = 0x0000;
 if ((VAR_5->io_bits & 0x00FF) == 0)
  VAR_10 |= 0x0001;
 if ((VAR_5->io_bits & 0xFF00) == 0)
  VAR_10 |= 0x0002;
 FUNC_1(VAR_10, VAR_4->iobase + VAR_3);
 return 1;
}
