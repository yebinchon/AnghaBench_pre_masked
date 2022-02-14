
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_34__ TYPE_9__ ;
typedef struct TYPE_33__ TYPE_8__ ;
typedef struct TYPE_32__ TYPE_7__ ;
typedef struct TYPE_31__ TYPE_6__ ;
typedef struct TYPE_30__ TYPE_5__ ;
typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;
typedef struct TYPE_25__ TYPE_17__ ;
typedef struct TYPE_24__ TYPE_16__ ;
typedef struct TYPE_23__ TYPE_15__ ;
typedef struct TYPE_22__ TYPE_14__ ;
typedef struct TYPE_21__ TYPE_13__ ;
typedef struct TYPE_20__ TYPE_12__ ;
typedef struct TYPE_19__ TYPE_11__ ;
typedef struct TYPE_18__ TYPE_10__ ;


struct TYPE_22__ {unsigned char dw_SetRegister; TYPE_13__* s_PulseEncoderInfo; } ;
struct TYPE_19__ {scalar_t__ b_CycleMode; scalar_t__ b_InterruptMask; } ;
struct TYPE_18__ {TYPE_9__* s_TorCounterInfo; } ;
struct TYPE_33__ {TYPE_7__* s_PWMInfo; } ;
struct TYPE_31__ {scalar_t__ b_CDAEnable; scalar_t__ b_FctSelection; } ;
struct TYPE_28__ {int b_ModeRegister2; int b_ModeRegister3; int b_ModeRegister1; } ;
struct TYPE_29__ {TYPE_3__ s_ByteModeRegister; int dw_ModeRegister1_2_3_4; } ;
struct TYPE_27__ {int b_IndexInterruptOccur; } ;
struct TYPE_30__ {TYPE_4__ s_ModeRegister; TYPE_2__ s_InitFlag; } ;
struct TYPE_26__ {unsigned int b_InterruptMask; } ;
union str_ModuleInfo {TYPE_14__ s_PulseEncoderModuleInfo; TYPE_11__ s_ChronoModuleInfo; TYPE_10__ s_TorCounterModuleInfo; TYPE_8__ s_PWMModuleInfo; TYPE_6__ s_CDAModuleInfo; TYPE_5__ s_SiemensCounterInfo; TYPE_1__ s_82X54ModuleInfo; } ;
struct comedi_device {int dummy; } ;
struct TYPE_34__ {scalar_t__ b_InterruptEnable; } ;
struct TYPE_32__ {scalar_t__ b_InterruptEnable; } ;
struct TYPE_24__ {size_t ui_Write; int ul_InterruptOccur; TYPE_15__* s_FIFOInterruptParameters; } ;
struct TYPE_20__ {int* dw_MolduleConfiguration; scalar_t__ ui_Address; } ;
struct TYPE_25__ {int tsk_Current; TYPE_16__ s_InterruptParameters; TYPE_12__ s_BoardInfos; union str_ModuleInfo* s_ModuleInfo; } ;
struct TYPE_23__ {unsigned int ul_OldInterruptMask; int b_OldModuleMask; unsigned int ul_OldCounterLatchValue; } ;
struct TYPE_21__ {int b_PulseEncoderInit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 TYPE_17__* VAR_14 ;
 unsigned int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int ,int ) ;

