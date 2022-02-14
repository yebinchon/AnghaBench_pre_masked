
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
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;



 int VAR_10 ;
 TYPE_1__* VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 unsigned int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (char*) ;

int FUNC_3(struct comedi_device *VAR_18,
 struct comedi_subdevice *VAR_19, struct comedi_insn *VAR_20, unsigned int *VAR_21)
{
 int VAR_22;
 switch (VAR_21[0]) {
 case 130:

  if (VAR_13 == 1) {
   if (VAR_12 == 1) {




    VAR_22 = 0xC;
   }
   else {




    VAR_22 = 0x8;
   }




   FUNC_1(VAR_0,
    VAR_11->iobase +
    VAR_9);
   FUNC_1(VAR_22,
    VAR_11->iobase +
    VAR_9);




   FUNC_1(VAR_3,
    VAR_11->iobase +
    VAR_9);
   VAR_21[0] =
    FUNC_0(VAR_11->iobase +
    VAR_9);
   VAR_21[0] = VAR_21[0] << 8;
   VAR_21[0] = VAR_21[0] & 0xff00;
   FUNC_1(VAR_4,
    VAR_11->iobase +
    VAR_9);
   VAR_21[0] =
    VAR_21[0] | FUNC_0(VAR_11->iobase +
    VAR_9);
  }
  else {
   FUNC_2("\nTimer/Counter1 not configured\n");
   return -VAR_10;
  }
  break;
 case 129:

  if (VAR_15 == 1) {
   if (VAR_14 == 1) {




    VAR_22 = 0xC;
   }
   else {




    VAR_22 = 0x8;
   }




   FUNC_1(VAR_1,
    VAR_11->iobase +
    VAR_9);
   FUNC_1(VAR_22,
    VAR_11->iobase +
    VAR_9);




   FUNC_1(VAR_5,
    VAR_11->iobase +
    VAR_9);
   VAR_21[0] =
    FUNC_0(VAR_11->iobase +
    VAR_9);
   VAR_21[0] = VAR_21[0] << 8;
   VAR_21[0] = VAR_21[0] & 0xff00;
   FUNC_1(VAR_6,
    VAR_11->iobase +
    VAR_9);
   VAR_21[0] =
    VAR_21[0] | FUNC_0(VAR_11->iobase +
    VAR_9);
  }
  else {
   FUNC_2("\nTimer/Counter2 not configured\n");
   return -VAR_10;
  }
  break;
 case 128:

  if (VAR_17 == 1) {
   if (VAR_16 == 1) {




    VAR_22 = 0xC;
   }
   else {




    VAR_22 = 0x8;
   }




   FUNC_1(VAR_2,
    VAR_11->iobase +
    VAR_9);
   FUNC_1(VAR_22,
    VAR_11->iobase +
    VAR_9);




   FUNC_1(VAR_7,
    VAR_11->iobase +
    VAR_9);
   VAR_21[0] =
    FUNC_0(VAR_11->iobase +
    VAR_9);
   VAR_21[0] = VAR_21[0] << 8;
   VAR_21[0] = VAR_21[0] & 0xff00;
   FUNC_1(VAR_8,
    VAR_11->iobase +
    VAR_9);
   VAR_21[0] =
    VAR_21[0] | FUNC_0(VAR_11->iobase +
    VAR_9);
  }
  else {
   FUNC_2("\nWatchdogCounter3 not configured\n");
   return -VAR_10;
  }
  break;
 default:
  FUNC_2("\nThe choice of timer/counter/watchdog does not exist\n");
  return -VAR_10;
 }

 return VAR_20->n;
}
