
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
struct TYPE_9__ {int* dw_MolduleConfiguration; } ;
struct TYPE_14__ {TYPE_6__* s_ModuleInfo; TYPE_2__ s_BoardInfos; } ;
struct TYPE_10__ {int b_ModeRegister4; } ;
struct TYPE_11__ {TYPE_3__ s_ByteModeRegister; } ;
struct TYPE_8__ {int b_CounterInit; } ;
struct TYPE_12__ {TYPE_4__ s_ModeRegister; TYPE_1__ s_InitFlag; } ;
struct TYPE_13__ {TYPE_5__ s_SiemensCounterInfo; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 int FUNC_0 (char*) ;
 TYPE_7__* VAR_2 ;

int FUNC_1(struct comedi_device *VAR_3,
 unsigned char VAR_4, unsigned char VAR_5, unsigned char VAR_6)
{
 int VAR_7 = 0;





 if (VAR_4 < 4) {




  if (VAR_2->
   s_ModuleInfo[VAR_4].
   s_SiemensCounterInfo.s_InitFlag.b_CounterInit == 1) {




   if (VAR_5 == 0 || VAR_5 == 1) {




    if ((VAR_6 == VAR_0) ||
     ((VAR_6 == VAR_1
       && (VAR_2->
        s_BoardInfos.
        dw_MolduleConfiguration
        [VAR_4] &
        0xFFFF) >=
       0x3135))) {




     VAR_2->
      s_ModuleInfo[VAR_4].
      s_SiemensCounterInfo.
      s_ModeRegister.
      s_ByteModeRegister.
      b_ModeRegister4 = (VAR_2->
      s_ModuleInfo[VAR_4].
      s_SiemensCounterInfo.
      s_ModeRegister.
      s_ByteModeRegister.
      b_ModeRegister4 & (0xFF -
       (0x10 << VAR_5))) | ((VAR_6 ^ 1) << (4 + VAR_5));
    } else {




     FUNC_0("External strobe level parameter is wrong\n");
     VAR_7 = -5;
    }
   }
   else {




    FUNC_0("External strobe selection is wrong\n");
    VAR_7 = -4;
   }
  } else {





   FUNC_0("Counter not initialised\n");
   VAR_7 = -3;
  }
 } else {




  FUNC_0("The selected module number parameter is wrong\n");
  VAR_7 = -2;
 }

 return VAR_7;
}
