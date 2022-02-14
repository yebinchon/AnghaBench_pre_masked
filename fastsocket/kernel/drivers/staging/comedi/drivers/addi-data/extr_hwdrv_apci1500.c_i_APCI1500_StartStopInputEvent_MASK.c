
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
 scalar_t__ VAR_5 ;
 int VAR_6 ;


 TYPE_1__* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (char*) ;

int FUNC_3(struct comedi_device *VAR_10, struct comedi_subdevice *VAR_11,
 struct comedi_insn *VAR_12, unsigned int *VAR_13)
{
 int VAR_14 = 0, VAR_15 =
  0, VAR_16;
 switch (VAR_13[0]) {
 case 129:




  if (VAR_13[1] == 1 || VAR_13[1] == 2) {




   if (VAR_13[1] == 1) {



    if (VAR_8 == 1) {



     FUNC_1(VAR_0, VAR_7->iobase + VAR_5);



     FUNC_1(0xF0,
      VAR_7->iobase +
      VAR_5);




     FUNC_1(VAR_2, VAR_7->iobase + VAR_5);



     FUNC_1(0xC0,
      VAR_7->iobase +
      VAR_5);



     FUNC_1(VAR_0, VAR_7->iobase + VAR_5);



     FUNC_1(0xF4,
      VAR_7->iobase +
      VAR_5);
     VAR_14 = 1;
     FUNC_1(VAR_3,
      VAR_7->iobase +
      VAR_5);
     VAR_16 =
      FUNC_0(VAR_7->iobase +
      VAR_5);



     FUNC_1(VAR_1, VAR_7->iobase + VAR_5);



     FUNC_1(0xD0,
      VAR_7->iobase +
      VAR_5);

    }
    else {
     FUNC_2("\nEvent 1 not initialised\n");
     return -VAR_6;
    }
   }
   if (VAR_13[1] == 2) {

    if (VAR_9 == 1) {



     FUNC_1(VAR_0, VAR_7->iobase + VAR_5);



     FUNC_1(0x74,
      VAR_7->iobase +
      VAR_5);




     FUNC_1(VAR_4, VAR_7->iobase + VAR_5);



     FUNC_1(0xC0,
      VAR_7->iobase +
      VAR_5);



     FUNC_1(VAR_0, VAR_7->iobase + VAR_5);



     FUNC_1(0xF4,
      VAR_7->iobase +
      VAR_5);



     FUNC_1(VAR_1, VAR_7->iobase + VAR_5);



     FUNC_1(0xD0,
      VAR_7->iobase +
      VAR_5);
     VAR_15 = 1;
    }
    else {
     FUNC_2("\nEvent 2 not initialised\n");
     return -VAR_6;
    }
   }
  }
  else {
   FUNC_2("\nThe port parameter is in error\n");
   return -VAR_6;
  }

  break;

 case 128:




  if (VAR_13[1] == 1 || VAR_13[1] == 2) {




   if (VAR_13[1] == 1) {



    if (VAR_8 == 1) {



     FUNC_1(VAR_0, VAR_7->iobase + VAR_5);



     FUNC_1(0xF0,
      VAR_7->iobase +
      VAR_5);




     FUNC_1(VAR_2, VAR_7->iobase + VAR_5);



     FUNC_1(0xE0,
      VAR_7->iobase +
      VAR_5);



     FUNC_1(VAR_0, VAR_7->iobase + VAR_5);



     FUNC_1(0xF4,
      VAR_7->iobase +
      VAR_5);
     VAR_14 = 0;
    }
    else {
     FUNC_2("\nEvent 1 not initialised\n");
     return -VAR_6;
    }
   }
   if (VAR_13[1] == 2) {



    if (VAR_9 == 1) {



     FUNC_1(VAR_0, VAR_7->iobase + VAR_5);



     FUNC_1(0x74,
      VAR_7->iobase +
      VAR_5);




     FUNC_1(VAR_4, VAR_7->iobase + VAR_5);



     FUNC_1(0xE0,
      VAR_7->iobase +
      VAR_5);



     FUNC_1(VAR_0, VAR_7->iobase + VAR_5);



     FUNC_1(0xF4,
      VAR_7->iobase +
      VAR_5);
     VAR_15 = 0;
    }
    else {
     FUNC_2("\nEvent 2 not initialised\n");
     return -VAR_6;
    }
   }

  }
  else {
   FUNC_2("\nThe port parameter is in error\n");
   return -VAR_6;
  }
  break;
 default:
  FUNC_2("\nThe option of START/STOP logic does not exist\n");
  return -VAR_6;
 }

 return VAR_12->n;
}
