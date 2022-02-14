
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; scalar_t__* unused; int chanspec; } ;
struct comedi_device {size_t minor; } ;
struct TYPE_7__ {int iobase; int tsk_Current; int i_IobaseAmcc; } ;
struct TYPE_6__ {int * w_GainValue; int * ul_GainFactor; int * ul_CurrentSource; int ul_CurrentSourceCJC; } ;
struct TYPE_5__ {int b_StructInitialized; int i_CJCAvailable; int i_CJCGain; int i_InterruptFlag; unsigned int i_ChannelCount; unsigned int ui_Channel_num; int i_Initialised; unsigned int i_ConnectionType; unsigned int i_ScanType; unsigned int i_ADDIDATAPolarity; unsigned int i_ADDIDATAGain; unsigned int i_ADDIDATAConversionTime; unsigned int i_ADDIDATAConversionTimeUnit; unsigned int i_ADDIDATAType; unsigned int i_ChannelNo; int i_Offset; scalar_t__ i_Sum; scalar_t__ i_Count; TYPE_3__* ui_ScanValueArray; TYPE_3__* s_Module; scalar_t__ i_AutoCalibration; scalar_t__ i_CJCPolarity; } ;


 unsigned int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_4__* VAR_3 ;
 int FUNC_1 (struct comedi_device*,struct comedi_subdevice*,struct comedi_insn*,unsigned int*) ;
 int FUNC_2 (struct comedi_device*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_3__*,int ,int) ;
 int FUNC_5 (unsigned int,int) ;
 int FUNC_6 (char*,...) ;
 TYPE_1__* VAR_4 ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ,TYPE_1__*) ;

int FUNC_9(struct comedi_device *VAR_5, struct comedi_subdevice *VAR_6,
 struct comedi_insn *VAR_7, unsigned int *VAR_8)
{

 unsigned int VAR_9 = 0, VAR_10 = 0;
 unsigned int VAR_11 = 0;
 unsigned int VAR_12 = 0;
 int VAR_13 = 0;
 if (VAR_4[VAR_5->minor].b_StructInitialized != 1) {
  VAR_4[VAR_5->minor].i_CJCAvailable = 1;
  VAR_4[VAR_5->minor].i_CJCPolarity = 0;
  VAR_4[VAR_5->minor].i_CJCGain = 2;
  VAR_4[VAR_5->minor].i_InterruptFlag = 0;
  VAR_4[VAR_5->minor].i_AutoCalibration = 0;
  VAR_4[VAR_5->minor].i_ChannelCount = 0;
  VAR_4[VAR_5->minor].i_Sum = 0;
  VAR_4[VAR_5->minor].ui_Channel_num = 0;
  VAR_4[VAR_5->minor].i_Count = 0;
  VAR_4[VAR_5->minor].i_Initialised = 0;
  VAR_4[VAR_5->minor].b_StructInitialized = 1;


  VAR_4[VAR_5->minor].i_ConnectionType = 0;



  FUNC_4(VAR_4[VAR_5->minor].s_Module, 0,
   sizeof(VAR_4[VAR_5->minor].s_Module[VAR_1]));

  FUNC_8(VAR_3->i_IobaseAmcc,
   &VAR_4[VAR_5->minor]);
 }

