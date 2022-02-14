
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct str_MainHeader {unsigned char b_Nfunctions; TYPE_1__* s_Functions; void* w_HeaderSize; } ;
struct str_DigitalOutputHeader {int w_Nchannel; } ;
struct str_DigitalInputHeader {int w_Nchannel; } ;
struct str_AnalogInputHeader {int w_Nchannel; int b_Resolution; scalar_t__ w_MinDelayTiming; scalar_t__ w_MinConvertTiming; int b_HasDma; } ;
struct comedi_device {int dummy; } ;
struct TYPE_6__ {int b_Resolution; int w_Nchannel; } ;
typedef TYPE_2__ str_AnalogOutputHeader ;
struct TYPE_7__ {unsigned int i_DoMaxdata; int i_NbrAiChannel; unsigned int ui_MinAcquisitiontimeNs; unsigned int ui_MinDelaytimeNs; unsigned int i_AiMaxdata; unsigned int i_AoMaxdata; int i_Timer; int i_NbrAoChannel; int i_Dma; int pc_DriverName; int i_NbrDoChannel; int i_NbrDiChannel; } ;
struct TYPE_5__ {unsigned char b_Type; void* w_Address; } ;
 int FUNC_0 (unsigned short,char*,void*,struct str_AnalogInputHeader*) ;
 int FUNC_1 (unsigned short,char*,void*,TYPE_2__*) ;
 int FUNC_2 (unsigned short,char*,void*,struct str_DigitalInputHeader*) ;
 int FUNC_3 (unsigned short,char*,void*,struct str_DigitalOutputHeader*) ;
 int FUNC_4 (int ,char*) ;
 TYPE_3__* VAR_0 ;
 void* FUNC_5 (unsigned short,char*,int) ;

int FUNC_6(unsigned short VAR_1,
 char *VAR_2, struct comedi_device *VAR_3)
{
 unsigned short VAR_4, VAR_5, VAR_6 = 0;
 unsigned int VAR_7;
 struct str_MainHeader VAR_8;
 struct str_DigitalInputHeader VAR_9;
 struct str_DigitalOutputHeader VAR_10;

 str_AnalogOutputHeader VAR_11;
 struct str_AnalogInputHeader VAR_12;


 VAR_8.w_HeaderSize =
  FUNC_5(VAR_1, VAR_2,
  0x100 + 8);


 VAR_4 = FUNC_5(VAR_1,
  VAR_2, 0x100 + 10);
 VAR_8.b_Nfunctions = (unsigned char) VAR_4 & 0x00FF;


 for (VAR_5 = 0; VAR_5 < VAR_8.b_Nfunctions; VAR_5++) {

  VAR_4 = FUNC_5(VAR_1,
   VAR_2, 0x100 + 12 + VAR_6);
  VAR_8.s_Functions[VAR_5].b_Type = (unsigned char) VAR_4 & 0x3F;
  VAR_6 = VAR_6 + 2;

  VAR_8.s_Functions[VAR_5].w_Address =
   FUNC_5(VAR_1,
   VAR_2, 0x100 + 12 + VAR_6);
  VAR_6 = VAR_6 + 2;
 }


 for (VAR_5 = 0; VAR_5 < VAR_8.b_Nfunctions; VAR_5++) {

  switch (VAR_8.s_Functions[VAR_5].b_Type) {
  case 132:
   FUNC_2(VAR_1,
    VAR_2,
    VAR_8.s_Functions[VAR_5].w_Address,
    &VAR_9);
   VAR_0->i_NbrDiChannel =
    VAR_9.w_Nchannel;
   break;

  case 131:
   FUNC_3(VAR_1,
    VAR_2,
    VAR_8.s_Functions[VAR_5].w_Address,
    &VAR_10);
   VAR_0->i_NbrDoChannel =
    VAR_10.w_Nchannel;
   VAR_7 = 0xffffffff;
   VAR_0->i_DoMaxdata =
    VAR_7 >> (32 - VAR_0->i_NbrDoChannel);
   break;

  case 134:
   FUNC_0(VAR_1,
    VAR_2,
    VAR_8.s_Functions[VAR_5].w_Address,
    &VAR_12);
   if (!(FUNC_4(VAR_0->pc_DriverName, "apci3200")))
    VAR_0->i_NbrAiChannel =
     VAR_12.w_Nchannel * 4;
   else
    VAR_0->i_NbrAiChannel =
     VAR_12.w_Nchannel;
   VAR_0->i_Dma = VAR_12.b_HasDma;
   VAR_0->ui_MinAcquisitiontimeNs =
    (unsigned int) VAR_12.w_MinConvertTiming *
    1000;
   VAR_0->ui_MinDelaytimeNs =
    (unsigned int) VAR_12.w_MinDelayTiming *
    1000;
   VAR_7 = 0xffff;
   VAR_0->i_AiMaxdata =
    VAR_7 >> (16 -
    VAR_12.b_Resolution);
   break;

  case 133:
   FUNC_1(VAR_1,
    VAR_2,
    VAR_8.s_Functions[VAR_5].w_Address,
    &VAR_11);
   VAR_0->i_NbrAoChannel =
    VAR_11.w_Nchannel;
   VAR_7 = 0xffff;
   VAR_0->i_AoMaxdata =
    VAR_7 >> (16 -
    VAR_11.b_Resolution);
   break;

  case 130:
   VAR_0->i_Timer = 1;
   break;

  case 128:
   VAR_0->i_Timer = 1;
   break;

  case 129:
   VAR_0->i_Timer = 1;
  }
 }

 return 0;
}
