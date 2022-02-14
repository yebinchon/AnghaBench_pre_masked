
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {int i_IobaseAddon; scalar_t__ b_OutputMemoryStatus; } ;


 unsigned int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct comedi_device*,char*) ;
 TYPE_1__* VAR_1 ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (unsigned int,int ) ;
 int FUNC_4 (char*) ;

int FUNC_5(struct comedi_device *VAR_2, struct comedi_subdevice *VAR_3,
 struct comedi_insn *VAR_4, unsigned int *VAR_5)
{
 unsigned int VAR_6 = 0, VAR_7 = 0;
 unsigned int VAR_8 = FUNC_0(VAR_4->chanspec);
 if (VAR_1->b_OutputMemoryStatus) {
  VAR_6 = FUNC_2(VAR_1->i_IobaseAddon);

 }
 else {
  VAR_6 = 0;
 }
 if (VAR_5[3] == 0) {
  if (VAR_5[1] == 0) {
   VAR_5[0] = (VAR_5[0] << VAR_8) | VAR_6;
   FUNC_3(VAR_5[0], VAR_1->i_IobaseAddon);
  }
  else {
   if (VAR_5[1] == 1) {
    switch (VAR_8) {

    case 2:
     VAR_5[0] =
      (VAR_5[0] << (2 *
       VAR_5[2])) | VAR_6;
     break;
    case 3:
     VAR_5[0] = (VAR_5[0] | VAR_6);
     break;
    }

    FUNC_3(VAR_5[0], VAR_1->i_IobaseAddon);
   }
   else {
    FUNC_4("\nSpecified channel not supported\n");
   }
  }
 }
 else {
  if (VAR_5[3] == 1) {
   if (VAR_5[1] == 0) {
    VAR_5[0] = ~VAR_5[0] & 0x1;
    VAR_7 = 1;
    VAR_7 = VAR_7 << VAR_8;
    VAR_6 = VAR_6 | VAR_7;
    VAR_5[0] = (VAR_5[0] << VAR_8) ^ 0xf;
    VAR_5[0] = VAR_5[0] & VAR_6;
    FUNC_3(VAR_5[0], VAR_1->i_IobaseAddon);
   }
   else {
    if (VAR_5[1] == 1) {
     switch (VAR_8) {

     case 2:
      VAR_5[0] = ~VAR_5[0] & 0x3;
      VAR_7 = 3;
      VAR_7 =
       VAR_7 << 2 * VAR_5[2];
      VAR_6 = VAR_6 | VAR_7;
      VAR_5[0] =
       ((VAR_5[0] << (2 *
         VAR_5
         [2])) ^
       0xf) & VAR_6;

      break;
     case 3:
      break;

     default:
      FUNC_1(VAR_2,
       " chan spec wrong");
      return -VAR_0;
     }

     FUNC_3(VAR_5[0], VAR_1->i_IobaseAddon);
    }
    else {
     FUNC_4("\nSpecified channel not supported\n");
    }
   }
  }
  else {
   FUNC_4("\nSpecified functionality does not exist\n");
   return -VAR_0;
  }
 }
 return VAR_4->n;
}
