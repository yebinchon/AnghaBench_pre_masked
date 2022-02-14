
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
struct TYPE_13__ {scalar_t__ ui_Address; } ;
struct TYPE_14__ {TYPE_6__ s_BoardInfos; TYPE_5__* s_ModuleInfo; } ;
struct TYPE_9__ {int b_ModeRegister2; } ;
struct TYPE_10__ {int dw_ModeRegister1_2_3_4; TYPE_2__ s_ByteModeRegister; } ;
struct TYPE_8__ {int b_CounterInit; scalar_t__ b_IndexInit; } ;
struct TYPE_11__ {TYPE_3__ s_ModeRegister; TYPE_1__ s_InitFlag; } ;
struct TYPE_12__ {TYPE_4__ s_SiemensCounterInfo; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 TYPE_7__* VAR_1 ;
 unsigned int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;

int FUNC_3(struct comedi_device *VAR_2, unsigned char VAR_3)
{
 int VAR_4 = 0;
 unsigned int VAR_5;





 if (VAR_3 < 4) {




  if (VAR_1->
   s_ModuleInfo[VAR_3].
   s_SiemensCounterInfo.s_InitFlag.b_CounterInit == 1) {




   if (VAR_1->
    s_ModuleInfo[VAR_3].
    s_SiemensCounterInfo.s_InitFlag.b_IndexInit) {
    VAR_1->
     s_ModuleInfo[VAR_3].
     s_SiemensCounterInfo.
     s_ModeRegister.
     s_ByteModeRegister.
     b_ModeRegister2 = VAR_1->
     s_ModuleInfo[VAR_3].
     s_SiemensCounterInfo.
     s_ModeRegister.
     s_ByteModeRegister.
     b_ModeRegister2 | VAR_0;

    VAR_5 =
     FUNC_1(VAR_1->s_BoardInfos.ui_Address +
     24 + (64 * VAR_3));

    FUNC_2(VAR_1->s_ModuleInfo[VAR_3].
     s_SiemensCounterInfo.
     s_ModeRegister.
     dw_ModeRegister1_2_3_4,
     VAR_1->s_BoardInfos.ui_Address + 20 +
     (64 * VAR_3));
   } else {




    FUNC_0("Index not initialised \n");
    VAR_4 = -4;
   }
  } else {





   FUNC_0("Counter not initialised\n");
   VAR_4 = -3;
  }
 } else {




  FUNC_0("The selected module number parameter is wrong\n");
  VAR_4 = -2;
 }

 return VAR_4;
}
