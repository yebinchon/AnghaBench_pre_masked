
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {unsigned int io_bits; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;



 int FUNC_1 (struct comedi_device*,struct comedi_subdevice*) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_3,
       struct comedi_subdevice *VAR_4,
       struct comedi_insn *VAR_5, unsigned int *VAR_6)
{
 unsigned int VAR_7;
 unsigned int VAR_8;

 VAR_7 = 1 << FUNC_0(VAR_5->chanspec);
 if (VAR_7 & 0x0000ff) {
  VAR_8 = 0x0000ff;
 } else if (VAR_7 & 0x00ff00) {
  VAR_8 = 0x00ff00;
 } else if (VAR_7 & 0x0f0000) {
  VAR_8 = 0x0f0000;
 } else {
  VAR_8 = 0xf00000;
 }

 switch (VAR_6[0]) {
 case 130:
  VAR_4->io_bits &= ~VAR_8;
  break;
 case 129:
  VAR_4->io_bits |= VAR_8;
  break;
 case 128:
  VAR_6[1] = (VAR_4->io_bits & VAR_8) ? VAR_1 : VAR_0;
  return VAR_5->n;
  break;
 default:
  return -VAR_2;
 }

 FUNC_1(VAR_3, VAR_4);

 return 1;
}
