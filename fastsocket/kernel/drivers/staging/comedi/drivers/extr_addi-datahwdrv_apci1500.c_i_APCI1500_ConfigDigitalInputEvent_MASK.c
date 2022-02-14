
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; } ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ iobase; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 TYPE_1__* VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 unsigned int VAR_18 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (char*) ;

int FUNC_3(struct comedi_device *VAR_19,
 struct comedi_subdevice *VAR_20, struct comedi_insn *VAR_21, unsigned int *VAR_22)
{
 int VAR_23 = 0, VAR_24 = 0, VAR_25 = 0;
 int VAR_26 = 0, VAR_27 = 0, VAR_28 = 0;
 int VAR_29 = 0, VAR_30;
 int VAR_31;




 FUNC_1(VAR_4,
  VAR_15->iobase + VAR_13);



 FUNC_1(0x00, VAR_15->iobase + VAR_13);

 if (VAR_22[0] == 1) {
  VAR_26 = 8;
 }
 else {
  if (VAR_22[0] == 2) {
   VAR_26 = 6;
  }
  else {
   FUNC_2("\nThe specified port event  does not exist\n");
   return -VAR_14;
  }
 }
 switch (VAR_22[1]) {
 case 0:
  VAR_22[1] = VAR_0;
  break;
 case 1:
  VAR_22[1] = VAR_1;
  break;
 case 2:
  VAR_22[1] = VAR_2;
  break;
 default:
  FUNC_2("\nThe specified interrupt logic does not exist\n");
  return -VAR_14;
 }

 VAR_18 = VAR_22[1];
 for (VAR_27 = VAR_26, VAR_31 = 0; VAR_27 > 0; VAR_27--, VAR_31++) {
  VAR_28 = VAR_22[2 + VAR_31];
  switch (VAR_28) {
  case 0:
   VAR_25 =
    VAR_25 | (1 << (VAR_26 - VAR_27));
   break;
  case 1:
   VAR_25 =
    VAR_25 | (1 << (VAR_26 - VAR_27));
   VAR_23 =
    VAR_23 | (1 << (VAR_26 -
     VAR_27));
   break;
  case 2:
   VAR_25 =
    VAR_25 | (1 << (VAR_26 - VAR_27));
   VAR_24 =
    VAR_24 | (1 << (VAR_26 -
     VAR_27));
   break;
  case 3:
   VAR_25 =
    VAR_25 | (1 << (VAR_26 - VAR_27));
   VAR_23 =
    VAR_23 | (1 << (VAR_26 -
     VAR_27));
   VAR_24 =
    VAR_24 | (1 << (VAR_26 -
     VAR_27));
   break;
  case 4:
   VAR_24 =
    VAR_24 | (1 << (VAR_26 -
     VAR_27));
   break;
  case 5:
   break;
  default:
   FUNC_2("\nThe option indicated in the event mask does not exist\n");
   return -VAR_14;
  }
 }

 if (VAR_22[0] == 1) {




  if (VAR_22[1] == VAR_0 ||
   VAR_22[1] == VAR_1 ||
   VAR_22[1] == VAR_2) {





   if (VAR_22[1] == VAR_2
    && VAR_24 != 0) {



    FUNC_2("\nTransition error on an OR PRIORITY logic\n");
    return -VAR_14;
   }






   if (VAR_22[1] == VAR_0) {
    for (VAR_27 = 0; VAR_27 < 8; VAR_27++) {
     VAR_29 =
      VAR_29 +
      ((VAR_24 >>
       VAR_27) & 0x1);

    }

    if (VAR_29 > 1) {



     FUNC_2("\n Transition error on an AND logic\n");
     return -VAR_14;
    }
   }




   FUNC_1(VAR_3,
    VAR_15->iobase +
    VAR_13);



   FUNC_1(0xF0,
    VAR_15->iobase +
    VAR_13);



   FUNC_1(VAR_6,
    VAR_15->iobase +
    VAR_13);
   FUNC_1(VAR_23,
    VAR_15->iobase +
    VAR_13);





   FUNC_1(VAR_5,
    VAR_15->iobase +
    VAR_13);
   FUNC_1(VAR_25,
    VAR_15->iobase +
    VAR_13);




   FUNC_1(VAR_7,
    VAR_15->iobase +
    VAR_13);
   FUNC_1(VAR_24,
    VAR_15->iobase +
    VAR_13);





   FUNC_1(VAR_8,
    VAR_15->iobase +
    VAR_13);
   VAR_30 =
    FUNC_0(VAR_15->iobase +
    VAR_13);





   FUNC_1(VAR_8,
    VAR_15->iobase +
    VAR_13);





   VAR_30 = (VAR_30 & 0xF9) | VAR_22[1] | 0x9;
   FUNC_1(VAR_30,
    VAR_15->iobase +
    VAR_13);

   VAR_16 = 1;





   FUNC_1(VAR_3,
    VAR_15->iobase +
    VAR_13);



   FUNC_1(0xF4,
    VAR_15->iobase +
    VAR_13);

  }
  else {
   FUNC_2("\nThe choice for interrupt logic does not exist\n");
   return -VAR_14;
  }
 }





 if (VAR_22[0] == 2) {




  if (VAR_22[1] == VAR_1) {



   FUNC_1(VAR_3,
    VAR_15->iobase +
    VAR_13);



   FUNC_1(0x74,
    VAR_15->iobase +
    VAR_13);




   FUNC_1(VAR_12,
    VAR_15->iobase +
    VAR_13);
   VAR_30 =
    FUNC_0(VAR_15->iobase +
    VAR_13);





   FUNC_1(VAR_12,
    VAR_15->iobase +
    VAR_13);
   VAR_30 = VAR_30 & 0xF9;
   FUNC_1(VAR_30,
    VAR_15->iobase +
    VAR_13);





   VAR_25 = (VAR_25 | 0xC0);
   VAR_23 = (VAR_23 | 0xC0);
   VAR_24 = (VAR_24 | 0xC0);




   FUNC_1(VAR_10,
    VAR_15->iobase +
    VAR_13);
   FUNC_1(VAR_23,
    VAR_15->iobase +
    VAR_13);




   FUNC_1(VAR_11,
    VAR_15->iobase +
    VAR_13);
   FUNC_1(VAR_24,
    VAR_15->iobase +
    VAR_13);





   FUNC_1(VAR_9,
    VAR_15->iobase +
    VAR_13);
   FUNC_1(VAR_25,
    VAR_15->iobase +
    VAR_13);





   FUNC_1(VAR_12,
    VAR_15->iobase +
    VAR_13);
   VAR_30 =
    FUNC_0(VAR_15->iobase +
    VAR_13);




   FUNC_1(VAR_12,
    VAR_15->iobase +
    VAR_13);
   VAR_30 = (VAR_30 & 0xF9) | 4;
   FUNC_1(VAR_30,
    VAR_15->iobase +
    VAR_13);

   VAR_17 = 1;




   FUNC_1(VAR_3,
    VAR_15->iobase +
    VAR_13);




   FUNC_1(0xF4,
    VAR_15->iobase +
    VAR_13);
  }
  else {
   FUNC_2("\nThe choice for interrupt logic does not exist\n");
   return -VAR_14;
  }
 }

 return VAR_21->n;
}