 if (VAR_8[0] != 0 && VAR_8[0] != 1 && VAR_8[0] != 2) {
  FUNC_6("\nThe selection of acquisition type is in error\n");
  VAR_13++;
 }
 if (VAR_8[0] == 1) {
  if (VAR_8[14] != 0 && VAR_8[14] != 1 && VAR_8[14] != 2
   && VAR_8[14] != 4) {
   FUNC_6("\n Error in selection of RTD connection type\n");
   VAR_13++;
  }
 }
 if (VAR_8[1] < 0 || VAR_8[1] > 7) {
  FUNC_6("\nThe selection of gain is in error\n");
  VAR_13++;
 }
 if (VAR_8[2] != 0 && VAR_8[2] != 1) {
  FUNC_6("\nThe selection of polarity is in error\n");
  VAR_13++;
 }
 if (VAR_8[3] != 0) {
  FUNC_6("\nThe selection of offset range  is in error\n");
  VAR_13++;
 }
 if (VAR_8[4] != 0 && VAR_8[4] != 1) {
  FUNC_6("\nThe selection of coupling is in error\n");
  VAR_13++;
 }
 if (VAR_8[5] != 0 && VAR_8[5] != 1) {
  FUNC_6("\nThe selection of single/differential mode is in error\n");
  VAR_13++;
 }
 if (VAR_8[8] != 0 && VAR_8[8] != 1 && VAR_8[2] != 2) {
  FUNC_6("\nError in selection of functionality\n");
 }
 if (VAR_8[12] == 0 || VAR_8[12] == 1) {
  if (VAR_8[6] != 20 && VAR_8[6] != 40 && VAR_8[6] != 80
   && VAR_8[6] != 160) {
   FUNC_6("\nThe selection of conversion time reload value is in error\n");
   VAR_13++;
  }
  if (VAR_8[7] != 2) {
   FUNC_6("\nThe selection of conversion time unit  is in error\n");
   VAR_13++;
  }
 }
 if (VAR_8[9] != 0 && VAR_8[9] != 1) {
  FUNC_6("\nThe selection of interrupt enable is in error\n");
  VAR_13++;
 }
 if (VAR_8[11] < 0 || VAR_8[11] > 4) {
  FUNC_6("\nThe selection of module is in error\n");
  VAR_13++;
 }
 if (VAR_8[12] < 0 || VAR_8[12] > 3) {
  FUNC_6("\nThe selection of singlechannel/scan selection is in error\n");
  VAR_13++;
 }
 if (VAR_8[13] < 0 || VAR_8[13] > 16) {
  FUNC_6("\nThe selection of number of channels is in error\n");
  VAR_13++;
 }
 VAR_4[VAR_5->minor].i_ChannelCount = VAR_8[13];
 VAR_4[VAR_5->minor].i_ScanType = VAR_8[12];
 VAR_4[VAR_5->minor].i_ADDIDATAPolarity = VAR_8[2];
 VAR_4[VAR_5->minor].i_ADDIDATAGain = VAR_8[1];
 VAR_4[VAR_5->minor].i_ADDIDATAConversionTime = VAR_8[6];
 VAR_4[VAR_5->minor].i_ADDIDATAConversionTimeUnit = VAR_8[7];
 VAR_4[VAR_5->minor].i_ADDIDATAType = VAR_8[0];

 VAR_4[VAR_5->minor].i_ConnectionType = VAR_8[5];




 FUNC_4(VAR_4[VAR_5->minor].ui_ScanValueArray, 0, (7 + 12) * sizeof(unsigned int));




 while (VAR_4[VAR_5->minor].i_InterruptFlag == 1) {

  FUNC_7(1);







 }


 VAR_11 = FUNC_0(VAR_7->chanspec);




 VAR_4[VAR_5->minor].i_ChannelNo = VAR_11;
 VAR_4[VAR_5->minor].ui_Channel_num = VAR_11;



