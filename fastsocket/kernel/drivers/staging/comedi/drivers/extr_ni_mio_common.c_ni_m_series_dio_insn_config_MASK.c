
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



 int VAR_3 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (char*,int,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_4,
           struct comedi_subdevice *VAR_5,
           struct comedi_insn *VAR_6,
           unsigned int *VAR_7)
{




 switch (VAR_7[0]) {
 case 129:
  VAR_5->io_bits |= 1 << FUNC_0(VAR_6->chanspec);
  break;
 case 130:
  VAR_5->io_bits &= ~(1 << FUNC_0(VAR_6->chanspec));
  break;
 case 128:
  VAR_7[1] =
      (VAR_5->
       io_bits & (1 << FUNC_0(VAR_6->chanspec))) ? VAR_1 :
      VAR_0;
  return VAR_6->n;
  break;
 default:
  return -VAR_2;
 }

 FUNC_1(VAR_5->io_bits, VAR_3);

 return 1;
}
