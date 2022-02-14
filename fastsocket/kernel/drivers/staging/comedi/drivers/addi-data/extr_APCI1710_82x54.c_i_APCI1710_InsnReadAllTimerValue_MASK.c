
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


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {int dummy; } ;
struct TYPE_13__ {int* dw_MolduleConfiguration; scalar_t__ ui_Address; } ;
struct TYPE_9__ {size_t ui_Read; TYPE_1__* s_FIFOInterruptParameters; } ;
struct TYPE_14__ {TYPE_6__ s_BoardInfos; TYPE_5__* s_ModuleInfo; TYPE_2__ s_InterruptParameters; } ;
struct TYPE_11__ {TYPE_3__* s_82X54TimerInfo; } ;
struct TYPE_12__ {TYPE_4__ s_82X54ModuleInfo; } ;
struct TYPE_10__ {int b_82X54Init; } ;
struct TYPE_8__ {unsigned int b_OldModuleMask; unsigned int ul_OldInterruptMask; unsigned int ul_OldCounterLatchValue; } ;


 int VAR_0 ;
 int VAR_1 ;


 unsigned char FUNC_0 (int ) ;
 unsigned char FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 TYPE_7__* VAR_2 ;
 unsigned int FUNC_3 (int ) ;
 int FUNC_4 (int,int ) ;

int FUNC_5(struct comedi_device *VAR_3, struct comedi_subdevice *VAR_4,
         struct comedi_insn *VAR_5, unsigned int *VAR_6)
{
 int VAR_7 = 0;
 unsigned char VAR_8, VAR_9;
 unsigned int *VAR_10;

 VAR_8 = FUNC_0(VAR_5->chanspec);
 VAR_9 = FUNC_1(VAR_5->chanspec);
 VAR_10 = (unsigned int *) VAR_6;
 VAR_7 = VAR_5->n;

 switch (VAR_9) {
 case 128:

  VAR_6[0] = VAR_2->s_InterruptParameters.s_FIFOInterruptParameters[VAR_2->s_InterruptParameters.ui_Read].b_OldModuleMask;
  VAR_6[1] = VAR_2->s_InterruptParameters.s_FIFOInterruptParameters[VAR_2->s_InterruptParameters.ui_Read].ul_OldInterruptMask;
  VAR_6[2] = VAR_2->s_InterruptParameters.s_FIFOInterruptParameters[VAR_2->s_InterruptParameters.ui_Read].ul_OldCounterLatchValue;


  VAR_2->s_InterruptParameters.ui_Read = (VAR_2->s_InterruptParameters.ui_Read + 1) % VAR_1;

  break;

 case 129:

  if (VAR_8 < 4) {

   if ((VAR_2->s_BoardInfos.dw_MolduleConfiguration[VAR_8] & 0xFFFF0000UL) == VAR_0) {

    if (VAR_2->s_ModuleInfo[VAR_8].s_82X54ModuleInfo.s_82X54TimerInfo[0].b_82X54Init == 1) {

     if (VAR_2->s_ModuleInfo[VAR_8].s_82X54ModuleInfo.s_82X54TimerInfo[1].b_82X54Init == 1) {

      if (VAR_2->s_ModuleInfo[VAR_8].s_82X54ModuleInfo.s_82X54TimerInfo[2].b_82X54Init == 1) {

       FUNC_4(0x17, VAR_2->s_BoardInfos.ui_Address + 12 + (64 * VAR_8));


       VAR_10[0] = FUNC_3(VAR_2->s_BoardInfos.ui_Address + 0 + (64 * VAR_8));


       VAR_10[1] = FUNC_3(VAR_2->s_BoardInfos.ui_Address + 4 + (64 * VAR_8));


       VAR_10[2] = FUNC_3(VAR_2->s_BoardInfos.ui_Address + 8 + (64 * VAR_8));
      } else {

       FUNC_2("Timer 2 not initialised see function\n");
       VAR_7 = -6;
      }
     } else {

      FUNC_2("Timer 1 not initialised see function\n");
      VAR_7 = -5;
     }
    } else {

     FUNC_2("Timer 0 not initialised see function\n");
     VAR_7 = -4;
    }
   } else {

    FUNC_2("The module is not a TIMER module\n");
    VAR_7 = -3;
   }
  } else {

   FUNC_2("Module number error\n");
   VAR_7 = -2;
  }

 }
 return VAR_7;
}
