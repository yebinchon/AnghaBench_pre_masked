
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ iobase; } ;


 scalar_t__ VAR_0 ;
 unsigned int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct comedi_device*,char*) ;
 TYPE_1__* VAR_2 ;
 unsigned int FUNC_2 (scalar_t__) ;
 int FUNC_3 (char*) ;

int FUNC_4(struct comedi_device *VAR_3, struct comedi_subdevice *VAR_4,
 struct comedi_insn *VAR_5, unsigned int *VAR_6)
{
 unsigned int VAR_7;
 unsigned int VAR_8;
 VAR_8 = FUNC_0(VAR_5->chanspec);
 VAR_7 = VAR_6[0];
 *VAR_6 = FUNC_2(VAR_2->iobase + VAR_0);
 if (VAR_7 == 0) {
  *VAR_6 = (*VAR_6 >> VAR_8) & 0x1;
 }
 else {
  if (VAR_7 == 1) {
   switch (VAR_8) {

   case 2:
    *VAR_6 = (*VAR_6 >> (2 * VAR_6[1])) & 3;
    break;

   case 4:
    *VAR_6 = (*VAR_6 >> (4 * VAR_6[1])) & 15;
    break;

   case 8:
    *VAR_6 = (*VAR_6 >> (8 * VAR_6[1])) & 255;
    break;

   case 16:
    *VAR_6 = (*VAR_6 >> (16 * VAR_6[1])) & 65535;
    break;

   case 31:
    break;

   default:
    FUNC_1(VAR_3, " chan spec wrong");
    return -VAR_1;

   }
  }
  else {
   FUNC_3("\nSpecified channel not supported \n");
  }
 }
 return VAR_5->n;
}
