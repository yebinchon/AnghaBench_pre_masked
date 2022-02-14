
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
struct TYPE_10__ {scalar_t__ ui_Address; } ;
struct TYPE_14__ {TYPE_6__* s_ModuleInfo; TYPE_3__ s_BoardInfos; } ;
struct TYPE_11__ {int b_CounterInit; int b_FrequencyMeasurementInit; int b_FrequencyMeasurementEnable; } ;
struct TYPE_8__ {int b_ModeRegister3; } ;
struct TYPE_9__ {int dw_ModeRegister1_2_3_4; TYPE_1__ s_ByteModeRegister; } ;
struct TYPE_12__ {TYPE_4__ s_InitFlag; TYPE_2__ s_ModeRegister; } ;
struct TYPE_13__ {TYPE_5__ s_SiemensCounterInfo; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 TYPE_7__* VAR_4 ;
 int FUNC_1 (int ,scalar_t__) ;

int FUNC_2(struct comedi_device *VAR_5,
 unsigned char VAR_6, unsigned char VAR_7)
{
 int VAR_8 = 0;





 if (VAR_6 < 4) {




  if (VAR_4->
   s_ModuleInfo[VAR_6].
   s_SiemensCounterInfo.s_InitFlag.b_CounterInit == 1) {




   if (VAR_4->
    s_ModuleInfo[VAR_6].
    s_SiemensCounterInfo.
    s_InitFlag.b_FrequencyMeasurementInit == 1) {




    if ((VAR_7 == VAR_0) ||
     (VAR_7 == VAR_2))
    {





     VAR_4->
      s_ModuleInfo[VAR_6].
      s_SiemensCounterInfo.
      s_ModeRegister.
      s_ByteModeRegister.
      b_ModeRegister3 = VAR_4->
      s_ModuleInfo[VAR_6].
      s_SiemensCounterInfo.
      s_ModeRegister.
      s_ByteModeRegister.
      b_ModeRegister3 |
      VAR_3;





     VAR_4->
      s_ModuleInfo[VAR_6].
      s_SiemensCounterInfo.
      s_ModeRegister.
      s_ByteModeRegister.
      b_ModeRegister3 = (VAR_4->
      s_ModuleInfo[VAR_6].
      s_SiemensCounterInfo.
      s_ModeRegister.
      s_ByteModeRegister.
      b_ModeRegister3 &
      VAR_1)
      | (VAR_7 << 3);





     FUNC_1(VAR_4->s_ModuleInfo[VAR_6].
      s_SiemensCounterInfo.
      s_ModeRegister.
      dw_ModeRegister1_2_3_4,
      VAR_4->s_BoardInfos.
      ui_Address + 20 +
      (64 * VAR_6));

     VAR_4->
      s_ModuleInfo[VAR_6].
      s_SiemensCounterInfo.
      s_InitFlag.
      b_FrequencyMeasurementEnable =
      1;
    } else {




     FUNC_0("Interrupt parameter is wrong\n");
     VAR_8 = -5;
    }
   } else {




    FUNC_0("Frequency measurement logic not initialised\n");
    VAR_8 = -4;
   }
  } else {





   FUNC_0("Counter not initialised\n");
   VAR_8 = -3;
  }
 } else {




  FUNC_0("The selected module number parameter is wrong\n");
  VAR_8 = -2;
 }

 return VAR_8;
}
