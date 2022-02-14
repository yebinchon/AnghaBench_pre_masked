
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ expires; } ;
struct wb35_reg {int U1BC_LEDConfigure; } ;
struct hw_data {int SoftwareSet; int LED_control; int LED_Blinking; scalar_t__ NullPacketCount; int time_count; TYPE_1__ LEDTimer; scalar_t__ LED_LinkOn; int TxByteCountLast; int RxByteCountLast; int LED_Scanning; scalar_t__ CurrentRadioHw; scalar_t__ CurrentRadioSw; scalar_t__ SurpriseRemove; struct wb35_reg reg; } ;
struct wbsoft_priv {int TxByteCount; int RxByteCount; struct hw_data sHwData; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int* VAR_3 ;
 int* VAR_4 ;
 int FUNC_0 (struct hw_data*,int,int) ;
 int FUNC_1 (struct wbsoft_priv*,int) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(unsigned long VAR_6)
{
 struct wbsoft_priv *VAR_7 = (struct wbsoft_priv *)VAR_6;
 struct hw_data *VAR_8 = &VAR_7->sHwData;
 struct wb35_reg *VAR_9 = &VAR_8->reg;
 u32 VAR_10 = (VAR_8->SoftwareSet & VAR_1) >> VAR_2;
 u32 VAR_11 = 500, VAR_12, VAR_13;
 VAR_12 = 0;

 if (VAR_8->SurpriseRemove)
  return;

 if (VAR_8->LED_control) {
  VAR_13 = VAR_8->LED_control & 0xff;
  if (VAR_13 == 5)
  {
   VAR_11 = 100;
   VAR_13 = (VAR_8->LED_control >> 8) & 0xff;
   switch (VAR_13) {
   case 1:
    VAR_8->LED_Blinking %= 3;
    VAR_12 = 0x1010;
    if (VAR_8->LED_Blinking == 2)
     VAR_12 = 0;
    break;
   case 2:
    VAR_8->LED_Blinking %= 2;
    VAR_12 = 0x0010;
    if (VAR_8->LED_Blinking)
     VAR_12 = 0;
    break;
   case 3:
    VAR_8->LED_Blinking %= 15;
    VAR_12 = 0x0010;
    if ((VAR_8->LED_Blinking >= 9) || (VAR_8->LED_Blinking % 2))
     VAR_12 = 0;
    break;
   case 4:
    VAR_12 = 0x1000;
    if (VAR_8->LED_Blinking >= 3000)
     VAR_12 = 0;
    break;
   }
   VAR_8->LED_Blinking++;

   VAR_9->U1BC_LEDConfigure = VAR_12;
   if (VAR_10 != 7)
   {
    VAR_9->U1BC_LEDConfigure |= (VAR_12 & 0xff) << 8;
    VAR_9->U1BC_LEDConfigure |= (VAR_12 & 0xff00) >> 8;
   }
   FUNC_0(VAR_8, 0x03bc, VAR_9->U1BC_LEDConfigure);
  }
 } else if (VAR_8->CurrentRadioSw || VAR_8->CurrentRadioHw)
 {
  if (VAR_9->U1BC_LEDConfigure & 0x1010) {
   VAR_9->U1BC_LEDConfigure &= ~0x1010;
   FUNC_0(VAR_8, 0x03bc, VAR_9->U1BC_LEDConfigure);
  }
 } else {
  switch (VAR_10) {
  case 4:
   if (!VAR_8->LED_LinkOn)
   {

    if (VAR_8->LED_Scanning) {
     if (VAR_8->LED_Blinking == 0) {
      VAR_9->U1BC_LEDConfigure |= 0x10;
      FUNC_0(VAR_8, 0x03bc, VAR_9->U1BC_LEDConfigure);
      VAR_8->LED_Blinking = 1;
      VAR_11 = 300;
     } else {
      VAR_9->U1BC_LEDConfigure &= ~0x10;
      FUNC_0(VAR_8, 0x03bc, VAR_9->U1BC_LEDConfigure);
      VAR_8->LED_Blinking = 0;
      VAR_11 = 300;
     }
    } else {

     if (VAR_9->U1BC_LEDConfigure & 0x10) {
      VAR_9->U1BC_LEDConfigure &= ~0x10;
      FUNC_0(VAR_8, 0x03bc, VAR_9->U1BC_LEDConfigure);
     }
    }
   } else {

    if ((VAR_9->U1BC_LEDConfigure & 0x10) == 0) {
     VAR_9->U1BC_LEDConfigure |= 0x10;
     FUNC_0(VAR_8, 0x03bc, VAR_9->U1BC_LEDConfigure);
    }
   }
   break;

  case 6:
   if (!VAR_8->LED_LinkOn)
   {

    if (VAR_8->LED_Scanning) {
     if (VAR_8->LED_Blinking == 0) {
      VAR_9->U1BC_LEDConfigure &= ~0xf;
      VAR_9->U1BC_LEDConfigure |= 0x10;
      FUNC_0(VAR_8, 0x03bc, VAR_9->U1BC_LEDConfigure);
      VAR_8->LED_Blinking = 1;
      VAR_11 = 300;
     } else {
      VAR_9->U1BC_LEDConfigure &= ~0x1f;
      FUNC_0(VAR_8, 0x03bc, VAR_9->U1BC_LEDConfigure);
      VAR_8->LED_Blinking = 0;
      VAR_11 = 300;
     }
    } else {

     VAR_12 = VAR_9->U1BC_LEDConfigure;
     VAR_9->U1BC_LEDConfigure &= ~0x1f;
     if (VAR_4[(VAR_8->LED_Blinking % 30)]) {
      VAR_9->U1BC_LEDConfigure |= 0x10;
      VAR_9->U1BC_LEDConfigure |=
          VAR_4[(VAR_8->LED_Blinking % 30)];
     }
     VAR_8->LED_Blinking++;
     if (VAR_9->U1BC_LEDConfigure != VAR_12)
      FUNC_0(VAR_8, 0x03bc, VAR_9->U1BC_LEDConfigure);
     VAR_11 = 100;
    }
   } else {

    if ((VAR_9->U1BC_LEDConfigure & 0x10) == 0) {
     VAR_9->U1BC_LEDConfigure |= 0x10;
     FUNC_0(VAR_8, 0x03bc, VAR_9->U1BC_LEDConfigure);
    }
   }
   break;

  case 5:
   if (!VAR_8->LED_LinkOn)
   {

    if (VAR_8->LED_Scanning) {
     if (VAR_8->LED_Blinking == 0) {
      VAR_9->U1BC_LEDConfigure |=
          0x1000;
      FUNC_0(VAR_8, 0x03bc, VAR_9->U1BC_LEDConfigure);
      VAR_8->LED_Blinking = 1;
      VAR_11 = 300;
     } else {
      VAR_9->U1BC_LEDConfigure &=
          ~0x1000;
      FUNC_0(VAR_8, 0x03bc, VAR_9->U1BC_LEDConfigure);
      VAR_8->LED_Blinking = 0;
      VAR_11 = 300;
     }
    } else {

     if (VAR_9->U1BC_LEDConfigure & 0x1000) {
      VAR_9->U1BC_LEDConfigure &=
          ~0x1000;
      FUNC_0(VAR_8, 0x03bc, VAR_9->U1BC_LEDConfigure);
     }
    }
   } else {

    if ((VAR_7->RxByteCount !=
         VAR_8->RxByteCountLast)
        || (VAR_7->TxByteCount !=
     VAR_8->TxByteCountLast)) {
     if ((VAR_9->U1BC_LEDConfigure & 0x3000) !=
         0x3000) {
      VAR_9->U1BC_LEDConfigure |=
          0x3000;
      FUNC_0(VAR_8, 0x03bc, VAR_9->U1BC_LEDConfigure);
     }

     VAR_8->RxByteCountLast =
         VAR_7->RxByteCount;
     VAR_8->TxByteCountLast =
         VAR_7->TxByteCount;
     VAR_11 = 200;
    } else {

     if ((VAR_9->U1BC_LEDConfigure & 0x3000) !=
         0x1000) {
      VAR_9->U1BC_LEDConfigure &=
          ~0x3000;
      VAR_9->U1BC_LEDConfigure |=
          0x1000;
      FUNC_0(VAR_8, 0x03bc, VAR_9->U1BC_LEDConfigure);
     }
    }
   }
   break;

  default:
   if ((VAR_9->U1BC_LEDConfigure & 0x3000) != 0x3000) {
    VAR_9->U1BC_LEDConfigure |= 0x3000;
    FUNC_0(VAR_8, 0x03bc,
           VAR_9->U1BC_LEDConfigure);
   }

   if (VAR_8->LED_Blinking) {

    VAR_9->U1BC_LEDConfigure &= ~0x0f;
    VAR_9->U1BC_LEDConfigure |= 0x10;
    VAR_9->U1BC_LEDConfigure |=
        VAR_3[(VAR_8->LED_Blinking - 1) % 20];
    FUNC_0(VAR_8, 0x03bc,
           VAR_9->U1BC_LEDConfigure);

    VAR_8->LED_Blinking += 2;
    if (VAR_8->LED_Blinking < 40)
     VAR_11 = 100;
    else {
     VAR_8->LED_Blinking = 0;
     VAR_9->U1BC_LEDConfigure &= ~0x0f;
     FUNC_0(VAR_8, 0x03bc,
            VAR_9->U1BC_LEDConfigure);
    }
    break;
   }

   if (VAR_8->LED_LinkOn) {
    if (!(VAR_9->U1BC_LEDConfigure & 0x10))
    {

     VAR_9->U1BC_LEDConfigure |= 0x10;
     VAR_8->LED_Blinking = 1;
     VAR_11 = 50;
    }
   } else {
    if (VAR_9->U1BC_LEDConfigure & 0x10)
    {
     VAR_9->U1BC_LEDConfigure &= ~0x10;
     FUNC_0(VAR_8, 0x03bc,
            VAR_9->U1BC_LEDConfigure);
    }
   }
   break;
  }


  if (VAR_8->LED_LinkOn) {
   VAR_8->NullPacketCount += VAR_11;
   if (VAR_8->NullPacketCount >=
       VAR_0) {
    VAR_8->NullPacketCount = 0;
   }
  }
 }

 VAR_8->time_count += VAR_11;
 FUNC_1(VAR_7, VAR_8->time_count);
 VAR_8->LEDTimer.expires = VAR_5 + FUNC_3(VAR_11);
 FUNC_2(&VAR_8->LEDTimer);
}
