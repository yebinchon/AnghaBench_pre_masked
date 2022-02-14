
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; } ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ iobase; scalar_t__ i_IobaseAddon; int tsk_Current; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 unsigned int VAR_20 ;
 unsigned int VAR_21 ;
 unsigned int VAR_22 ;
 unsigned int VAR_23 ;
 unsigned int VAR_24 ;
 scalar_t__ VAR_25 ;



 int VAR_26 ;
 int VAR_27 ;
 TYPE_1__* VAR_28 ;
 unsigned int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 unsigned int VAR_32 ;
 int VAR_33 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (unsigned int,scalar_t__) ;
 int FUNC_3 (char*) ;

int FUNC_4(struct comedi_device *VAR_34,
 struct comedi_subdevice *VAR_35, struct comedi_insn *VAR_36, unsigned int *VAR_37)
{
 int VAR_38, VAR_39;

 VAR_28->tsk_Current = VAR_27;


 if (VAR_37[0] == 0 || VAR_37[0] == 1 || VAR_37[0] == 2) {
  FUNC_2(VAR_37[0], VAR_28->i_IobaseAddon + VAR_0);
 }
 else {
  if (VAR_37[0] != 3) {
   FUNC_3("\nThe option for input clock selection does not exist\n");
   return -VAR_26;
  }
 }

