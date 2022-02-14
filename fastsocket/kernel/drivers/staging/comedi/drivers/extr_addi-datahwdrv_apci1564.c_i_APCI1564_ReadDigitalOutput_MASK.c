
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ i_IobaseAmcc; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (struct comedi_device*,char*) ;
 TYPE_1__* VAR_3 ;
 unsigned int FUNC_2 (scalar_t__) ;
 int FUNC_3 (char*) ;

int FUNC_4(struct comedi_device *VAR_4, struct comedi_subdevice *VAR_5,
 struct comedi_insn *VAR_6, unsigned int *VAR_7)
{
 unsigned int VAR_8;
 unsigned int VAR_9;

 VAR_9 = FUNC_0(VAR_6->chanspec);
 VAR_8 = VAR_7[0];
 *VAR_7 = FUNC_2(VAR_3->i_IobaseAmcc + VAR_0 +
  VAR_1);
 if (VAR_8 == 0) {
  *VAR_7 = (*VAR_7 >> VAR_9) & 0x1;
 }
 else {
  if (VAR_8 == 1) {
   switch (VAR_9) {
   case 2:
    *VAR_7 = (*VAR_7 >> (2 * VAR_7[1])) & 3;
    break;

   case 4:
    *VAR_7 = (*VAR_7 >> (4 * VAR_7[1])) & 15;
    break;

   case 8:
    *VAR_7 = (*VAR_7 >> (8 * VAR_7[1])) & 255;
    break;

   case 16:
    *VAR_7 = (*VAR_7 >> (16 * VAR_7[1])) & 65535;
    break;

   case 31:
    break;

   default:
    FUNC_1(VAR_4, " chan spec wrong");
    return -VAR_2;
    break;
   }
  }
  else {
   FUNC_3("\nSpecified channel not supported \n");
  }
 }
 return VAR_6->n;
}
