
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {int io_bidirection_pin_reg; } ;




 unsigned int FUNC_0 (int ) ;
 int VAR_0 ;




 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (struct comedi_device*,unsigned int,unsigned int) ;
 unsigned int FUNC_2 (struct comedi_device*,unsigned int) ;
 int FUNC_3 (struct comedi_device*,int ,int,int) ;
 int FUNC_4 (struct comedi_device*,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct comedi_device *VAR_3,
         struct comedi_subdevice *VAR_4,
         struct comedi_insn *VAR_5, unsigned int *VAR_6)
{
 unsigned int VAR_7;

 if (VAR_5->n < 1)
  return -VAR_0;

 VAR_7 = FUNC_0(VAR_5->chanspec);

 switch (VAR_6[0]) {
 case 132:
  FUNC_3(VAR_3, VAR_1, 1 << VAR_7, 1);
  break;
 case 133:
  FUNC_3(VAR_3, VAR_1, 1 << VAR_7, 0);
  break;
 case 131:
  VAR_6[1] =
      (VAR_2->io_bidirection_pin_reg & (1 << VAR_7)) ?
      132 : 133;
  return 0;
  break;
 case 128:
  return FUNC_4(VAR_3, VAR_7, VAR_6[1]);
  break;
 case 129:
  VAR_6[1] = FUNC_2(VAR_3, VAR_7);
  break;
 case 130:
  return FUNC_1(VAR_3, VAR_7, VAR_6[1]);
  break;
 default:
  return -VAR_0;
 }
 return 0;
}
