
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ iobase; scalar_t__ b_OutputMemoryStatus; } ;


 scalar_t__ VAR_0 ;
 unsigned int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct comedi_device*,char*) ;
 TYPE_1__* VAR_2 ;
 unsigned int FUNC_2 (scalar_t__) ;
 int FUNC_3 (unsigned int,scalar_t__) ;
 int FUNC_4 (char*,...) ;

int FUNC_5(struct comedi_device *VAR_3, struct comedi_subdevice *VAR_4,
 struct comedi_insn *VAR_5, unsigned int *VAR_6)
{
 unsigned int VAR_7, VAR_8;
 unsigned int VAR_9 = FUNC_0(VAR_5->chanspec);

 FUNC_4("EL311003 : @=%x\n", VAR_2->iobase + VAR_0);

 if (VAR_2->b_OutputMemoryStatus) {
  VAR_7 = FUNC_2(VAR_2->iobase + VAR_0);

 }
 else {
  VAR_7 = 0;
 }
 if (VAR_6[3] == 0) {
  if (VAR_6[1] == 0) {
   VAR_6[0] = (VAR_6[0] << VAR_9) | VAR_7;
   FUNC_3(VAR_6[0], VAR_2->iobase + VAR_0);

   FUNC_4("EL311003 : d=%d @=%x\n", VAR_6[0],
    VAR_2->iobase + VAR_0);

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

    case 7:
     VAR_6[0] = VAR_6[0] | VAR_7;
     break;

    default:
     FUNC_1(VAR_3, " chan spec wrong");
     return -VAR_1;

    }

    FUNC_3(VAR_6[0],
     VAR_2->iobase + VAR_0);

    FUNC_4("EL311003 : d=%d @=%x\n", VAR_6[0],
     VAR_2->iobase + VAR_0);
   }
   else {
    FUNC_4("\nSpecified channel not supported\n");
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
    VAR_6[0] = (VAR_6[0] << VAR_9) ^ 0xff;
    VAR_6[0] = VAR_6[0] & VAR_7;
    FUNC_3(VAR_6[0],
     VAR_2->iobase + VAR_0);

    FUNC_4("EL311003 : d=%d @=%x\n", VAR_6[0],
     VAR_2->iobase + VAR_0);

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
       0xff) & VAR_7;
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
       0xff) & VAR_7;
      break;

     case 7:
      break;

     default:
      FUNC_1(VAR_3,
       " chan spec wrong");
      return -VAR_1;

     }

     FUNC_3(VAR_6[0],
      VAR_2->iobase +
      VAR_0);

     FUNC_4("EL311003 : d=%d @=%x\n",
      VAR_6[0],
      VAR_2->iobase +
      VAR_0);
    }
    else {
     FUNC_4("\nSpecified channel not supported\n");
    }
   }
  }
  else {
   FUNC_4("\nSpecified functionality does not exist\n");
   return -VAR_1;
  }
 }
 return (VAR_5->n);;
}