 if (VAR_8[5] == 0) {
  if (VAR_11 < 0 || VAR_11 > 15) {
   FUNC_6("\nThe Selection of the channel is in error\n");
   VAR_13++;
  }
 }
 else {
  if (VAR_8[14] == 2) {
   if (VAR_11 < 0 || VAR_11 > 3) {
    FUNC_6("\nThe Selection of the channel is in error\n");
    VAR_13++;
   }
  }
  else {
   if (VAR_11 < 0 || VAR_11 > 7) {
    FUNC_6("\nThe Selection of the channel is in error\n");
    VAR_13++;
   }
  }
 }
 if (VAR_8[12] == 0 || VAR_8[12] == 1) {
  switch (VAR_8[5]) {
  case 0:
   if (VAR_11 >= 0 && VAR_11 <= 3) {


    VAR_4[VAR_5->minor].i_Offset = 0;

   }
   if (VAR_11 >= 4 && VAR_11 <= 7) {


    VAR_4[VAR_5->minor].i_Offset = 64;

   }
   if (VAR_11 >= 8 && VAR_11 <= 11) {


    VAR_4[VAR_5->minor].i_Offset = 128;

   }
   if (VAR_11 >= 12 && VAR_11 <= 15) {


    VAR_4[VAR_5->minor].i_Offset = 192;

   }
   break;
  case 1:
   if (VAR_8[14] == 2) {
    if (VAR_11 == 0) {


     VAR_4[VAR_5->minor].i_Offset = 0;

    }
    if (VAR_11 == 1) {


     VAR_4[VAR_5->minor].i_Offset = 64;

    }
    if (VAR_11 == 2) {


     VAR_4[VAR_5->minor].i_Offset = 128;

    }
    if (VAR_11 == 3) {


     VAR_4[VAR_5->minor].i_Offset = 192;

    }



    VAR_4[VAR_5->minor].i_ChannelNo = 0;

    VAR_11 = 0;
    break;
   }
   if (VAR_11 >= 0 && VAR_11 <= 1) {


    VAR_4[VAR_5->minor].i_Offset = 0;

   }
   if (VAR_11 >= 2 && VAR_11 <= 3) {



    VAR_4[VAR_5->minor].i_ChannelNo =
     VAR_4[VAR_5->minor].i_ChannelNo -
     2;
    VAR_4[VAR_5->minor].i_Offset = 64;

    VAR_11 = VAR_11 - 2;
   }
   if (VAR_11 >= 4 && VAR_11 <= 5) {



    VAR_4[VAR_5->minor].i_ChannelNo =
     VAR_4[VAR_5->minor].i_ChannelNo -
     4;
    VAR_4[VAR_5->minor].i_Offset = 128;

    VAR_11 = VAR_11 - 4;
   }
   if (VAR_11 >= 6 && VAR_11 <= 7) {



    VAR_4[VAR_5->minor].i_ChannelNo =
     VAR_4[VAR_5->minor].i_ChannelNo -
     6;
    VAR_4[VAR_5->minor].i_Offset = 192;

    VAR_11 = VAR_11 - 6;
   }
   break;

  default:
   FUNC_6("\n This selection of polarity does not exist\n");
   VAR_13++;
  }
 }
 else {
  switch (VAR_8[11]) {
  case 1:


   VAR_4[VAR_5->minor].i_Offset = 0;

   break;
  case 2:


   VAR_4[VAR_5->minor].i_Offset = 64;

   break;
  case 3:


   VAR_4[VAR_5->minor].i_Offset = 128;

   break;
  case 4:


   VAR_4[VAR_5->minor].i_Offset = 192;

   break;
  default:
   FUNC_6("\nError in module selection\n");
   VAR_13++;
  }
 }
 if (VAR_13) {
  FUNC_2(VAR_5);
  return -VAR_0;
 }

 if (VAR_4[VAR_5->minor].i_ScanType != 1) {



  VAR_4[VAR_5->minor].i_Count = 0;
  VAR_4[VAR_5->minor].i_Sum = 0;

 }

 VAR_9 =
  VAR_8[1] | (VAR_8[2] << 6) | (VAR_8[5] << 7) | (VAR_8[3] << 8) |
  (VAR_8[4] << 9);


 while (((FUNC_3(VAR_3->iobase + VAR_4[VAR_5->minor].i_Offset +
     12) >> 19) & 1) != 1) ;






 FUNC_5(0 | VAR_11,
  VAR_3->iobase + VAR_4[VAR_5->minor].i_Offset + 0x4);




 while (((FUNC_3(VAR_3->iobase + VAR_4[VAR_5->minor].i_Offset +
     12) >> 19) & 1) != 1) ;






 FUNC_5(0, VAR_3->iobase + VAR_4[VAR_5->minor].i_Offset + 0x0);




 while (((FUNC_3(VAR_3->iobase + VAR_4[VAR_5->minor].i_Offset +
     12) >> 19) & 1) != 1) ;







 FUNC_5(VAR_9,
  VAR_3->iobase + VAR_4[VAR_5->minor].i_Offset + 0x0);







 VAR_10 = FUNC_3(VAR_3->iobase + VAR_4[VAR_5->minor].i_Offset + 12);




 while (((FUNC_3(VAR_3->iobase + VAR_4[VAR_5->minor].i_Offset +
     12) >> 19) & 1) != 1) ;




 FUNC_5((VAR_10 & 0xFFF9FFFF),
  VAR_3->iobase + VAR_4[VAR_5->minor].i_Offset + 12);


 if (VAR_8[9] == 1) {
  VAR_3->tsk_Current = VAR_2;


  VAR_4[VAR_5->minor].i_InterruptFlag = 1;

 }
 else {


  VAR_4[VAR_5->minor].i_InterruptFlag = 0;

 }



 VAR_4[VAR_5->minor].i_Initialised = 1;




 if (VAR_4[VAR_5->minor].i_ScanType == 1)

 {


  VAR_4[VAR_5->minor].i_Sum =
   VAR_4[VAR_5->minor].i_Sum + 1;


  VAR_7->unused[0] = 0;
  FUNC_1(VAR_5, VAR_6, VAR_7, &VAR_12);
 }

 return VAR_7->n;
}