void FUNC_4(int VAR_15, void *VAR_16)
{
 struct comedi_device *VAR_17 = VAR_16;
 unsigned char VAR_18 = 0;
 unsigned char VAR_19 = 0;
 unsigned char VAR_20 = 0;
 unsigned char VAR_21 = 0;
 unsigned char VAR_22 = 0;
 unsigned int VAR_23;
 unsigned int VAR_24 = 0;
 unsigned int VAR_25 = 0;
 unsigned int VAR_26;
 unsigned int VAR_27;

 union str_ModuleInfo *VAR_28;

 FUNC_2("APCI1710 Interrupt\n");
 for (VAR_18 = 0; VAR_18 < 4; VAR_18++, VAR_28++) {




  VAR_28 = &VAR_14->s_ModuleInfo[VAR_18];





  if ((VAR_14->s_BoardInfos.
    dw_MolduleConfiguration[VAR_18] &
    0xFFFF0000UL) == VAR_1) {


   VAR_26 = FUNC_0(VAR_14->s_BoardInfos.
    ui_Address + 12 + (64 * VAR_18));





   if ((VAR_26 & VAR_28->
     s_82X54ModuleInfo.
     b_InterruptMask) != 0) {
    VAR_14->
     s_InterruptParameters.
     s_FIFOInterruptParameters[VAR_14->
     s_InterruptParameters.
     ui_Write].
     ul_OldInterruptMask =
     (VAR_26 &
     VAR_28->s_82X54ModuleInfo.
     b_InterruptMask) << 4;

    VAR_14->
     s_InterruptParameters.
     s_FIFOInterruptParameters[VAR_14->
     s_InterruptParameters.
     ui_Write].
     b_OldModuleMask = 1 << VAR_18;

    VAR_14->
     s_InterruptParameters.
     s_FIFOInterruptParameters[VAR_14->
     s_InterruptParameters.
     ui_Write].ul_OldCounterLatchValue = 0;

    VAR_14->
     s_InterruptParameters.
     ul_InterruptOccur++;





    VAR_14->
     s_InterruptParameters.
     ui_Write = (VAR_14->
     s_InterruptParameters.
     ui_Write + 1) % VAR_11;

    VAR_19 = 1;





    FUNC_3(VAR_13, VAR_14->tsk_Current, 0);

   }
  }





  if ((VAR_14->s_BoardInfos.
    dw_MolduleConfiguration[VAR_18] &
    0xFFFF0000UL) == VAR_7) {

   VAR_24 = FUNC_0(VAR_14->s_BoardInfos.
    ui_Address + (64 * VAR_18));





   if ((VAR_24 & 0x22) && (VAR_28->
     s_SiemensCounterInfo.
     s_ModeRegister.
     s_ByteModeRegister.
     b_ModeRegister2 & 0x80)) {




    if (VAR_24 & 2) {
     VAR_25 =
      FUNC_0(VAR_14->s_BoardInfos.
      ui_Address + 4 +
      (64 * VAR_18));

     VAR_14->
      s_InterruptParameters.
      s_FIFOInterruptParameters
      [VAR_14->s_InterruptParameters.
      ui_Write].ul_OldInterruptMask =
      1UL;

     VAR_14->
      s_InterruptParameters.
      s_FIFOInterruptParameters
      [VAR_14->s_InterruptParameters.
      ui_Write].b_OldModuleMask =
      1 << VAR_18;

     VAR_14->
      s_InterruptParameters.
      s_FIFOInterruptParameters
      [VAR_14->s_InterruptParameters.
      ui_Write].
      ul_OldCounterLatchValue =
      VAR_25;

     VAR_14->
      s_InterruptParameters.
      ul_InterruptOccur++;







     VAR_14->
      s_InterruptParameters.
      ui_Write = (VAR_14->
      s_InterruptParameters.
      ui_Write +
      1) % VAR_11;

     VAR_19 = 1;





     FUNC_3(VAR_13, VAR_14->tsk_Current,
      0);

    }





    if (VAR_24 & 0x20) {

     VAR_25 =
      FUNC_0(VAR_14->s_BoardInfos.
      ui_Address + 8 +
      (64 * VAR_18));

     VAR_14->
      s_InterruptParameters.
      s_FIFOInterruptParameters
      [VAR_14->s_InterruptParameters.
      ui_Write].ul_OldInterruptMask =
      2UL;

     VAR_14->
      s_InterruptParameters.
      s_FIFOInterruptParameters
      [VAR_14->s_InterruptParameters.
      ui_Write].b_OldModuleMask =
      1 << VAR_18;

     VAR_14->
      s_InterruptParameters.
      s_FIFOInterruptParameters
      [VAR_14->s_InterruptParameters.
      ui_Write].
      ul_OldCounterLatchValue =
      VAR_25;

     VAR_14->
      s_InterruptParameters.
      ul_InterruptOccur++;







     VAR_14->
      s_InterruptParameters.
      ui_Write = (VAR_14->
      s_InterruptParameters.
      ui_Write +
      1) % VAR_11;

     VAR_19 = 1;





     FUNC_3(VAR_13, VAR_14->tsk_Current,
      0);

    }
   }

   VAR_24 = FUNC_0(VAR_14->s_BoardInfos.
    ui_Address + 24 + (64 * VAR_18));





   if (VAR_24 & 0x8) {
    VAR_28->
     s_SiemensCounterInfo.
     s_InitFlag.b_IndexInterruptOccur = 1;

    if (VAR_28->
     s_SiemensCounterInfo.
     s_ModeRegister.
     s_ByteModeRegister.
     b_ModeRegister2 &
     VAR_8) {

     FUNC_1(VAR_28->
      s_SiemensCounterInfo.
      s_ModeRegister.
      dw_ModeRegister1_2_3_4,
      VAR_14->s_BoardInfos.
      ui_Address + 20 +
      (64 * VAR_18));
    }





    if ((VAR_28->
      s_SiemensCounterInfo.
      s_ModeRegister.
      s_ByteModeRegister.
      b_ModeRegister3 &
      VAR_6) ==
     VAR_6) {
     VAR_14->s_InterruptParameters.
      s_FIFOInterruptParameters
      [VAR_14->s_InterruptParameters.
      ui_Write].ul_OldInterruptMask =
      4UL;

     VAR_14->
      s_InterruptParameters.
      s_FIFOInterruptParameters
      [VAR_14->s_InterruptParameters.
      ui_Write].b_OldModuleMask =
      1 << VAR_18;

     VAR_14->
      s_InterruptParameters.
      s_FIFOInterruptParameters
      [VAR_14->s_InterruptParameters.
      ui_Write].
      ul_OldCounterLatchValue =
      VAR_25;

     VAR_14->
      s_InterruptParameters.
      ul_InterruptOccur++;







     VAR_14->
      s_InterruptParameters.
      ui_Write = (VAR_14->
      s_InterruptParameters.
      ui_Write +
      1) % VAR_11;

     VAR_19 = 1;





     FUNC_3(VAR_13, VAR_14->tsk_Current,
      0);

    }
   }





   if (VAR_24 & 0x10) {




    if ((VAR_28->
      s_SiemensCounterInfo.
      s_ModeRegister.
      s_ByteModeRegister.
      b_ModeRegister3 &
      VAR_5) ==
     VAR_5) {
     VAR_14->s_InterruptParameters.
      s_FIFOInterruptParameters
      [VAR_14->s_InterruptParameters.
      ui_Write].ul_OldInterruptMask =
      8UL;

     VAR_14->
      s_InterruptParameters.
      s_FIFOInterruptParameters
      [VAR_14->s_InterruptParameters.
      ui_Write].b_OldModuleMask =
      1 << VAR_18;

     VAR_14->
      s_InterruptParameters.
      s_FIFOInterruptParameters
      [VAR_14->s_InterruptParameters.
      ui_Write].
      ul_OldCounterLatchValue =
      VAR_25;

     VAR_14->
      s_InterruptParameters.
      ul_InterruptOccur++;







     VAR_14->
      s_InterruptParameters.
      ui_Write = (VAR_14->
      s_InterruptParameters.
      ui_Write +
      1) % VAR_11;

     VAR_19 = 1;





     FUNC_3(VAR_13, VAR_14->tsk_Current,
      0);

    }
   }





   if (VAR_24 & 0x20) {




    VAR_27 = FUNC_0(VAR_14->s_BoardInfos.
     ui_Address + 32 + (64 * VAR_18));





    VAR_25 =
     FUNC_0(VAR_14->s_BoardInfos.ui_Address +
     28 + (64 * VAR_18));

    switch ((VAR_27 >> 1) & 3) {
    case 0:




     if ((VAR_14->s_ModuleInfo[VAR_18].
       s_SiemensCounterInfo.
       s_ModeRegister.
       s_ByteModeRegister.
       b_ModeRegister1 &
       VAR_0)
      == VAR_0) {




      if ((VAR_25 &
        0xFFFFU) != 0) {
       VAR_23 =
        (unsigned int)
        VAR_25
        & 0xFFFFU;
       VAR_25 =
        (VAR_25
        & 0xFFFF0000UL)
        | (0xFFFFU -
        VAR_23);
      }





      if ((VAR_25 &
        0xFFFF0000UL) !=
       0) {
       VAR_23 =
        (unsigned int) (
        (VAR_25
         >> 16) &
        0xFFFFU);
       VAR_25 =
        (VAR_25
        & 0xFFFFUL) |
        ((0xFFFFU -
         VAR_23)
        << 16);
      }
     } else {
      if (VAR_25 != 0) {
       VAR_25 =
        0xFFFFFFFFUL -
        VAR_25;
      }
     }
     break;

    case 1:




     if ((VAR_25 &
       0xFFFF0000UL) != 0) {
      VAR_23 =
       (unsigned int) (
       (VAR_25
        >> 16) &
       0xFFFFU);
      VAR_25 =
       (VAR_25 &
       0xFFFFUL) | ((0xFFFFU -
        VAR_23)
       << 16);
     }
     break;

    case 2:




     if ((VAR_25 & 0xFFFFU) !=
      0) {
      VAR_23 =
       (unsigned int)
       VAR_25 &
       0xFFFFU;
      VAR_25 =
       (VAR_25 &
       0xFFFF0000UL) | (0xFFFFU
       - VAR_23);
     }
     break;
    }

    VAR_14->
     s_InterruptParameters.
     s_FIFOInterruptParameters[VAR_14->
     s_InterruptParameters.
     ui_Write].
     ul_OldInterruptMask = 0x10000UL;

    VAR_14->
     s_InterruptParameters.
     s_FIFOInterruptParameters[VAR_14->
     s_InterruptParameters.
     ui_Write].
     b_OldModuleMask = 1 << VAR_18;

    VAR_14->
     s_InterruptParameters.
     s_FIFOInterruptParameters[VAR_14->
     s_InterruptParameters.
     ui_Write].
     ul_OldCounterLatchValue =
     VAR_25;

    VAR_14->
     s_InterruptParameters.
     ul_InterruptOccur++;







    VAR_14->
     s_InterruptParameters.
     ui_Write = (VAR_14->
     s_InterruptParameters.
     ui_Write + 1) % VAR_11;

    VAR_19 = 1;





    FUNC_3(VAR_13, VAR_14->tsk_Current, 0);

   }
  }





  if ((VAR_14->s_BoardInfos.
    dw_MolduleConfiguration[VAR_18] &
    0xFFFF0000UL) == VAR_2) {




   if ((VAR_14->s_ModuleInfo[VAR_18].
     s_CDAModuleInfo.
     b_CDAEnable == VAR_4)
    && (VAR_14->s_ModuleInfo[VAR_18].
     s_CDAModuleInfo.b_FctSelection == 0)) {




    VAR_27 = FUNC_0(VAR_14->s_BoardInfos.
     ui_Address + 16 + (64 * VAR_18));




    if (VAR_27 & 1) {
     VAR_14->
      s_InterruptParameters.
      s_FIFOInterruptParameters
      [VAR_14->s_InterruptParameters.
      ui_Write].ul_OldInterruptMask =
      0x80000UL;

     VAR_14->
      s_InterruptParameters.
      s_FIFOInterruptParameters
      [VAR_14->s_InterruptParameters.
      ui_Write].b_OldModuleMask =
      1 << VAR_18;

     VAR_14->
      s_InterruptParameters.
      s_FIFOInterruptParameters
      [VAR_14->s_InterruptParameters.
      ui_Write].
      ul_OldCounterLatchValue = 0;

     VAR_14->
      s_InterruptParameters.
      ul_InterruptOccur++;





     VAR_14->
      s_InterruptParameters.
      ui_Write = (VAR_14->
      s_InterruptParameters.
      ui_Write +
      1) % VAR_11;

     VAR_19 = 1;






     FUNC_3(VAR_13, VAR_14->tsk_Current,
      0);

    }

   }
  }





  if ((VAR_14->s_BoardInfos.
    dw_MolduleConfiguration[VAR_18] &
    0xFFFF0000UL) == VAR_10) {
   for (VAR_20 = 0; VAR_20 < 2; VAR_20++) {




    if (VAR_14->
     s_ModuleInfo[VAR_18].
     s_PWMModuleInfo.
     s_PWMInfo[VAR_20].
     b_InterruptEnable == VAR_4) {




     VAR_27 =
      FUNC_0(VAR_14->s_BoardInfos.
      ui_Address + 16 +
      (20 * VAR_20) +
      (64 * VAR_18));





     if (VAR_27 & 0x1) {
      VAR_14->
       s_InterruptParameters.
       s_FIFOInterruptParameters
       [VAR_14->
       s_InterruptParameters.
       ui_Write].
       ul_OldInterruptMask =
       0x4000UL << VAR_20;

      VAR_14->
       s_InterruptParameters.
       s_FIFOInterruptParameters
       [VAR_14->
       s_InterruptParameters.
       ui_Write].
       b_OldModuleMask =
       1 << VAR_18;

      VAR_14->
       s_InterruptParameters.
       ul_InterruptOccur++;





      VAR_14->
       s_InterruptParameters.
       ui_Write = (VAR_14->
       s_InterruptParameters.
       ui_Write +
       1) %
       VAR_11;

      VAR_19 = 1;





      FUNC_3(VAR_13,
       VAR_14->tsk_Current,
       0);

     }
    }
   }
  }





  if ((VAR_14->s_BoardInfos.
    dw_MolduleConfiguration[VAR_18] &
    0xFFFF0000UL) == VAR_12) {
   for (VAR_21 = 0; VAR_21 < 2;
    VAR_21++) {




    if (VAR_14->
     s_ModuleInfo[VAR_18].
     s_TorCounterModuleInfo.
     s_TorCounterInfo[VAR_21].
     b_InterruptEnable == VAR_4) {




     VAR_27 =
      FUNC_0(VAR_14->s_BoardInfos.
      ui_Address + 12 +
      (16 * VAR_21) +
      (64 * VAR_18));





     if (VAR_27 & 0x1) {




      VAR_25 =
       FUNC_0(VAR_14->
       s_BoardInfos.
       ui_Address + 0 +
       (16 * VAR_21) +
       (64 * VAR_18));

      VAR_14->
       s_InterruptParameters.
       s_FIFOInterruptParameters
       [VAR_14->
       s_InterruptParameters.
       ui_Write].
       ul_OldInterruptMask =
       0x1000UL <<
       VAR_21;

      VAR_14->
       s_InterruptParameters.
       s_FIFOInterruptParameters
       [VAR_14->
       s_InterruptParameters.
       ui_Write].
       b_OldModuleMask =
       1 << VAR_18;

      VAR_14->
       s_InterruptParameters.
       s_FIFOInterruptParameters
       [VAR_14->
       s_InterruptParameters.
       ui_Write].
       ul_OldCounterLatchValue
       = VAR_25;

      VAR_14->
       s_InterruptParameters.
       ul_InterruptOccur++;





      VAR_14->
       s_InterruptParameters.
       ui_Write = (VAR_14->
       s_InterruptParameters.
       ui_Write +
       1) %
       VAR_11;

      VAR_19 = 1;






      FUNC_3(VAR_13,
       VAR_14->tsk_Current,
       0);
     }
    }
   }
  }





  if ((VAR_14->s_BoardInfos.
    dw_MolduleConfiguration[VAR_18] &
    0xFFFF0000UL) == VAR_3) {






   VAR_24 = FUNC_0(VAR_14->s_BoardInfos.
    ui_Address + 12 + (64 * VAR_18));





   if ((VAR_24 & 0x8) == 0x8) {




    FUNC_1(0, VAR_14->s_BoardInfos.
     ui_Address + 32 + (64 * VAR_18));





    if (VAR_28->
     s_ChronoModuleInfo.
     b_CycleMode == VAR_4) {




     FUNC_1(0, VAR_14->s_BoardInfos.
      ui_Address + 36 +
      (64 * VAR_18));
    }





    VAR_25 =
     FUNC_0(VAR_14->s_BoardInfos.ui_Address +
     4 + (64 * VAR_18));





    if (VAR_28->
     s_ChronoModuleInfo.b_InterruptMask) {
     VAR_14->
      s_InterruptParameters.
      s_FIFOInterruptParameters
      [VAR_14->s_InterruptParameters.
      ui_Write].ul_OldInterruptMask =
      0x80;

     VAR_14->
      s_InterruptParameters.
      s_FIFOInterruptParameters
      [VAR_14->s_InterruptParameters.
      ui_Write].b_OldModuleMask =
      1 << VAR_18;

     VAR_14->
      s_InterruptParameters.
      s_FIFOInterruptParameters
      [VAR_14->s_InterruptParameters.
      ui_Write].
      ul_OldCounterLatchValue =
      VAR_25;

     VAR_14->
      s_InterruptParameters.
      ul_InterruptOccur++;





     VAR_14->
      s_InterruptParameters.
      ui_Write = (VAR_14->
      s_InterruptParameters.
      ui_Write +
      1) % VAR_11;

     VAR_19 = 1;





     FUNC_3(VAR_13, VAR_14->tsk_Current,
      0);

    }
   }
  }





  if ((VAR_14->s_BoardInfos.
    dw_MolduleConfiguration[VAR_18] &
    0xFFFF0000UL) == VAR_9) {




   VAR_27 = FUNC_0(VAR_14->s_BoardInfos.
    ui_Address + 20 + (64 * VAR_18));

   if (VAR_27 & 0xF) {
    for (VAR_22 = 0;
     VAR_22 < 4;
     VAR_22++) {




     if ((VAR_28->
       s_PulseEncoderModuleInfo.
       s_PulseEncoderInfo
       [VAR_22].
       b_PulseEncoderInit == 1)
      && (((VAR_28->s_PulseEncoderModuleInfo.dw_SetRegister >> VAR_22) & 1) == 1) && (((VAR_27 >> (VAR_22)) & 1) == 1)) {
      VAR_14->s_InterruptParameters.
       s_FIFOInterruptParameters
       [VAR_14->
       s_InterruptParameters.
       ui_Write].
       ul_OldInterruptMask =
       0x100UL <<
       VAR_22;

      VAR_14->
       s_InterruptParameters.
       s_FIFOInterruptParameters
       [VAR_14->
       s_InterruptParameters.
       ui_Write].
       b_OldModuleMask =
       1 << VAR_18;

      VAR_14->
       s_InterruptParameters.
       s_FIFOInterruptParameters
       [VAR_14->
       s_InterruptParameters.
       ui_Write].
       ul_OldCounterLatchValue
       = VAR_25;

      VAR_14->
       s_InterruptParameters.
       ul_InterruptOccur++;







      VAR_14->
       s_InterruptParameters.
       ui_Write = (VAR_14->
       s_InterruptParameters.
       ui_Write +
       1) %
       VAR_11;

      VAR_19 = 1;





      FUNC_3(VAR_13,
       VAR_14->tsk_Current,
       0);

     }
    }
   }
  }

 }
 return;

}
