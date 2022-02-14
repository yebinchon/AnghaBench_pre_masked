
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {int dummy; } ;
struct TYPE_7__ {int* dw_MolduleConfiguration; int ui_Address; } ;
struct TYPE_8__ {TYPE_3__ s_BoardInfos; TYPE_2__* s_ModuleInfo; int tsk_Current; } ;
struct TYPE_5__ {int b_ChronoInit; unsigned char b_InterruptMask; unsigned char b_CycleMode; int dw_ConfigReg; } ;
struct TYPE_6__ {TYPE_1__ s_ChronoModuleInfo; } ;


 int VAR_0 ;
 unsigned char VAR_1 ;


 unsigned char VAR_2 ;
 unsigned char FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int VAR_3 ;
 TYPE_4__* VAR_4 ;
 int FUNC_2 (int,int ) ;

int FUNC_3(struct comedi_device *VAR_5,
 struct comedi_subdevice *VAR_6, struct comedi_insn *VAR_7, unsigned int *VAR_8)
{
 int VAR_9 = 0;
 unsigned char VAR_10, VAR_11, VAR_12, VAR_13;
 VAR_10 = FUNC_0(VAR_7->chanspec);
 VAR_13 = (unsigned char) VAR_8[0];
 VAR_11 = (unsigned char) VAR_8[1];
 VAR_12 = (unsigned char) VAR_8[2];
 VAR_9 = VAR_7->n;





 if (VAR_10 < 4) {




  if ((VAR_4->s_BoardInfos.
    dw_MolduleConfiguration[VAR_10] &
    0xFFFF0000UL) == VAR_0) {




   if (VAR_4->s_ModuleInfo[VAR_10].
    s_ChronoModuleInfo.b_ChronoInit == 1) {

    switch (VAR_13) {

    case 128:





     if ((VAR_11 == VAR_2)
      || (VAR_11 ==
       VAR_1)) {




      if ((VAR_12 ==
        128)
       || (VAR_12 ==
        129))
      {





       VAR_4->
        s_ModuleInfo
        [VAR_10].
        s_ChronoModuleInfo.
        b_InterruptMask
        =
        VAR_12;





       VAR_4->
        s_ModuleInfo
        [VAR_10].
        s_ChronoModuleInfo.
        b_CycleMode =
        VAR_11;

       VAR_4->
        s_ModuleInfo
        [VAR_10].
        s_ChronoModuleInfo.
        dw_ConfigReg =
        (VAR_4->
        s_ModuleInfo
        [VAR_10].
        s_ChronoModuleInfo.
        dw_ConfigReg &
        0x8F) | ((1 &
         VAR_12)
        << 5) | ((1 &
         VAR_11)
        << 6) | 0x10;





       if (VAR_12 ==
        128)
       {




        FUNC_2(VAR_4->
         s_ModuleInfo
         [VAR_10].
         s_ChronoModuleInfo.
         dw_ConfigReg,
         VAR_4->
         s_BoardInfos.
         ui_Address
         + 32 +
         (64 * VAR_10));
        VAR_4->tsk_Current = VAR_3;
       }






       FUNC_2(VAR_4->
        s_ModuleInfo
        [VAR_10].
        s_ChronoModuleInfo.
        dw_ConfigReg,
        VAR_4->
        s_BoardInfos.
        ui_Address +
        16 +
        (64 * VAR_10));





       FUNC_2(0, VAR_4->
        s_BoardInfos.
        ui_Address +
        36 +
        (64 * VAR_10));

      }
      else {




       FUNC_1("Interrupt parameter is wrong\n");
       VAR_9 = -6;
      }
     }
     else {




      FUNC_1("Chronometer acquisition mode cycle is wrong\n");
      VAR_9 = -5;
     }
     break;

    case 129:

     VAR_4->s_ModuleInfo[VAR_10].
      s_ChronoModuleInfo.
      b_InterruptMask = 0;

     VAR_4->s_ModuleInfo[VAR_10].
      s_ChronoModuleInfo.
      dw_ConfigReg =
      VAR_4->
      s_ModuleInfo[VAR_10].
      s_ChronoModuleInfo.
      dw_ConfigReg & 0x2F;






     FUNC_2(VAR_4->s_ModuleInfo[VAR_10].
      s_ChronoModuleInfo.dw_ConfigReg,
      VAR_4->s_BoardInfos.
      ui_Address + 16 +
      (64 * VAR_10));





     if (VAR_4->s_ModuleInfo[VAR_10].
      s_ChronoModuleInfo.
      b_CycleMode ==
      VAR_1) {




      FUNC_2(0, VAR_4->s_BoardInfos.
       ui_Address + 36 +
       (64 * VAR_10));
     }
     break;

    default:
     FUNC_1("Inputs wrong! Enable or Disable chrono\n");
     VAR_9 = -8;
    }
   } else {




    FUNC_1("Chronometer not initialised\n");
    VAR_9 = -4;
   }
  } else {




   FUNC_1("The module is not a Chronometer module\n");
   VAR_9 = -3;
  }
 } else {




  FUNC_1("Module number error\n");
  VAR_9 = -2;
 }

 return VAR_9;
}
