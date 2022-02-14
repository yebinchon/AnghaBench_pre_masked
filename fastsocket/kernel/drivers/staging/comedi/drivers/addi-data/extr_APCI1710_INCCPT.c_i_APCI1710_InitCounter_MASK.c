
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct comedi_device {int dummy; } ;
struct TYPE_10__ {int* dw_MolduleConfiguration; scalar_t__ ui_Address; } ;
struct TYPE_14__ {TYPE_6__* s_ModuleInfo; TYPE_3__ s_BoardInfos; } ;
struct TYPE_11__ {int b_CounterInit; } ;
struct TYPE_8__ {unsigned char b_ModeRegister1; } ;
struct TYPE_9__ {int dw_ModeRegister1_2_3_4; TYPE_1__ s_ByteModeRegister; } ;
struct TYPE_12__ {TYPE_4__ s_InitFlag; TYPE_2__ s_ModeRegister; } ;
struct TYPE_13__ {TYPE_5__ s_SiemensCounterInfo; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 unsigned char VAR_7 ;
 int VAR_8 ;
 unsigned char VAR_9 ;
 unsigned char VAR_10 ;
 int FUNC_0 (char*) ;
 TYPE_7__* VAR_11 ;
 int FUNC_1 (int ,scalar_t__) ;

int FUNC_2(struct comedi_device *VAR_12,
 unsigned char VAR_13,
 unsigned char VAR_14,
 unsigned char VAR_15,
 unsigned char VAR_16,
 unsigned char VAR_17, unsigned char VAR_18)
{
 int VAR_19 = 0;





 if ((VAR_11->s_BoardInfos.
   dw_MolduleConfiguration[VAR_13] & 0xFFFF0000UL) ==
  VAR_8) {




  if (VAR_14 == VAR_0
   || VAR_14 == VAR_1) {




   if (VAR_15 == VAR_9 ||
    VAR_15 == VAR_4 ||
    VAR_15 == VAR_10 ||
    VAR_15 == VAR_3) {




    if ((VAR_15 == VAR_3
      && (VAR_16 ==
       VAR_7
       || VAR_16
       == VAR_2))
     || (VAR_15 !=
      VAR_3
      && (VAR_16 ==
       VAR_6
       || VAR_16
       ==
       VAR_5)))
    {




     if (VAR_14 ==
      VAR_0) {




      if ((VAR_15 !=
        VAR_3
        &&
        (VAR_17
         ==
         VAR_9
         ||
         VAR_17
         ==
         VAR_4
         ||
         VAR_17
         ==
         VAR_10))
       || (VAR_15
        ==
        VAR_3
        &&
        VAR_17
        ==
        VAR_3))
      {




       if ((VAR_17 == VAR_3 && (VAR_18 == VAR_7 || VAR_18 == VAR_2)) || (VAR_17 != VAR_3 && (VAR_18 == VAR_6 || VAR_18 == VAR_5))) {
        VAR_19 =
         0;
       } else {




        FUNC_0("The selected second counter operating option is wrong\n");
        VAR_19 =
         -7;
       }
      } else {




       FUNC_0("The selected second counter operating mode is wrong\n");
       VAR_19 = -6;
      }
     }
    } else {




     FUNC_0("The selected first counter operating option is wrong\n");
     VAR_19 = -5;
    }
   } else {



    FUNC_0("The selected first counter operating mode is wrong\n");
    VAR_19 = -4;
   }
  } else {




   FUNC_0("The selected counter range is wrong\n");
   VAR_19 = -3;
  }





  if (VAR_19 == 0) {




   if (VAR_14 == VAR_1) {
    VAR_11->
     s_ModuleInfo[VAR_13].
     s_SiemensCounterInfo.
     s_ModeRegister.
     s_ByteModeRegister.
     b_ModeRegister1 = VAR_14 |
     VAR_15 |
     VAR_16;
   } else {
    VAR_11->
     s_ModuleInfo[VAR_13].
     s_SiemensCounterInfo.
     s_ModeRegister.
     s_ByteModeRegister.
     b_ModeRegister1 = VAR_14 |
     (VAR_15 & 0x5) |
     (VAR_16 & 0x20) |
     (VAR_17 & 0xA) |
     (VAR_18 & 0x40);





    if (VAR_15 == VAR_3) {
     VAR_11->
      s_ModuleInfo[VAR_13].
      s_SiemensCounterInfo.
      s_ModeRegister.
      s_ByteModeRegister.
      b_ModeRegister1 = VAR_11->
      s_ModuleInfo[VAR_13].
      s_SiemensCounterInfo.
      s_ModeRegister.
      s_ByteModeRegister.
      b_ModeRegister1 |
      VAR_3;
    }
   }





   FUNC_1(VAR_11->s_ModuleInfo[VAR_13].
    s_SiemensCounterInfo.
    s_ModeRegister.
    dw_ModeRegister1_2_3_4,
    VAR_11->s_BoardInfos.
    ui_Address + 20 + (64 * VAR_13));

   VAR_11->
    s_ModuleInfo[VAR_13].
    s_SiemensCounterInfo.
    s_InitFlag.b_CounterInit = 1;
  }
 } else {




  FUNC_0("The module is not a counter module\n");
  VAR_19 = -2;
 }

 return VAR_19;
}
