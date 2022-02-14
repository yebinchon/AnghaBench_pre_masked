
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ i_IobaseAddon; int b_OutputMemoryStatus; } ;


 scalar_t__ VAR_0 ;
 unsigned int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct comedi_device*,char*) ;
 TYPE_1__* VAR_2 ;
 int FUNC_2 (unsigned int,scalar_t__) ;
 int FUNC_3 (char*) ;

int FUNC_4(struct comedi_device *VAR_3, struct comedi_subdevice *VAR_4,
 struct comedi_insn *VAR_5, unsigned int *VAR_6)
{
 static unsigned int VAR_7 = 0;
 unsigned int VAR_8;

 unsigned int VAR_9 = FUNC_0(VAR_5->chanspec);

 if (!VAR_2->b_OutputMemoryStatus) {
  VAR_7 = 0;

 }
 if (VAR_6[3] == 0) {
  if (VAR_6[1] == 0) {
   VAR_6[0] = (VAR_6[0] << VAR_9) | VAR_7;
   FUNC_2(VAR_6[0],
    VAR_2->i_IobaseAddon + VAR_0);
  }
  else {
   if (VAR_6[1] == 1) {
    switch (VAR_9) {

    case 2:
     VAR_6[0] =
      (VAR_6[0] << (2 *
       VAR_6[2])) | VAR_7;
     break;

    case 4:
     VAR_6[0] =
      (VAR_6[0] << (4 *
       VAR_6[2])) | VAR_7;
     break;

    case 8:
     VAR_6[0] =
      (VAR_6[0] << (8 *
       VAR_6[2])) | VAR_7;
     break;

    case 15:
     VAR_6[0] = VAR_6[0] | VAR_7;
     break;

    default:
     FUNC_1(VAR_3, " chan spec wrong");
     return -VAR_1;

    }

    FUNC_2(VAR_6[0],
     VAR_2->i_IobaseAddon +
     VAR_0);
   }
   else {
    FUNC_3("\nSpecified channel not supported\n");
   }
  }
 }
 else {
  if (VAR_6[3] == 1) {
   if (VAR_6[1] == 0) {
    VAR_6[0] = ~VAR_6[0] & 0x1;
    VAR_8 = 1;
    VAR_8 = VAR_8 << VAR_9;
    VAR_7 = VAR_7 | VAR_8;
    VAR_6[0] =
     (VAR_6[0] << VAR_9) ^
     0xffffffff;
    VAR_6[0] = VAR_6[0] & VAR_7;
    FUNC_2(VAR_6[0],
     VAR_2->i_IobaseAddon +
     VAR_0);
   }
   else {
    if (VAR_6[1] == 1) {
     switch (VAR_9) {

     case 2:
      VAR_6[0] = ~VAR_6[0] & 0x3;
      VAR_8 = 3;
      VAR_8 =
       VAR_8 << 2 * VAR_6[2];
      VAR_7 = VAR_7 | VAR_8;
      VAR_6[0] =
       ((VAR_6[0] << (2 *
         VAR_6
         [2])) ^
       0xffffffff) & VAR_7;
      break;

     case 4:
      VAR_6[0] = ~VAR_6[0] & 0xf;
      VAR_8 = 15;
      VAR_8 =
       VAR_8 << 4 * VAR_6[2];
      VAR_7 = VAR_7 | VAR_8;
      VAR_6[0] =
       ((VAR_6[0] << (4 *
         VAR_6
         [2])) ^
       0xffffffff) & VAR_7;
      break;

     case 8:
      VAR_6[0] = ~VAR_6[0] & 0xff;
      VAR_8 = 255;
      VAR_8 =
       VAR_8 << 8 * VAR_6[2];
      VAR_7 = VAR_7 | VAR_8;
      VAR_6[0] =
       ((VAR_6[0] << (8 *
         VAR_6
         [2])) ^
       0xffffffff) & VAR_7;
      break;

     case 15:
      break;

     default:
      FUNC_1(VAR_3,
       " chan spec wrong");
      return -VAR_1;

     }

     FUNC_2(VAR_6[0],
      VAR_2->i_IobaseAddon +
      VAR_0);
    }
    else {
     FUNC_3("\nSpecified channel not supported\n");
    }
   }
  }
  else {
   FUNC_3("\nSpecified functionality does not exist\n");
   return -VAR_1;
  }
 }
 VAR_7 = VAR_6[0];
 return VAR_5->n;
}
