
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int state; int io_bits; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {int dummy; } ;


 int FUNC_0 (int ) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;



 int VAR_3 ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_4,
    struct comedi_subdevice *VAR_5,
    struct comedi_insn *VAR_6, unsigned int *VAR_7)
{
 int VAR_8 = FUNC_1(VAR_6->chanspec);
 int VAR_9, VAR_10;

 FUNC_3("S526 DIO insn_config\n");






 VAR_9 = VAR_8 >> 2;
 VAR_10 = 0xF << (VAR_9 << 2);
 switch (VAR_7[0]) {
 case 129:
  VAR_5->state |= 1 << (VAR_9 + 10);
  VAR_5->io_bits |= VAR_10;
  break;
 case 130:
  VAR_5->state &= ~(1 << (VAR_9 + 10));
  VAR_5->io_bits &= ~VAR_10;
  break;
 case 128:
  VAR_7[1] = (VAR_5->io_bits & VAR_10) ? VAR_1 : VAR_0;
  return VAR_6->n;
 default:
  return -VAR_2;
 }
 FUNC_2(VAR_5->state, FUNC_0(VAR_3));

 return 1;
}
