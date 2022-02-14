
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int* unused; int n; } ;
struct comedi_device {size_t minor; } ;
struct TYPE_2__ {scalar_t__ i_Initialised; unsigned int* ui_InterruptChannelValue; size_t i_Count; int i_ADDIDATAType; int i_InterruptFlag; int i_CJCAvailable; int i_AutoCalibration; int i_ScanType; int i_Sum; int ui_Channel_num; int i_ADDIDATAGain; int i_CJCGain; int i_ADDIDATAPolarity; int i_CJCPolarity; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct comedi_device*,int ,unsigned int*,unsigned int*,unsigned int*) ;
 int FUNC_1 (struct comedi_device*,struct comedi_subdevice*,struct comedi_insn*,unsigned int*) ;
 int FUNC_2 (struct comedi_device*,unsigned int*) ;
 int FUNC_3 (struct comedi_device*,unsigned int*) ;
 int FUNC_4 (struct comedi_device*,unsigned int*) ;
 int FUNC_5 (struct comedi_device*,unsigned int*) ;
 int FUNC_6 (struct comedi_device*,unsigned int*) ;
 int FUNC_7 (struct comedi_device*) ;
 int FUNC_8 (char*,...) ;
 TYPE_1__* VAR_2 ;

int FUNC_9(struct comedi_device *VAR_3, struct comedi_subdevice *VAR_4,
 struct comedi_insn *VAR_5, unsigned int *VAR_6)
{
 unsigned int VAR_7 = 0;
 int VAR_8;
 int VAR_9 = 0;



 if (VAR_2[VAR_3->minor].i_Initialised == 0)

 {
  FUNC_7(VAR_3);
  return -VAR_0;
 }





 switch (VAR_5->unused[0]) {
 case 0:

  FUNC_1(VAR_3, VAR_4, VAR_5,
   &VAR_7);


  VAR_2[VAR_3->minor].
   ui_InterruptChannelValue[VAR_2[VAR_3->minor].
   i_Count + 0] = VAR_7;



  FUNC_0(VAR_3,
   VAR_2[VAR_3->minor].ui_Channel_num,
   &VAR_2[VAR_3->minor].
   ui_InterruptChannelValue[VAR_2[VAR_3->minor].
    i_Count + 6],
   &VAR_2[VAR_3->minor].
   ui_InterruptChannelValue[VAR_2[VAR_3->minor].
    i_Count + 7],
   &VAR_2[VAR_3->minor].
   ui_InterruptChannelValue[VAR_2[VAR_3->minor].
    i_Count + 8]);
  if ((VAR_2[VAR_3->minor].i_ADDIDATAType == 2)
   && (VAR_2[VAR_3->minor].i_InterruptFlag == VAR_1)
   && (VAR_2[VAR_3->minor].i_CJCAvailable == 1))

  {
   FUNC_4(VAR_3, &VAR_7);


   VAR_2[VAR_3->minor].
    ui_InterruptChannelValue[VAR_2[VAR_3->
     minor].i_Count + 3] = VAR_7;

  }
  else {


   VAR_2[VAR_3->minor].
    ui_InterruptChannelValue[VAR_2[VAR_3->
     minor].i_Count + 3] = 0;

  }



  if ((VAR_2[VAR_3->minor].i_AutoCalibration == VAR_1)
   && (VAR_2[VAR_3->minor].i_InterruptFlag == VAR_1))

  {
   FUNC_6(VAR_3,
    &VAR_7);


   VAR_2[VAR_3->minor].
    ui_InterruptChannelValue[VAR_2[VAR_3->
     minor].i_Count + 1] = VAR_7;

   FUNC_5(VAR_3,
    &VAR_7);


   VAR_2[VAR_3->minor].
    ui_InterruptChannelValue[VAR_2[VAR_3->
     minor].i_Count + 2] = VAR_7;

  }



  if ((VAR_2[VAR_3->minor].i_ADDIDATAType == 2)
   && (VAR_2[VAR_3->minor].i_InterruptFlag == VAR_1)
   && (VAR_2[VAR_3->minor].i_CJCAvailable == 1))

  {
   if (VAR_2[VAR_3->minor].i_CJCPolarity !=
    VAR_2[VAR_3->minor].i_ADDIDATAPolarity)

   {
    VAR_8 = 1;
   }
   else {


    if (VAR_2[VAR_3->minor].i_CJCGain ==
     VAR_2[VAR_3->minor].i_ADDIDATAGain)

    {
     VAR_8 = 0;
    }
    else {
     VAR_8 = 1;
    }
   }
   if (VAR_8 == 1) {
    FUNC_3(VAR_3,
     &VAR_7);


    VAR_2[VAR_3->minor].
     ui_InterruptChannelValue[VAR_2
     [VAR_3->minor].i_Count + 4] =
     VAR_7;


    FUNC_2(VAR_3, &VAR_7);



    VAR_2[VAR_3->minor].
     ui_InterruptChannelValue[VAR_2
     [VAR_3->minor].i_Count + 5] =
     VAR_7;

   }
   else {




    VAR_2[VAR_3->minor].
     ui_InterruptChannelValue[VAR_2
     [VAR_3->minor].i_Count + 4] = 0;
    VAR_2[VAR_3->minor].
     ui_InterruptChannelValue[VAR_2
     [VAR_3->minor].i_Count + 5] = 0;

   }
  }



  if (VAR_2[VAR_3->minor].i_ScanType != 1) {

   VAR_2[VAR_3->minor].i_Count = 0;
  }
  else {



   VAR_2[VAR_3->minor].i_Count =
    VAR_2[VAR_3->minor].i_Count + 9;

  }


  if ((VAR_2[VAR_3->minor].i_ScanType == 1)
   && (VAR_2[VAR_3->minor].i_InterruptFlag == 1)) {



   VAR_2[VAR_3->minor].i_Count =
    VAR_2[VAR_3->minor].i_Count - 9;

  }

  if (VAR_2[VAR_3->minor].i_ScanType == 0) {
   VAR_6[0] =
    VAR_2[VAR_3->minor].
    ui_InterruptChannelValue[0];
   VAR_6[1] =
    VAR_2[VAR_3->minor].
    ui_InterruptChannelValue[1];
   VAR_6[2] =
    VAR_2[VAR_3->minor].
    ui_InterruptChannelValue[2];
   VAR_6[3] =
    VAR_2[VAR_3->minor].
    ui_InterruptChannelValue[3];
   VAR_6[4] =
    VAR_2[VAR_3->minor].
    ui_InterruptChannelValue[4];
   VAR_6[5] =
    VAR_2[VAR_3->minor].
    ui_InterruptChannelValue[5];



   FUNC_0(VAR_3,
    VAR_2[VAR_3->minor].ui_Channel_num,
    &VAR_6[6], &VAR_6[7], &VAR_6[8]);

  }
  break;
 case 1:

  for (VAR_9 = 0; VAR_9 < VAR_5->n; VAR_9++) {

   VAR_6[VAR_9] =
    VAR_2[VAR_3->minor].
    ui_InterruptChannelValue[VAR_9];
  }




  VAR_2[VAR_3->minor].i_Count = 0;
  VAR_2[VAR_3->minor].i_Sum = 0;
  if (VAR_2[VAR_3->minor].i_ScanType == 1) {


   VAR_2[VAR_3->minor].i_Initialised = 0;
   VAR_2[VAR_3->minor].i_InterruptFlag = 0;

  }
  break;
 default:
  FUNC_8("\nThe parameters passed are in error\n");
  FUNC_7(VAR_3);
  return -VAR_0;
 }

 return VAR_5->n;
}
