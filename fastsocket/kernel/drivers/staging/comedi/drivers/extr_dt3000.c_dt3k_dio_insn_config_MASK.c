
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int io_bits; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;



 int FUNC_1 (struct comedi_device*,int) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_3,
    struct comedi_subdevice *VAR_4,
    struct comedi_insn *VAR_5, unsigned int *VAR_6)
{
 int VAR_7;

 VAR_7 = (FUNC_0(VAR_5->chanspec) < 4) ? 0x0f : 0xf0;

 switch (VAR_6[0]) {
 case 129:
  VAR_4->io_bits |= VAR_7;
  break;
 case 130:
  VAR_4->io_bits &= ~VAR_7;
  break;
 case 128:
  VAR_6[1] =
      (VAR_4->
       io_bits & (1 << FUNC_0(VAR_5->chanspec))) ? VAR_1 :
      VAR_0;
  return VAR_5->n;
  break;
 default:
  return -VAR_2;
  break;
 }
 VAR_7 = (VAR_4->io_bits & 0x01) | ((VAR_4->io_bits & 0x10) >> 3);
 FUNC_1(VAR_3, VAR_7);

 return VAR_5->n;
}
