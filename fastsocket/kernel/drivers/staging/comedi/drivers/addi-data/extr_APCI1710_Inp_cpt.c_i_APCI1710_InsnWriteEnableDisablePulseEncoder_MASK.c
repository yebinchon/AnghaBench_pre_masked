
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {int dummy; } ;
struct TYPE_9__ {int ui_Address; } ;
struct TYPE_10__ {TYPE_4__ s_BoardInfos; TYPE_3__* s_ModuleInfo; int tsk_Current; } ;
struct TYPE_7__ {int dw_SetRegister; unsigned long dw_ControlRegister; TYPE_1__* s_PulseEncoderInfo; } ;
struct TYPE_8__ {TYPE_2__ s_PulseEncoderModuleInfo; } ;
struct TYPE_6__ {int b_PulseEncoderInit; } ;


 unsigned char VAR_0 ;


 unsigned char VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int VAR_2 ;
 TYPE_5__* VAR_3 ;
 int FUNC_2 (int,int ) ;

int FUNC_3(struct comedi_device *VAR_4,
 struct comedi_subdevice *VAR_5, struct comedi_insn *VAR_6, unsigned int *VAR_7)
{
 int VAR_8 = 0;
 unsigned char VAR_9;
 unsigned char VAR_10;
 unsigned char VAR_11;
 unsigned char VAR_12;
 unsigned char VAR_13;

 VAR_8 = VAR_6->n;
 VAR_9 = (unsigned char) FUNC_0(VAR_6->chanspec);
 VAR_13 = (unsigned char) VAR_7[0];
 VAR_10 = (unsigned char) VAR_7[1];
 VAR_11 = (unsigned char) VAR_7[2];
 VAR_12 = (unsigned char) VAR_7[3];





 if (VAR_9 <= 3) {




  if (VAR_10 <= 3) {




   if (VAR_3->s_ModuleInfo[VAR_9].
    s_PulseEncoderModuleInfo.
    s_PulseEncoderInfo[VAR_10].
    b_PulseEncoderInit == 1) {
    switch (VAR_13) {

    case 128:




     if (VAR_11 ==
      VAR_0
      || VAR_11 ==
      VAR_1) {




      if (VAR_12 ==
       128
       || VAR_12
       == 129) {




       if (VAR_12
        ==
        129)
       {




        VAR_3->
         s_ModuleInfo
         [VAR_9].
         s_PulseEncoderModuleInfo.
         dw_SetRegister
         =
         VAR_3->
         s_ModuleInfo
         [VAR_9].
         s_PulseEncoderModuleInfo.
         dw_SetRegister
         &
         (0xFFFFFFFFUL
         -
         (1UL << VAR_10));
       } else {





        VAR_3->
         s_ModuleInfo
         [VAR_9].
         s_PulseEncoderModuleInfo.
         dw_SetRegister
         =
         VAR_3->
         s_ModuleInfo
         [VAR_9].
         s_PulseEncoderModuleInfo.
         dw_SetRegister
         | (1UL
         <<
         VAR_10);
        VAR_3->tsk_Current = VAR_2;

       }

       if (VAR_8 >= 0) {




        FUNC_2(VAR_3->
         s_ModuleInfo
         [VAR_9].
         s_PulseEncoderModuleInfo.
         dw_SetRegister,
         VAR_3->
         s_BoardInfos.
         ui_Address
         + 20 +
         (64 * VAR_9));




        VAR_3->
         s_ModuleInfo
         [VAR_9].
         s_PulseEncoderModuleInfo.
         dw_ControlRegister
         =
         VAR_3->
         s_ModuleInfo
         [VAR_9].
         s_PulseEncoderModuleInfo.
         dw_ControlRegister
         | (1UL
         <<
         VAR_10);





        VAR_3->
         s_ModuleInfo
         [VAR_9].
         s_PulseEncoderModuleInfo.
         dw_ControlRegister
         =
         (VAR_3->
         s_ModuleInfo
         [VAR_9].
         s_PulseEncoderModuleInfo.
         dw_ControlRegister
         &
         (0xFFFFFFFFUL
          -
          (1 << (VAR_10 + 4)))) | ((VAR_11 & 1UL) << (4 + VAR_10));





        FUNC_2(VAR_3->
         s_ModuleInfo
         [VAR_9].
         s_PulseEncoderModuleInfo.
         dw_ControlRegister,
         VAR_3->
         s_BoardInfos.
         ui_Address
         + 16 +
         (64 * VAR_9));
       }
      } else {




       FUNC_1("Interrupt handling mode is wrong\n");
       VAR_8 = -6;
      }
     } else {




      FUNC_1("Cycle selection mode is wrong\n");
      VAR_8 = -5;
     }
     break;

    case 129:
     VAR_3->s_ModuleInfo[VAR_9].
      s_PulseEncoderModuleInfo.
      dw_ControlRegister =
      VAR_3->
      s_ModuleInfo[VAR_9].
      s_PulseEncoderModuleInfo.
      dw_ControlRegister &
      (0xFFFFFFFFUL -
      (1UL << VAR_10));





     FUNC_2(VAR_3->s_ModuleInfo[VAR_9].
      s_PulseEncoderModuleInfo.
      dw_ControlRegister,
      VAR_3->s_BoardInfos.
      ui_Address + 16 +
      (64 * VAR_9));

     break;
    }

   } else {




    FUNC_1("Pulse encoder not initialised\n");
    VAR_8 = -4;
   }
  } else {




   FUNC_1("Pulse encoder selection is wrong\n");
   VAR_8 = -3;
  }
 } else {




  FUNC_1("Module selection is wrong\n");
  VAR_8 = -2;
 }

 return VAR_8;
}
