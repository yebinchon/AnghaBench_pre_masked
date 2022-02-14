
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_device {size_t minor; } ;
struct TYPE_4__ {int tsk_Current; scalar_t__ iobase; } ;
struct TYPE_3__ {int i_ScanType; unsigned int* ui_InterruptChannelValue; size_t i_Count; unsigned int ui_Channel_num; int i_Sum; int i_ChannelCount; int i_InterruptFlag; int i_ADDIDATAGain; int i_CJCGain; int i_ADDIDATAPolarity; int i_CJCPolarity; scalar_t__ i_Offset; int i_ADDIDATAType; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (struct comedi_device*) ;
 int FUNC_1 (struct comedi_device*,unsigned int*) ;
 int FUNC_2 (struct comedi_device*,unsigned int*) ;
 int FUNC_3 (struct comedi_device*,unsigned int*) ;
 int FUNC_4 (struct comedi_device*,unsigned int*) ;
 int FUNC_5 (struct comedi_device*,unsigned int*) ;
 int FUNC_6 (int ) ;
 TYPE_1__* VAR_2 ;
 int FUNC_7 (int ,int ,int ) ;

void FUNC_8(int VAR_3, void *VAR_4)
{
 struct comedi_device *VAR_5 = VAR_4;
 unsigned int VAR_6 = 0;
 unsigned int VAR_7 = 0;
 int VAR_8 = 0;
 int VAR_9 = 0;
 unsigned int VAR_10 = 0;
 unsigned int VAR_11 = 0;
 unsigned int VAR_12 = 0;
 int VAR_13;


 int VAR_14 = 0;





 switch (VAR_2[VAR_5->minor].i_ScanType) {
 case 0:
 case 1:

  switch (VAR_2[VAR_5->minor].i_ADDIDATAType) {
  case 0:
  case 1:





   VAR_6 =
    FUNC_6(VAR_1->iobase +
    VAR_2[VAR_5->minor].i_Offset + 16);
   if ((VAR_6 & 0x2) == 0x2) {

    VAR_8 =
     ((FUNC_6(VAR_1->iobase +
       VAR_2[VAR_5->
        minor].
       i_Offset +
       12) & 0x00060000) >>
     17);
    VAR_12 =
     FUNC_6(VAR_1->iobase +
     VAR_2[VAR_5->minor].i_Offset + 28);




    if (VAR_8 == 0) {

     VAR_2[VAR_5->minor].
      ui_InterruptChannelValue
      [VAR_2[VAR_5->minor].
      i_Count + 0] = VAR_12;
     FUNC_5
      (VAR_5, &VAR_10);
    }




    if (VAR_8 == 1) {






     VAR_2[VAR_5->minor].
      ui_InterruptChannelValue
      [VAR_2[VAR_5->minor].
      i_Count + 1] = VAR_12;




     FUNC_4(VAR_5,
      &VAR_10);
    }




    if (VAR_8 == 2) {





     VAR_2[VAR_5->minor].
      ui_InterruptChannelValue
      [VAR_2[VAR_5->minor].
      i_Count + 2] = VAR_12;

     if (VAR_2[VAR_5->minor].
      i_ScanType == 1) {


      VAR_2[VAR_5->minor].
       i_InterruptFlag = 0;



      VAR_2[VAR_5->minor].
       i_Count =
       VAR_2[VAR_5->
       minor].i_Count + 9;

     }
     else {

      VAR_2[VAR_5->minor].
       i_Count = 0;
     }

     if (VAR_2[VAR_5->minor].
      i_ScanType != 1) {
      VAR_14 = FUNC_7(VAR_0, VAR_1->tsk_Current, 0);
     }
     else {

      if (VAR_2[VAR_5->minor].
       i_ChannelCount ==
       VAR_2[VAR_5->
        minor].i_Sum) {
       FUNC_7(VAR_0, VAR_1->tsk_Current, 0);
      }
     }
    }
   }

   break;

  case 2:





   VAR_6 =
    FUNC_6(VAR_1->iobase +
    VAR_2[VAR_5->minor].i_Offset + 16);




   if ((VAR_6 & 0x2) == 0x2) {


    VAR_9 =
     ((FUNC_6(VAR_1->iobase +
       VAR_2[VAR_5->
        minor].
       i_Offset +
       4) & 0x00000400) >> 10);


    VAR_8 =
     ((FUNC_6(VAR_1->iobase +
       VAR_2[VAR_5->
        minor].
       i_Offset +
       12) & 0x00060000) >>
     17);






    VAR_7 =
     FUNC_6(VAR_1->iobase +
     VAR_2[VAR_5->minor].i_Offset + 24);

    VAR_2[VAR_5->minor].ui_Channel_num =
     VAR_7;






    VAR_11 =
     FUNC_6(VAR_1->iobase +
     VAR_2[VAR_5->minor].i_Offset + 28);





    if ((VAR_8 == 0)
     && (VAR_9 == 0)) {

     VAR_2[VAR_5->minor].
      ui_InterruptChannelValue
      [VAR_2[VAR_5->minor].
      i_Count + 0] =
      VAR_11;




     FUNC_3(VAR_5,
      &VAR_10);

    }





    if ((VAR_9 == 1)
     && (VAR_8 == 0)) {

     VAR_2[VAR_5->minor].
      ui_InterruptChannelValue
      [VAR_2[VAR_5->minor].
      i_Count + 3] =
      VAR_11;




     FUNC_5
      (VAR_5, &VAR_10);
    }





    if ((VAR_8 == 1)
     && (VAR_9 == 0)) {

     VAR_2[VAR_5->minor].
      ui_InterruptChannelValue
      [VAR_2[VAR_5->minor].
      i_Count + 1] =
      VAR_11;




     FUNC_4(VAR_5,
      &VAR_10);

    }





    if ((VAR_8 == 2)
     && (VAR_9 == 0)) {

     VAR_2[VAR_5->minor].
      ui_InterruptChannelValue
      [VAR_2[VAR_5->minor].
      i_Count + 2] =
      VAR_11;
     if (VAR_2[VAR_5->minor].
      i_CJCPolarity !=
      VAR_2[VAR_5->minor].
      i_ADDIDATAPolarity) {
      VAR_13 = 1;
     }
     else {

      if (VAR_2[VAR_5->minor].
       i_CJCGain ==
       VAR_2[VAR_5->
        minor].
       i_ADDIDATAGain) {
       VAR_13
        = 0;
      }
      else {
       VAR_13
        = 1;
      }
     }
     if (VAR_13 == 1) {



      FUNC_2(VAR_5,
       &VAR_10);

     }
     else {


      VAR_2[VAR_5->minor].
       ui_InterruptChannelValue
       [VAR_2[VAR_5->
        minor].i_Count +
       4] = 0;
      VAR_2[VAR_5->minor].
       ui_InterruptChannelValue
       [VAR_2[VAR_5->
        minor].i_Count +
       5] = 0;
     }
    }





    if ((VAR_8 == 1)
     && (VAR_9 == 1)) {

     VAR_2[VAR_5->minor].
      ui_InterruptChannelValue
      [VAR_2[VAR_5->minor].
      i_Count + 4] =
      VAR_11;




     FUNC_1(VAR_5,
      &VAR_10);

    }





    if ((VAR_8 == 2)
     && (VAR_9 == 1)) {

     VAR_2[VAR_5->minor].
      ui_InterruptChannelValue
      [VAR_2[VAR_5->minor].
      i_Count + 5] =
      VAR_11;


     if (VAR_2[VAR_5->minor].
      i_ScanType == 1) {


      VAR_2[VAR_5->minor].
       i_InterruptFlag = 0;



      VAR_2[VAR_5->minor].
       i_Count =
       VAR_2[VAR_5->
       minor].i_Count + 9;

     }
     else {

      VAR_2[VAR_5->minor].
       i_Count = 0;
     }


     if (VAR_2[VAR_5->minor].
      i_ScanType != 1) {
      FUNC_7(VAR_0, VAR_1->tsk_Current, 0);
     }
     else {

      if (VAR_2[VAR_5->minor].
       i_ChannelCount ==
       VAR_2[VAR_5->
        minor].i_Sum) {
       FUNC_7(VAR_0, VAR_1->tsk_Current, 0);

      }
     }
    }

   }
   break;
  }
  break;
 case 2:
 case 3:
  FUNC_0(VAR_5);
  break;
 }
 return;
}
