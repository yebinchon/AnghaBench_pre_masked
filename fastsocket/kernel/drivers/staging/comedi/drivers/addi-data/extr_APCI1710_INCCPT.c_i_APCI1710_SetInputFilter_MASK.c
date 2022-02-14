
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
struct TYPE_11__ {int* dw_MolduleConfiguration; scalar_t__ ui_Address; } ;
struct TYPE_12__ {TYPE_5__ s_BoardInfos; TYPE_4__* s_ModuleInfo; } ;
struct TYPE_7__ {int b_ModeRegister4; int b_ModeRegister3; } ;
struct TYPE_8__ {int dw_ModeRegister1_2_3_4; TYPE_1__ s_ByteModeRegister; } ;
struct TYPE_9__ {TYPE_2__ s_ModeRegister; } ;
struct TYPE_10__ {TYPE_3__ s_SiemensCounterInfo; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 TYPE_6__* VAR_6 ;
 unsigned int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;

int FUNC_3(struct comedi_device *VAR_7,
 unsigned char VAR_8, unsigned char VAR_9, unsigned char VAR_10)
{
 int VAR_11 = 0;
 unsigned int VAR_12 = 0;





 if (VAR_8 < 4) {




  if ((VAR_6->s_BoardInfos.
    dw_MolduleConfiguration[VAR_8] &
    0xFFFF0000UL) == VAR_5) {




   if ((VAR_6->s_BoardInfos.
     dw_MolduleConfiguration[VAR_8] &
     0xFFFF) >= 0x3135) {




    if ((VAR_9 == VAR_0) ||
     (VAR_9 == VAR_1) ||
     (VAR_9 == VAR_2)) {




     if (VAR_10 < 16) {




      if (VAR_9 ==
       VAR_2) {




       VAR_12 =
        FUNC_1(VAR_6->
        s_BoardInfos.
        ui_Address +
        36 +
        (64 * VAR_8));





       if ((VAR_12 & 1) !=
        1) {




        FUNC_0("40MHz quartz not on board\n");
        VAR_11 =
         -6;
       }
      }





      if (VAR_11 == 0) {




       if (VAR_9 ==
        VAR_2)
       {




        VAR_6->
         s_ModuleInfo
         [VAR_8].
         s_SiemensCounterInfo.
         s_ModeRegister.
         s_ByteModeRegister.
         b_ModeRegister4
         =
         VAR_6->
         s_ModuleInfo
         [VAR_8].
         s_SiemensCounterInfo.
         s_ModeRegister.
         s_ByteModeRegister.
         b_ModeRegister4
         |
         VAR_4;

       }
       else {




        VAR_6->
         s_ModuleInfo
         [VAR_8].
         s_SiemensCounterInfo.
         s_ModeRegister.
         s_ByteModeRegister.
         b_ModeRegister4
         =
         VAR_6->
         s_ModuleInfo
         [VAR_8].
         s_SiemensCounterInfo.
         s_ModeRegister.
         s_ByteModeRegister.
         b_ModeRegister4
         &
         VAR_3;

       }





       VAR_6->
        s_ModuleInfo
        [VAR_8].
        s_SiemensCounterInfo.
        s_ModeRegister.
        s_ByteModeRegister.
        b_ModeRegister3
        =
        (VAR_6->
        s_ModuleInfo
        [VAR_8].
        s_SiemensCounterInfo.
        s_ModeRegister.
        s_ByteModeRegister.
        b_ModeRegister3
        & 0x1F) |
        ((VAR_10 &
         0x7) <<
        5);

       VAR_6->
        s_ModuleInfo
        [VAR_8].
        s_SiemensCounterInfo.
        s_ModeRegister.
        s_ByteModeRegister.
        b_ModeRegister4
        =
        (VAR_6->
        s_ModuleInfo
        [VAR_8].
        s_SiemensCounterInfo.
        s_ModeRegister.
        s_ByteModeRegister.
        b_ModeRegister4
        & 0xFE) |
        ((VAR_10 &
         0x8) >>
        3);





       FUNC_2(VAR_6->
        s_ModuleInfo
        [VAR_8].
        s_SiemensCounterInfo.
        s_ModeRegister.
        dw_ModeRegister1_2_3_4,
        VAR_6->
        s_BoardInfos.
        ui_Address +
        20 +
        (64 * VAR_8));
      }
     }
     else {




      FUNC_0("The selected filter value is wrong\n");
      VAR_11 = -5;
     }
    }
    else {




     FUNC_0("The selected PCI input clock is wrong\n");
     VAR_11 = 4;
    }
   } else {




    FUNC_0("The module is not a counter module\n");
    VAR_11 = -3;
   }
  } else {




   FUNC_0("The module is not a counter module\n");
   VAR_11 = -3;
  }
 } else {




  FUNC_0("The selected module number parameter is wrong\n");
  VAR_11 = -2;
 }

 return VAR_11;
}
