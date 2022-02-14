
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct comedi_device {int dummy; } ;
struct TYPE_7__ {int* dw_MolduleConfiguration; } ;
struct TYPE_12__ {TYPE_5__* s_ModuleInfo; TYPE_1__ s_BoardInfos; } ;
struct TYPE_8__ {int b_ModeRegister4; } ;
struct TYPE_9__ {TYPE_2__ s_ByteModeRegister; } ;
struct TYPE_10__ {TYPE_3__ s_ModeRegister; } ;
struct TYPE_11__ {TYPE_4__ s_SiemensCounterInfo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 int FUNC_0 (char*) ;
 TYPE_6__* VAR_5 ;

int FUNC_1(struct comedi_device *VAR_6,
 unsigned char VAR_7, unsigned char VAR_8)
{
 int VAR_9 = 0;





 if (VAR_7 < 4) {




  if ((VAR_5->s_BoardInfos.
    dw_MolduleConfiguration[VAR_7] &
    0xFFFF0000UL) == VAR_1) {




   if ((VAR_5->s_BoardInfos.
     dw_MolduleConfiguration[VAR_7] &
     0xFFFF) >= 0x3135) {




    if (VAR_8 == VAR_3 ||
     VAR_8 == VAR_4)
    {




     if (VAR_8 ==
      VAR_4) {




      VAR_5->
       s_ModuleInfo
       [VAR_7].
       s_SiemensCounterInfo.
       s_ModeRegister.
       s_ByteModeRegister.
       b_ModeRegister4 =
       VAR_5->
       s_ModuleInfo
       [VAR_7].
       s_SiemensCounterInfo.
       s_ModeRegister.
       s_ByteModeRegister.
       b_ModeRegister4 |
       VAR_2;
     } else {




      VAR_5->
       s_ModuleInfo
       [VAR_7].
       s_SiemensCounterInfo.
       s_ModeRegister.
       s_ByteModeRegister.
       b_ModeRegister4 =
       VAR_5->
       s_ModuleInfo
       [VAR_7].
       s_SiemensCounterInfo.
       s_ModeRegister.
       s_ByteModeRegister.
       b_ModeRegister4 &
       VAR_0;
     }
    }
    else {




     FUNC_0("The source selection is wrong\n");
     VAR_9 = -4;
    }
   } else {




    FUNC_0("The module is not a counter module\n");
    VAR_9 = -3;
   }
  } else {




   FUNC_0("The module is not a counter module\n");
   VAR_9 = -3;
  }
 } else {




  FUNC_0("The selected module number is wrong\n");
  VAR_9 = -2;
 }

 return VAR_9;
}