 switch (VAR_37[1]) {
 case 130:

  switch (VAR_37[2]) {
  case 0:
   VAR_37[2] = VAR_2;
   break;
  case 1:
   VAR_37[2] = VAR_23;
   break;
  default:
   FUNC_3("\nThis choice is not a timer nor a counter\n");
   return -VAR_26;
  }


  switch (VAR_37[4]) {
  case 0:
   VAR_37[4] = VAR_1;
   break;
  case 1:
   VAR_37[4] = VAR_20;
   break;
  default:
   FUNC_3("\nThis option for single/continuous mode does not exist\n");
   return -VAR_26;
  }

  VAR_38 = VAR_37[2] | VAR_37[4] | 7;




  if ((VAR_37[3] >= 0) && (VAR_37[3] <= 65535)) {
   if (VAR_37[7] == VAR_4
    || VAR_37[7] == VAR_3) {




    FUNC_1(VAR_8,
     VAR_28->iobase +
     VAR_25);



    FUNC_1(VAR_38,
     VAR_28->iobase +
     VAR_25);





    FUNC_1(VAR_10,
     VAR_28->iobase +
     VAR_25);





    FUNC_1(VAR_37[3],
     VAR_28->iobase +
     VAR_25);





    FUNC_1(VAR_9,
     VAR_28->iobase +
     VAR_25);





    VAR_37[3] = VAR_37[3] >> 8;
    FUNC_1(VAR_37[3],
     VAR_28->iobase +
     VAR_25);





    FUNC_1(VAR_19,
     VAR_28->iobase +
     VAR_25);





    VAR_39 =
     FUNC_0(VAR_28->iobase +
     VAR_25);





    VAR_39 =
     VAR_39 | 0x40;




    FUNC_1(VAR_19,
     VAR_28->iobase +
     VAR_25);




    FUNC_1(VAR_39,
     VAR_28->iobase +
     VAR_25);





    FUNC_1(VAR_7,
     VAR_28->iobase +
     VAR_25);





    FUNC_1(0x0,
     VAR_28->iobase +
     VAR_25);




    FUNC_1(VAR_7,
     VAR_28->iobase +
     VAR_25);




    FUNC_1(0x2,
     VAR_28->iobase +
     VAR_25);
   }
   else {
    FUNC_3("\nError in selection of interrupt enable or disable\n");
    return -VAR_26;
   }
  }
  else {
   FUNC_3("\nError in selection of reload value\n");
   return -VAR_26;
  }
  VAR_32 = VAR_37[7];
  VAR_30 = 1;
  break;

 case 129:
  switch (VAR_37[2]) {
  case 0:
   VAR_37[2] = VAR_2;
   break;
  case 1:
   VAR_37[2] = VAR_23;
   break;
  default:
   FUNC_3("\nThis choice is not a timer nor a counter\n");
   return -VAR_26;
  }


  switch (VAR_37[4]) {
  case 0:
   VAR_37[4] = VAR_1;
   break;
  case 1:
   VAR_37[4] = VAR_20;
   break;
  default:
   FUNC_3("\nThis option for single/continuous mode does not exist\n");
   return -VAR_26;
  }


  switch (VAR_37[5]) {
  case 0:
   VAR_37[5] = VAR_22;
   break;
  case 1:
   VAR_37[5] = VAR_6;
   break;
  default:
   FUNC_3("\nThis choice for software or hardware trigger does not exist\n");
   return -VAR_26;
  }


  switch (VAR_37[6]) {
  case 0:
   VAR_37[6] = VAR_21;
   break;
  case 1:
   VAR_37[6] = VAR_5;
   break;
  default:
   FUNC_3("\nThis choice for software or hardware gate does not exist\n");
   return -VAR_26;
  }

  VAR_38 = VAR_37[2] | VAR_37[4] | VAR_37[5] | VAR_37[6] | 7;





  if ((VAR_37[3] >= 0) && (VAR_37[3] <= 65535)) {
   if (VAR_37[7] == VAR_4
    || VAR_37[7] == VAR_3) {




    FUNC_1(VAR_12,
     VAR_28->iobase +
     VAR_25);



    FUNC_1(VAR_38,
     VAR_28->iobase +
     VAR_25);





    FUNC_1(VAR_14,
     VAR_28->iobase +
     VAR_25);





    FUNC_1(VAR_37[3],
     VAR_28->iobase +
     VAR_25);





    FUNC_1(VAR_13,
     VAR_28->iobase +
     VAR_25);





    VAR_37[3] = VAR_37[3] >> 8;
    FUNC_1(VAR_37[3],
     VAR_28->iobase +
     VAR_25);





    FUNC_1(VAR_19,
     VAR_28->iobase +
     VAR_25);





    VAR_39 =
     FUNC_0(VAR_28->iobase +
     VAR_25);





    VAR_39 =
     VAR_39 | 0x20;




    FUNC_1(VAR_19,
     VAR_28->iobase +
     VAR_25);




    FUNC_1(VAR_39,
     VAR_28->iobase +
     VAR_25);





    FUNC_1(VAR_11,
     VAR_28->iobase +
     VAR_25);





    FUNC_1(0x0,
     VAR_28->iobase +
     VAR_25);




    FUNC_1(VAR_11,
     VAR_28->iobase +
     VAR_25);




    FUNC_1(0x2,
     VAR_28->iobase +
     VAR_25);
   }
   else {
    FUNC_3("\nError in selection of interrupt enable or disable\n");
    return -VAR_26;
   }
  }
  else {
   FUNC_3("\nError in selection of reload value\n");
   return -VAR_26;
  }
  VAR_32 = VAR_37[7];
  VAR_31 = 1;
  break;

 case 128:
  switch (VAR_37[2]) {
  case 0:
   VAR_37[2] = VAR_2;
   break;
  case 1:
   VAR_37[2] = VAR_24;
   break;
  default:
   FUNC_3("\nThis choice is not a watchdog nor a counter\n");
   return -VAR_26;
  }


  switch (VAR_37[4]) {
  case 0:
   VAR_37[4] = VAR_1;
   break;
  case 1:
   VAR_37[4] = VAR_20;
   break;
  default:
   FUNC_3("\nThis option for single/continuous mode does not exist\n");
   return -VAR_26;
  }


  switch (VAR_37[6]) {
  case 0:
   VAR_37[6] = VAR_21;
   break;
  case 1:
   VAR_37[6] = VAR_5;
   break;
  default:
   FUNC_3("\nThis choice for software or hardware gate does not exist\n");
   return -VAR_26;
  }





  if (VAR_37[2] == VAR_24) {





   VAR_38 = VAR_37[2] | VAR_37[4] | 0x54;
  }
  else {
   VAR_38 = VAR_37[2] | VAR_37[4] | VAR_37[6] | 7;
  }




  if ((VAR_37[3] >= 0) && (VAR_37[3] <= 65535)) {
   if (VAR_37[7] == VAR_4
    || VAR_37[7] == VAR_3) {




    FUNC_1(VAR_16,
     VAR_28->iobase +
     VAR_25);



    FUNC_1(VAR_38,
     VAR_28->iobase +
     VAR_25);





    FUNC_1(VAR_18,
     VAR_28->iobase +
     VAR_25);





    FUNC_1(VAR_37[3],
     VAR_28->iobase +
     VAR_25);





    FUNC_1(VAR_17,
     VAR_28->iobase +
     VAR_25);





    VAR_37[3] = VAR_37[3] >> 8;
    FUNC_1(VAR_37[3],
     VAR_28->iobase +
     VAR_25);





    FUNC_1(VAR_19,
     VAR_28->iobase +
     VAR_25);





    VAR_39 =
     FUNC_0(VAR_28->iobase +
     VAR_25);





    VAR_39 =
     VAR_39 | 0x10;




    FUNC_1(VAR_19,
     VAR_28->iobase +
     VAR_25);




    FUNC_1(VAR_39,
     VAR_28->iobase +
     VAR_25);




    if (VAR_37[2] == VAR_2) {





     FUNC_1(VAR_15,
      VAR_28->iobase +
      VAR_25);



     FUNC_1(0x0,
      VAR_28->iobase +
      VAR_25);






     FUNC_1(VAR_15,
      VAR_28->iobase +
      VAR_25);



     FUNC_1(0x2,
      VAR_28->iobase +
      VAR_25);

    }

   }
   else {
    FUNC_3("\nError in selection of interrupt enable or disable\n");
    return -VAR_26;
   }
  }
  else {
   FUNC_3("\nError in selection of reload value\n");
   return -VAR_26;
  }
  VAR_32 = VAR_37[7];
  VAR_33 = 1;
  break;

 default:
  FUNC_3("\nThe specified counter\timer option does not exist\n");
 }
 VAR_29 = VAR_37[2];
 return VAR_36->n;
}
