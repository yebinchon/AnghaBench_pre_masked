
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ i_IobaseAmcc; scalar_t__ b_OutputMemoryStatus; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (struct comedi_device*,char*) ;
 TYPE_1__* VAR_3 ;
 unsigned int FUNC_2 (scalar_t__) ;
 int FUNC_3 (unsigned int,scalar_t__) ;
 int FUNC_4 (char*) ;

int FUNC_5(struct comedi_device *VAR_4, struct comedi_subdevice *VAR_5,
 struct comedi_insn *VAR_6, unsigned int *VAR_7)
{
 unsigned int VAR_8, VAR_9;
 unsigned int VAR_10;

 VAR_10 = FUNC_0(VAR_6->chanspec);
 if (VAR_3->b_OutputMemoryStatus) {
  VAR_8 =
   FUNC_2(VAR_3->i_IobaseAmcc + VAR_0 +
   VAR_1);
 }
 else {
  VAR_8 = 0;
 }
 if (VAR_7[3] == 0) {
  if (VAR_7[1] == 0) {
   VAR_7[0] = (VAR_7[0] << VAR_10) | VAR_8;
   FUNC_3(VAR_7[0],
    VAR_3->i_IobaseAmcc + VAR_0 +
    VAR_1);
  }
  else {
   if (VAR_7[1] == 1) {
    switch (VAR_10) {
    case 2:
     VAR_7[0] =
      (VAR_7[0] << (2 *
       VAR_7[2])) | VAR_8;
     break;
    case 4:
     VAR_7[0] =
      (VAR_7[0] << (4 *
       VAR_7[2])) | VAR_8;
     break;
    case 8:
     VAR_7[0] =
      (VAR_7[0] << (8 *
       VAR_7[2])) | VAR_8;
     break;
    case 16:
     VAR_7[0] =
      (VAR_7[0] << (16 *
       VAR_7[2])) | VAR_8;
     break;
    case 31:
     VAR_7[0] = VAR_7[0] | VAR_8;
     break;
    default:
     FUNC_1(VAR_4, " chan spec wrong");
     return -VAR_2;
    }
    FUNC_3(VAR_7[0],
     VAR_3->i_IobaseAmcc +
     VAR_0 +
     VAR_1);
   }
   else {
    FUNC_4("\nSpecified channel not supported\n");
   }
  }
 }
 else {
  if (VAR_7[3] == 1) {
   if (VAR_7[1] == 0) {
    VAR_7[0] = ~VAR_7[0] & 0x1;
    VAR_9 = 1;
    VAR_9 = VAR_9 << VAR_10;
    VAR_8 = VAR_8 | VAR_9;
    VAR_7[0] =
     (VAR_7[0] << VAR_10) ^
     0xffffffff;
    VAR_7[0] = VAR_7[0] & VAR_8;
    FUNC_3(VAR_7[0],
     VAR_3->i_IobaseAmcc +
     VAR_0 +
     VAR_1);
   }
   else {
    if (VAR_7[1] == 1) {
     switch (VAR_10) {
     case 2:
      VAR_7[0] = ~VAR_7[0] & 0x3;
      VAR_9 = 3;
      VAR_9 =
       VAR_9 << 2 * VAR_7[2];
      VAR_8 = VAR_8 | VAR_9;
      VAR_7[0] =
       ((VAR_7[0] << (2 *
         VAR_7
         [2])) ^
       0xffffffff) & VAR_8;
      break;
     case 4:
      VAR_7[0] = ~VAR_7[0] & 0xf;
      VAR_9 = 15;
      VAR_9 =
       VAR_9 << 4 * VAR_7[2];
      VAR_8 = VAR_8 | VAR_9;
      VAR_7[0] =
       ((VAR_7[0] << (4 *
         VAR_7
         [2])) ^
       0xffffffff) & VAR_8;
      break;
     case 8:
      VAR_7[0] = ~VAR_7[0] & 0xff;
      VAR_9 = 255;
      VAR_9 =
       VAR_9 << 8 * VAR_7[2];
      VAR_8 = VAR_8 | VAR_9;
      VAR_7[0] =
       ((VAR_7[0] << (8 *
         VAR_7
         [2])) ^
       0xffffffff) & VAR_8;
      break;
     case 16:
      VAR_7[0] = ~VAR_7[0] & 0xffff;
      VAR_9 = 65535;
      VAR_9 =
       VAR_9 << 16 *
       VAR_7[2];
      VAR_8 = VAR_8 | VAR_9;
      VAR_7[0] =
       ((VAR_7[0] << (16 *
         VAR_7
         [2])) ^
       0xffffffff) & VAR_8;
      break;
     case 31:
      break;
     default:
      FUNC_1(VAR_4,
       " chan spec wrong");
      return -VAR_2;
     }
     FUNC_3(VAR_7[0],
      VAR_3->i_IobaseAmcc +
      VAR_0 +
      VAR_1);
    }
    else {
     FUNC_4("\nSpecified channel not supported\n");
    }
   }
  }
  else {
   FUNC_4("\nSpecified functionality does not exist\n");
   return -VAR_2;
  }
 }
 return VAR_6->n;
}
