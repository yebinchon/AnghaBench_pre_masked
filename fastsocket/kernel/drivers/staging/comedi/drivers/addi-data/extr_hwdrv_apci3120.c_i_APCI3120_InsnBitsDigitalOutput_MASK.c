
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; } ;
struct comedi_device {int dummy; } ;
struct TYPE_4__ {unsigned int b_DigitalOutputRegister; scalar_t__ iobase; } ;
struct TYPE_3__ {unsigned int i_DoMaxdata; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct comedi_device*,char*) ;
 TYPE_2__* VAR_2 ;
 int FUNC_1 (unsigned int,scalar_t__) ;
 int FUNC_2 (char*) ;
 TYPE_1__* VAR_3 ;

int FUNC_3(struct comedi_device *VAR_4,
         struct comedi_subdevice *VAR_5,
         struct comedi_insn *VAR_6,
         unsigned int *VAR_7)
{
 if ((VAR_7[0] > VAR_3->i_DoMaxdata) || (VAR_7[0] < 0)) {

  FUNC_0(VAR_4, "Data is not valid !!! \n");
  return -VAR_1;
 }

 switch (VAR_7[1]) {
 case 1:
  VAR_7[0] = (VAR_7[0] << 4) | VAR_2->b_DigitalOutputRegister;
  break;

 case 2:
  VAR_7[0] = VAR_7[0];
  break;
 default:
  FUNC_2("\nThe parameter passed is in error \n");
  return -VAR_1;
 }
 FUNC_1(VAR_7[0], VAR_2->iobase + VAR_0);

 VAR_2->b_DigitalOutputRegister = VAR_7[0] & 0xF0;

 return VAR_6->n;

}
