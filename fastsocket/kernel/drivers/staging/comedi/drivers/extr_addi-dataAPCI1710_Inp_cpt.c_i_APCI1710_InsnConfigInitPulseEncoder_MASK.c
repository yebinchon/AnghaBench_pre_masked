
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
struct TYPE_6__ {int* dw_MolduleConfiguration; scalar_t__ ui_Address; } ;
struct TYPE_10__ {TYPE_4__* s_ModuleInfo; TYPE_1__ s_BoardInfos; } ;
struct TYPE_8__ {int dw_SetRegister; TYPE_2__* s_PulseEncoderInfo; } ;
struct TYPE_9__ {TYPE_3__ s_PulseEncoderModuleInfo; } ;
struct TYPE_7__ {int b_PulseEncoderInit; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 TYPE_5__* VAR_1 ;
 unsigned int FUNC_2 (scalar_t__) ;
 int FUNC_3 (unsigned int,scalar_t__) ;

int FUNC_4(struct comedi_device *VAR_2,
 struct comedi_subdevice *VAR_3, struct comedi_insn *VAR_4, unsigned int *VAR_5)
{
 int VAR_6 = 0;
 unsigned int VAR_7;

 unsigned char VAR_8;
 unsigned char VAR_9;
 unsigned char VAR_10;
 unsigned char VAR_11;
 unsigned int VAR_12;

 VAR_8 = (unsigned char) FUNC_0(VAR_4->chanspec);
 VAR_9 = (unsigned char) VAR_5[0];
 VAR_10 = (unsigned char) VAR_5[1];
 VAR_11 = (unsigned char) VAR_5[2];
 VAR_12 = (unsigned int) VAR_5[3];

 VAR_6 = VAR_4->n;





 if (VAR_8 <= 3) {




  if ((VAR_1->s_BoardInfos.
    dw_MolduleConfiguration[VAR_8] &
    VAR_0) ==
   VAR_0) {




   if (VAR_9 <= 3) {




    if ((VAR_10 == 0)
     || (VAR_10 == 1)) {




     if ((VAR_11 <= 2)
      || (VAR_9 > 0)) {
      if (VAR_12 > 1) {

       VAR_7 =
        FUNC_2(VAR_1->
        s_BoardInfos.
        ui_Address +
        20 +
        (64 * VAR_8));





       FUNC_3(VAR_12,
        VAR_1->
        s_BoardInfos.
        ui_Address +
        (VAR_9
         * 4) +
        (64 * VAR_8));




       VAR_1->
        s_ModuleInfo
        [VAR_8].
        s_PulseEncoderModuleInfo.
        dw_SetRegister =
        (VAR_1->
        s_ModuleInfo
        [VAR_8].
        s_PulseEncoderModuleInfo.
        dw_SetRegister &
        (0xFFFFFFFFUL -
         (1UL << (8 + VAR_9)))) | ((1UL & (~VAR_10)) << (8 + VAR_9));





       if ((VAR_11 > 0) && (VAR_9 > 1)) {




        VAR_1->
         s_ModuleInfo
         [VAR_8].
         s_PulseEncoderModuleInfo.
         dw_SetRegister
         =
         VAR_1->
         s_ModuleInfo
         [VAR_8].
         s_PulseEncoderModuleInfo.
         dw_SetRegister
         | (1UL
         << (4 + VAR_9));





        VAR_1->
         s_ModuleInfo
         [VAR_8].
         s_PulseEncoderModuleInfo.
         dw_SetRegister
         =
         (VAR_1->
         s_ModuleInfo
         [VAR_8].
         s_PulseEncoderModuleInfo.
         dw_SetRegister
         &
         (0xFFFFFFFFUL
          -
          (1UL << (12 + VAR_9)))) | ((1UL & (VAR_11 - 1)) << (12 + VAR_9));
       } else {




        VAR_1->
         s_ModuleInfo
         [VAR_8].
         s_PulseEncoderModuleInfo.
         dw_SetRegister
         =
         VAR_1->
         s_ModuleInfo
         [VAR_8].
         s_PulseEncoderModuleInfo.
         dw_SetRegister
         &
         (0xFFFFFFFFUL
         -
         (1UL << (4 + VAR_9)));
       }





       FUNC_3(VAR_1->
        s_ModuleInfo
        [VAR_8].
        s_PulseEncoderModuleInfo.
        dw_SetRegister,
        VAR_1->
        s_BoardInfos.
        ui_Address +
        20 +
        (64 * VAR_8));

       VAR_1->
        s_ModuleInfo
        [VAR_8].
        s_PulseEncoderModuleInfo.
        s_PulseEncoderInfo
        [VAR_9].
        b_PulseEncoderInit
        = 1;
      } else {




       FUNC_1("Pulse encoder start value is wrong\n");
       VAR_6 = -6;
      }
     } else {




      FUNC_1("Digital TRIGGER output action selection is wrong\n");
      VAR_6 = -5;
     }
    } else {




     FUNC_1("Input level selection is wrong\n");
     VAR_6 = -4;
    }
   } else {




    FUNC_1("Pulse encoder selection is wrong\n");
    VAR_6 = -3;
   }
  } else {




   FUNC_1("The module is not a pulse encoder module\n");
   VAR_6 = -2;
  }
 } else {




  FUNC_1("The module is not a pulse encoder module\n");
  VAR_6 = -2;
 }

 return VAR_6;
}
