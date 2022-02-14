
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
typedef unsigned int dw_And2 ;
typedef unsigned int dw_And1 ;
typedef unsigned int dw_And ;
struct TYPE_5__ {int* dw_MolduleConfiguration; int ui_Address; } ;
struct TYPE_8__ {TYPE_3__* s_ModuleInfo; TYPE_1__ s_BoardInfos; } ;
struct TYPE_6__ {int b_SSIInit; int b_SSIProfile; unsigned char b_PositionTurnLength; unsigned char b_TurnCptLength; } ;
struct TYPE_7__ {TYPE_2__ s_SSICounterInfo; } ;


 int VAR_0 ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 TYPE_4__* VAR_1 ;
 unsigned int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (char*) ;

int FUNC_7(struct comedi_device *VAR_2, struct comedi_subdevice *VAR_3,
 struct comedi_insn *VAR_4, unsigned int *VAR_5)
{
 int VAR_6 = 0;
 unsigned char VAR_7;
 unsigned char VAR_8;
 unsigned char VAR_9;
 unsigned char VAR_10;
 unsigned int VAR_11;
 unsigned int VAR_12;
 unsigned int VAR_13;
 unsigned int VAR_14;
 unsigned int VAR_15;
 unsigned char VAR_16;
 unsigned char VAR_17;
 unsigned char VAR_18;
 unsigned int *VAR_19;
 unsigned int *VAR_20;
 unsigned int *VAR_21;
 unsigned int *VAR_22;

 VAR_6 = VAR_4->n;
 VAR_21 = (unsigned int *) &VAR_5[0];

 VAR_22 = (unsigned int *) &VAR_5[1];

 VAR_19 = (unsigned int *) &VAR_5[0];
 VAR_20 = (unsigned int *) &VAR_5[3];
 VAR_16 = (unsigned char) FUNC_0(VAR_4->chanspec);
 VAR_17 = (unsigned char) FUNC_1(VAR_4->chanspec);
 VAR_18 = (unsigned char) FUNC_2(VAR_4->chanspec);





 if (VAR_16 < 4) {




  if ((VAR_1->s_BoardInfos.
    dw_MolduleConfiguration[VAR_16] &
    0xFFFF0000UL) == VAR_0) {




   if (VAR_1->s_ModuleInfo[VAR_16].
    s_SSICounterInfo.b_SSIInit == 1) {

    switch (VAR_18) {

    case 129:




     if (VAR_17 < 3) {




      FUNC_5(0, VAR_1->s_BoardInfos.
       ui_Address + 8 +
       (64 * VAR_16));

      do {




       VAR_14 =
        FUNC_4(VAR_1->
        s_BoardInfos.
        ui_Address +
        (64 * VAR_16));
      } while ((VAR_14 & 0x1)
        != 0);





      VAR_15 =
       FUNC_4(VAR_1->
       s_BoardInfos.
       ui_Address + 4 +
       (VAR_17 * 4) +
       (64 * VAR_16));

      VAR_8 =
       VAR_1->
       s_ModuleInfo
       [VAR_16].
       s_SSICounterInfo.
       b_SSIProfile / 2;

      if ((VAR_8 * 2) !=
       VAR_1->
       s_ModuleInfo
       [VAR_16].
       s_SSICounterInfo.
       b_SSIProfile) {
       VAR_8++;
      }

      VAR_9 =
       VAR_8 -
       VAR_1->
       s_ModuleInfo
       [VAR_16].
       s_SSICounterInfo.
       b_PositionTurnLength;

      *VAR_21 =
       VAR_15 >>
       VAR_9;

      VAR_11 = 1;

      for (VAR_7 = 0;
       VAR_7 <
       VAR_1->
       s_ModuleInfo
       [VAR_16].
       s_SSICounterInfo.
       b_PositionTurnLength;
       VAR_7++) {
       VAR_11 = VAR_11 * 2;
      }

      *VAR_21 =
       *VAR_21 &
       ((VAR_11) - 1);

      *VAR_22 =
       VAR_15 >>
       VAR_8;

      VAR_11 = 1;

      for (VAR_7 = 0;
       VAR_7 <
       VAR_1->
       s_ModuleInfo
       [VAR_16].
       s_SSICounterInfo.
       b_TurnCptLength;
       VAR_7++) {
       VAR_11 = VAR_11 * 2;
      }

      *VAR_22 =
       *VAR_22 &
       ((VAR_11) - 1);
     } else {




      FUNC_3("The selected SSI is wrong\n");
      VAR_6 = -5;
     }
     break;

    case 128:
     VAR_12 = 1;

     for (VAR_7 = 0;
      VAR_7 <
      VAR_1->
      s_ModuleInfo[VAR_16].
      s_SSICounterInfo.
      b_PositionTurnLength; VAR_7++) {
      VAR_12 = VAR_12 * 2;
     }

     VAR_13 = 1;

     for (VAR_7 = 0;
      VAR_7 <
      VAR_1->
      s_ModuleInfo[VAR_16].
      s_SSICounterInfo.
      b_TurnCptLength; VAR_7++) {
      VAR_13 = VAR_13 * 2;
     }





     FUNC_5(0, VAR_1->s_BoardInfos.
      ui_Address + 8 +
      (64 * VAR_16));

     do {




      VAR_14 =
       FUNC_4(VAR_1->
       s_BoardInfos.
       ui_Address +
       (64 * VAR_16));
     } while ((VAR_14 & 0x1) != 0);

     for (VAR_10 = 0; VAR_10 < 3;
      VAR_10++) {




      VAR_15 =
       FUNC_4(VAR_1->
       s_BoardInfos.
       ui_Address + 4 +
       (VAR_10 * 4) +
       (64 * VAR_16));

      VAR_8 =
       VAR_1->
       s_ModuleInfo
       [VAR_16].
       s_SSICounterInfo.
       b_SSIProfile / 2;

      if ((VAR_8 * 2) !=
       VAR_1->
       s_ModuleInfo
       [VAR_16].
       s_SSICounterInfo.
       b_SSIProfile) {
       VAR_8++;
      }

      VAR_9 =
       VAR_8 -
       VAR_1->
       s_ModuleInfo
       [VAR_16].
       s_SSICounterInfo.
       b_PositionTurnLength;

      VAR_19[VAR_10] =
       VAR_15 >>
       VAR_9;
      VAR_19[VAR_10] =
       VAR_19[VAR_10] &
       ((VAR_12) - 1);

      VAR_20[VAR_10] =
       VAR_15 >>
       VAR_8;
      VAR_20[VAR_10] =
       VAR_20[VAR_10] &
       ((VAR_13) - 1);
     }
     break;

    default:
     FUNC_6("Read Type Inputs Wrong\n");

    }

   } else {




    FUNC_3("SSI not initialised\n");
    VAR_6 = -4;
   }
  } else {




   FUNC_3("The module is not a SSI module\n");
   VAR_6 = -3;

  }
 } else {




  FUNC_3("Module number error\n");
  VAR_6 = -2;
 }

 return VAR_6;
}
