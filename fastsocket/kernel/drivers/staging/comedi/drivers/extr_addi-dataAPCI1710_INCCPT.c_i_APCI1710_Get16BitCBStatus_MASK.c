
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
struct TYPE_13__ {int* dw_MolduleConfiguration; scalar_t__ ui_Address; } ;
struct TYPE_14__ {TYPE_6__ s_BoardInfos; TYPE_5__* s_ModuleInfo; } ;
struct TYPE_9__ {int b_ModeRegister1; } ;
struct TYPE_10__ {TYPE_2__ s_ByteModeRegister; } ;
struct TYPE_8__ {int b_CounterInit; } ;
struct TYPE_11__ {TYPE_3__ s_ModeRegister; TYPE_1__ s_InitFlag; } ;
struct TYPE_12__ {TYPE_4__ s_SiemensCounterInfo; } ;


 int FUNC_0 (char*) ;
 TYPE_7__* VAR_0 ;
 unsigned int FUNC_1 (scalar_t__) ;

int FUNC_2(struct comedi_device *VAR_1,
 unsigned char VAR_2, unsigned char *VAR_3, unsigned char *VAR_4)
{
 int VAR_5 = 0;
 unsigned int VAR_6 = 0;





 if (VAR_2 < 4) {




  if (VAR_0->
   s_ModuleInfo[VAR_2].
   s_SiemensCounterInfo.s_InitFlag.b_CounterInit == 1) {




   if ((VAR_0->s_ModuleInfo[VAR_2].
     s_SiemensCounterInfo.
     s_ModeRegister.
     s_ByteModeRegister.
     b_ModeRegister1 & 0x10) == 0x10) {




    if ((VAR_0->s_BoardInfos.
      dw_MolduleConfiguration
      [VAR_2] & 0xFFFF) >=
     0x3136) {
     VAR_6 =
      FUNC_1(VAR_0->s_BoardInfos.
      ui_Address + 16 +
      (64 * VAR_2));

     *VAR_4 =
      (unsigned char) ((VAR_6 >> 0) &
      1);
     *VAR_3 =
      (unsigned char) ((VAR_6 >> 1) &
      1);
    }
    else {




     VAR_5 = -5;
    }
   }
   else {





    FUNC_0("Counter not initialised\n");
    VAR_5 = -4;
   }
  }
  else {





   FUNC_0("Counter not initialised\n");
   VAR_5 = -3;
  }
 }
 else {




  FUNC_0("The selected module number parameter is wrong\n");
  VAR_5 = -2;
 }

 return VAR_5;
}
