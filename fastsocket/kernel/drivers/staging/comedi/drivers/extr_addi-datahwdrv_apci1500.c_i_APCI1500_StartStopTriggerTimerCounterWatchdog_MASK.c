
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; } ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ iobase; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;



 int VAR_4 ;



 TYPE_1__* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int,scalar_t__) ;
 int FUNC_1 (char*) ;

int FUNC_2(struct comedi_device *VAR_13,
 struct comedi_subdevice *VAR_14, struct comedi_insn *VAR_15, unsigned int *VAR_16)
{
 int VAR_17;

 switch (VAR_16[0]) {
 case 133:
  switch (VAR_16[1]) {
  case 130:
   if (VAR_7 == 1) {
    if (VAR_10 == 1) {
     VAR_17 = 0xC4;
    }
    else {
     VAR_17 = 0xE4;
    }



    VAR_6 = 1;



    FUNC_0(VAR_0,
     VAR_5->iobase +
     VAR_3);
    FUNC_0(VAR_17,
     VAR_5->iobase +
     VAR_3);
   }
   else {
    FUNC_1("\nCounter/Timer1 not configured\n");
    return -VAR_4;
   }
   break;

  case 129:
   FUNC_0(VAR_0,
    VAR_5->iobase +
    VAR_3);
   FUNC_0(0x00,
    VAR_5->iobase +
    VAR_3);
   VAR_6 = 0;
   break;

  case 128:
   if (VAR_7 == 1) {
    if (VAR_6 == 1) {




     VAR_17 = 0x6;
    }
    else {




     VAR_17 = 0x2;
    }




    FUNC_0(VAR_0,
     VAR_5->iobase +
     VAR_3);
    FUNC_0(VAR_17,
     VAR_5->iobase +
     VAR_3);
   }
   else {
    FUNC_1("\nCounter/Timer1 not configured\n");
    return -VAR_4;
   }
   break;

  default:
   FUNC_1("\nThe specified option for start/stop/trigger does not exist\n");
   return -VAR_4;
  }
  break;

 case 132:
  switch (VAR_16[1]) {
  case 130:
   if (VAR_9 == 1) {
    if (VAR_10 == 1) {
     VAR_17 = 0xC4;
    }
    else {
     VAR_17 = 0xE4;
    }



    VAR_8 = 1;



    FUNC_0(VAR_1,
     VAR_5->iobase +
     VAR_3);
    FUNC_0(VAR_17,
     VAR_5->iobase +
     VAR_3);
   }
   else {
    FUNC_1("\nCounter/Timer2 not configured\n");
    return -VAR_4;
   }
   break;

  case 129:
   FUNC_0(VAR_1,
    VAR_5->iobase +
    VAR_3);
   FUNC_0(0x00,
    VAR_5->iobase +
    VAR_3);
   VAR_8 = 0;
   break;
  case 128:
   if (VAR_9 == 1) {
    if (VAR_8 == 1) {




     VAR_17 = 0x6;
    }
    else {




     VAR_17 = 0x2;
    }




    FUNC_0(VAR_1,
     VAR_5->iobase +
     VAR_3);
    FUNC_0(VAR_17,
     VAR_5->iobase +
     VAR_3);
   }
   else {
    FUNC_1("\nCounter/Timer2 not configured\n");
    return -VAR_4;
   }
   break;
  default:
   FUNC_1("\nThe specified option for start/stop/trigger does not exist\n");
   return -VAR_4;
  }
  break;
 case 131:
  switch (VAR_16[1]) {
  case 130:
   if (VAR_12 == 1) {

    if (VAR_10 == 1) {
     VAR_17 = 0xC4;
    }
    else {
     VAR_17 = 0xE4;
    }



    VAR_11 = 1;



    FUNC_0(VAR_2,
     VAR_5->iobase +
     VAR_3);
    FUNC_0(VAR_17,
     VAR_5->iobase +
     VAR_3);

   }
   else {
    FUNC_1("\nWatchdog/Counter3 not configured\n");
    return -VAR_4;
   }
   break;

  case 129:
   FUNC_0(VAR_2,
    VAR_5->iobase +
    VAR_3);
   FUNC_0(0x00,
    VAR_5->iobase +
    VAR_3);
   VAR_11 = 0;
   break;

  case 128:
   switch (VAR_16[2]) {
   case 0:
    if (VAR_12 == 1) {
     if (VAR_11 == 1) {




      VAR_17 = 0x6;
     }
     else {




      VAR_17 = 0x2;
     }




     FUNC_0(VAR_2,
      VAR_5->iobase +
      VAR_3);
     FUNC_0(VAR_17,
      VAR_5->iobase +
      VAR_3);
    }
    else {
     FUNC_1("\nCounter3 not configured\n");
     return -VAR_4;
    }
    break;
   case 1:

    if (VAR_12 == 1) {




     FUNC_0(VAR_2,
      VAR_5->iobase +
      VAR_3);
     FUNC_0(0x6,
      VAR_5->iobase +
      VAR_3);
    }
    else {
     FUNC_1("\nWatchdog 3 not configured\n");
     return -VAR_4;
    }
    break;
   default:
    FUNC_1("\nWrong choice of watchdog/counter3\n");
    return -VAR_4;
   }
   break;
  default:
   FUNC_1("\nThe specified option for start/stop/trigger does not exist\n");
   return -VAR_4;
  }
  break;
 default:
  FUNC_1("\nThe specified choice for counter/watchdog/timer does not exist\n");
  return -VAR_4;
 }
 return VAR_15->n;
}
