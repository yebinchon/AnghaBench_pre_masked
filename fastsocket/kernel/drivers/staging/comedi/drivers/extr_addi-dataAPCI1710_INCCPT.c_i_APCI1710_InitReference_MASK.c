
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
struct TYPE_11__ {int b_CounterInit; int b_ReferenceInit; } ;
struct TYPE_8__ {int b_ModeRegister2; } ;
struct TYPE_9__ {int dw_ModeRegister1_2_3_4; TYPE_1__ s_ByteModeRegister; } ;
struct TYPE_12__ {TYPE_4__ s_InitFlag; TYPE_2__ s_ModeRegister; } ;
struct TYPE_13__ {TYPE_5__ s_SiemensCounterInfo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 TYPE_7__* VAR_2 ;
 int FUNC_1 (int ,scalar_t__) ;

int FUNC_2(struct comedi_device *VAR_3,
 unsigned char VAR_4, unsigned char VAR_5)
{
 int VAR_6 = 0;





 if (VAR_4 < 4) {




  if (VAR_2->
   s_ModuleInfo[VAR_4].
   s_SiemensCounterInfo.s_InitFlag.b_CounterInit == 1) {




   if (VAR_5 == 0 || VAR_5 == 1) {
    if (VAR_5 == 1) {
     VAR_2->
      s_ModuleInfo[VAR_4].
      s_SiemensCounterInfo.
      s_ModeRegister.
      s_ByteModeRegister.
      b_ModeRegister2 = VAR_2->
      s_ModuleInfo[VAR_4].
      s_SiemensCounterInfo.
      s_ModeRegister.
      s_ByteModeRegister.
      b_ModeRegister2 |
      VAR_0;
    } else {
     VAR_2->
      s_ModuleInfo[VAR_4].
      s_SiemensCounterInfo.
      s_ModeRegister.
      s_ByteModeRegister.
      b_ModeRegister2 = VAR_2->
      s_ModuleInfo[VAR_4].
      s_SiemensCounterInfo.
      s_ModeRegister.
      s_ByteModeRegister.
      b_ModeRegister2 &
      VAR_1;
    }

    FUNC_1(VAR_2->s_ModuleInfo[VAR_4].
     s_SiemensCounterInfo.
     s_ModeRegister.
     dw_ModeRegister1_2_3_4,
     VAR_2->s_BoardInfos.ui_Address + 20 +
     (64 * VAR_4));

    VAR_2->
     s_ModuleInfo[VAR_4].
     s_SiemensCounterInfo.
     s_InitFlag.b_ReferenceInit = 1;
   } else {




    FUNC_0("Reference level parameter is wrong\n");
    VAR_6 = -4;
   }
  } else {





   FUNC_0("Counter not initialised\n");
   VAR_6 = -3;
  }
 } else {




  FUNC_0("The selected module number parameter is wrong\n");
  VAR_6 = -2;
 }

 return VAR_6;
}
