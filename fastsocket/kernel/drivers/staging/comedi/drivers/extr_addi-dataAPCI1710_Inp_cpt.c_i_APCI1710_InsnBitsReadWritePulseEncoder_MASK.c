
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
struct TYPE_10__ {TYPE_4__ s_BoardInfos; TYPE_3__* s_ModuleInfo; } ;
struct TYPE_7__ {unsigned int dw_StatusRegister; TYPE_1__* s_PulseEncoderInfo; } ;
struct TYPE_8__ {TYPE_2__ s_PulseEncoderModuleInfo; } ;
struct TYPE_6__ {int b_PulseEncoderInit; } ;




 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 TYPE_5__* VAR_0 ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (unsigned int,int ) ;

int FUNC_4(struct comedi_device *VAR_1,
 struct comedi_subdevice *VAR_2, struct comedi_insn *VAR_3, unsigned int *VAR_4)
{
 int VAR_5 = 0;
 unsigned int VAR_6;
 unsigned char VAR_7;
 unsigned char VAR_8;
 unsigned char *VAR_9;
 unsigned char VAR_10;
 unsigned int *VAR_11;
 unsigned int VAR_12;

 VAR_5 = VAR_3->n;
 VAR_7 = (unsigned char) FUNC_0(VAR_3->chanspec);
 VAR_10 = (unsigned char) VAR_4[0];
 VAR_8 = (unsigned char) VAR_4[1];
 VAR_9 = (unsigned char *) &VAR_4[0];
 VAR_11 = (unsigned int *) &VAR_4[1];





 if (VAR_7 <= 3) {




  if (VAR_8 <= 3) {




   if (VAR_0->s_ModuleInfo[VAR_7].
    s_PulseEncoderModuleInfo.
    s_PulseEncoderInfo[VAR_8].
    b_PulseEncoderInit == 1) {

    switch (VAR_10) {
    case 129:




     VAR_6 =
      FUNC_2(VAR_0->s_BoardInfos.
      ui_Address + 16 +
      (64 * VAR_7));

     VAR_0->s_ModuleInfo[VAR_7].
      s_PulseEncoderModuleInfo.
      dw_StatusRegister = VAR_0->
      s_ModuleInfo[VAR_7].
      s_PulseEncoderModuleInfo.
      dw_StatusRegister |
      VAR_6;

     *VAR_9 =
      (unsigned char) (VAR_0->
      s_ModuleInfo[VAR_7].
      s_PulseEncoderModuleInfo.
      dw_StatusRegister >> (1 +
       VAR_8)) & 1;

     VAR_0->s_ModuleInfo[VAR_7].
      s_PulseEncoderModuleInfo.
      dw_StatusRegister =
      VAR_0->
      s_ModuleInfo[VAR_7].
      s_PulseEncoderModuleInfo.
      dw_StatusRegister &
      (0xFFFFFFFFUL - (1 << (1 +
        VAR_8)));





     *VAR_11 =
      FUNC_2(VAR_0->s_BoardInfos.
      ui_Address +
      (4 * VAR_8) +
      (64 * VAR_7));
     break;

    case 128:
     VAR_12 = (unsigned int) VAR_4[2];




     FUNC_3(VAR_12,
      VAR_0->s_BoardInfos.
      ui_Address +
      (4 * VAR_8) +
      (64 * VAR_7));

    }
   } else {




    FUNC_1("Pulse encoder not initialised\n");
    VAR_5 = -4;
   }
  } else {




   FUNC_1("Pulse encoder selection is wrong\n");
   VAR_5 = -3;
  }
 } else {




  FUNC_1("Module selection is wrong\n");
  VAR_5 = -2;
 }

 return VAR_5;
}
