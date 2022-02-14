
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {int i_IobaseReserved; } ;


 unsigned int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct comedi_device*,char*) ;
 TYPE_1__* VAR_1 ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;

int FUNC_4(struct comedi_device *VAR_2, struct comedi_subdevice *VAR_3,
 struct comedi_insn *VAR_4, unsigned int *VAR_5)
{
 unsigned int VAR_6 = 0;
 unsigned int VAR_7 = 0;
 VAR_7 = FUNC_0(VAR_4->chanspec);
 VAR_6 = VAR_5[0];
 *VAR_5 = FUNC_2(VAR_1->i_IobaseReserved);

 if (VAR_6 == 0) {
  *VAR_5 = (*VAR_5 >> VAR_7) & 0x1;
 }
 else {
  if (VAR_6 == 1) {
   if (VAR_5[1] < 0 || VAR_5[1] > 1) {
    FUNC_3("\nThe port number is in error\n");
    return -VAR_0;
   }
   switch (VAR_7) {

   case 2:
    *VAR_5 = (*VAR_5 >> (2 * VAR_5[1])) & 0x3;
    break;
   case 3:
    *VAR_5 = (*VAR_5 & 15);
    break;
   default:
    FUNC_1(VAR_2, " chan spec wrong");
    return -VAR_0;

   }
  }
  else {
   FUNC_3("\nSpecified channel not supported \n");
  }
 }
 return VAR_4->n;
}
