
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {int dummy; } ;
struct TYPE_4__ {unsigned int b_DigitalOutputRegister; scalar_t__ iobase; } ;
struct TYPE_3__ {int i_NbrDoChannel; } ;


 scalar_t__ VAR_0 ;
 unsigned int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct comedi_device*,char*) ;
 TYPE_2__* VAR_2 ;
 int FUNC_2 (unsigned int,scalar_t__) ;
 int FUNC_3 (char*) ;
 TYPE_1__* VAR_3 ;

int FUNC_4(struct comedi_device *VAR_4,
          struct comedi_subdevice *VAR_5,
          struct comedi_insn *VAR_6,
          unsigned int *VAR_7)
{

 unsigned int VAR_8;

 unsigned int VAR_9 = FUNC_0(VAR_6->chanspec);

 if ((VAR_7[0] != 0) && (VAR_7[0] != 1)) {
  FUNC_1(VAR_4,
   "Not a valid Data !!! ,Data should be 1 or 0\n");
  return -VAR_1;
 }
 if ((VAR_9 > (VAR_3->i_NbrDoChannel - 1))
  || (VAR_9 < 0)) {
  FUNC_1(VAR_4,
   "This board doesn't have specified channel !!! \n");
  return -VAR_1;
 }

 switch (VAR_7[1]) {
 case 1:
  VAR_7[0] = (VAR_7[0] << VAR_9);

  VAR_7[0] = (VAR_7[0] << 4) | VAR_2->b_DigitalOutputRegister;
  break;

 case 2:
  VAR_7[0] = ~VAR_7[0] & 0x1;
  VAR_8 = 1;
  VAR_8 = VAR_8 << VAR_9;
  VAR_8 = VAR_8 << 4;

  VAR_2->b_DigitalOutputRegister =
   VAR_2->b_DigitalOutputRegister | VAR_8;

  VAR_7[0] = (VAR_7[0] << VAR_9) ^ 0xf;
  VAR_7[0] = VAR_7[0] << 4;

  VAR_7[0] = VAR_7[0] & VAR_2->b_DigitalOutputRegister;
  break;
 default:
  FUNC_3("\nThe parameter passed is in error \n");
  return -VAR_1;
 }
 FUNC_2(VAR_7[0], VAR_2->iobase + VAR_0);


 VAR_2->b_DigitalOutputRegister = VAR_7[0] & 0xf0;
 return VAR_6->n;

}
