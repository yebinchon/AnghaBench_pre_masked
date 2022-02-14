
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
struct TYPE_9__ {int* dw_MolduleConfiguration; scalar_t__ ui_Address; } ;
struct TYPE_14__ {TYPE_6__* s_ModuleInfo; TYPE_2__ s_BoardInfos; } ;
struct TYPE_8__ {int b_CounterInit; int b_FrequencyMeasurementInit; } ;
struct TYPE_10__ {int b_ModeRegister4; } ;
struct TYPE_11__ {TYPE_3__ s_ByteModeRegister; } ;
struct TYPE_12__ {TYPE_1__ s_InitFlag; TYPE_4__ s_ModeRegister; } ;
struct TYPE_13__ {TYPE_5__ s_SiemensCounterInfo; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 TYPE_7__* VAR_5 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 unsigned int FUNC_3 (scalar_t__) ;
 int FUNC_4 (unsigned int,scalar_t__) ;

int FUNC_5(struct comedi_device *VAR_6,
 unsigned char VAR_7,
 unsigned char VAR_8,
 unsigned char VAR_9,
 unsigned int VAR_10, unsigned int *VAR_11)
{
 int VAR_12 = 0;
 unsigned int VAR_13 = 0;
 double VAR_14;
 unsigned int VAR_15 = 0;





 if (VAR_7 < 4) {




  if (VAR_5->
   s_ModuleInfo[VAR_7].
   s_SiemensCounterInfo.s_InitFlag.b_CounterInit == 1) {




   if ((VAR_8 == VAR_0) ||
    (VAR_8 == VAR_1) ||
    (VAR_8 == VAR_2)) {




    if (VAR_9 <= 2) {




     if (((VAR_8 == VAR_0)
       && (VAR_9 == 0)
       && (VAR_10 >=
        266)
       && (VAR_10 <=
        8738133UL))
      || ((VAR_8 ==
        VAR_0)
       && (VAR_9 == 1)
       && (VAR_10 >=
        1)
       && (VAR_10 <=
        8738UL))
      || ((VAR_8 ==
        VAR_0)
       && (VAR_9 == 2)
       && (VAR_10 >=
        1)
       && (VAR_10 <=
        8UL))
      || ((VAR_8 ==
        VAR_1)
       && (VAR_9 == 0)
       && (VAR_10 >=
        242)
       && (VAR_10 <=
        7943757UL))
      || ((VAR_8 ==
        VAR_1)
       && (VAR_9 == 1)
       && (VAR_10 >=
        1)
       && (VAR_10 <=
        7943UL))
      || ((VAR_8 ==
        VAR_1)
       && (VAR_9 == 2)
       && (VAR_10 >=
        1)
       && (VAR_10 <=
        7UL))
      || ((VAR_8 ==
        VAR_2)
       && (VAR_9 == 0)
       && (VAR_10 >=
        200)
       && (VAR_10 <=
        6553500UL))
      || ((VAR_8 ==
        VAR_2)
       && (VAR_9 == 1)
       && (VAR_10 >=
        1)
       && (VAR_10 <=
        6553UL))
      || ((VAR_8 ==
        VAR_2)
       && (VAR_9 == 2)
       && (VAR_10 >=
        1)
       && (VAR_10 <=
        6UL))) {




      if (VAR_8 ==
       VAR_2) {




       if ((VAR_5->s_BoardInfos.dw_MolduleConfiguration[VAR_7] & 0xFFFF) >= 0x3135) {
        VAR_15 =
         FUNC_3
         (VAR_5->
         s_BoardInfos.
         ui_Address
         + 36 +
         (64 * VAR_7));





        if ((VAR_15 & 1) != 1) {




         FUNC_0("40MHz quartz not on board\n");
         VAR_12
          =
          -7;
        }
       } else {



        FUNC_0("40MHz quartz not on board\n");
        VAR_12 =
         -7;
       }
      }





      if (VAR_12 == 0) {




       if ((VAR_5->s_BoardInfos.dw_MolduleConfiguration[VAR_7] & 0xFFFF) >= 0x3131) {





        if (VAR_8 == VAR_2) {




         VAR_5->
          s_ModuleInfo
          [VAR_7].
          s_SiemensCounterInfo.
          s_ModeRegister.
          s_ByteModeRegister.
          b_ModeRegister4
          =
          VAR_5->
          s_ModuleInfo
          [VAR_7].
          s_SiemensCounterInfo.
          s_ModeRegister.
          s_ByteModeRegister.
          b_ModeRegister4
          |
          VAR_4;
        }
        else {




         VAR_5->
          s_ModuleInfo
          [VAR_7].
          s_SiemensCounterInfo.
          s_ModeRegister.
          s_ByteModeRegister.
          b_ModeRegister4
          =
          VAR_5->
          s_ModuleInfo
          [VAR_7].
          s_SiemensCounterInfo.
          s_ModeRegister.
          s_ByteModeRegister.
          b_ModeRegister4
          &
          VAR_3;

        }





        FUNC_1();
        switch (VAR_9) {




        case 0:





         VAR_13
          =
          (unsigned int)
          (VAR_10
          *
          (0.00025 * VAR_8));





         if ((double)((double)VAR_10 * (0.00025 * (double)VAR_8)) >= ((double)((double)VAR_13 + 0.5))) {
          VAR_13
           =
           VAR_13
           +
           1;
         }





         *VAR_11
          =
          (unsigned int)
          (VAR_13
          /
          (0.00025 * (double)VAR_8));
         VAR_14
          =
          (double)
          VAR_13
          /
          (0.00025
          *
          (double)
          VAR_8);

         if ((double)((double)VAR_13 / (0.00025 * (double)VAR_8)) >= (double)((double)*VAR_11 + 0.5)) {
          *VAR_11
           =
           *VAR_11
           +
           1;
         }

         VAR_10
          =
          VAR_10
          -
          1;
         VAR_13
          =
          VAR_13
          -
          2;

         break;





        case 1:





         VAR_13
          =
          (unsigned int)
          (VAR_10
          *
          (0.25 * VAR_8));





         if ((double)((double)VAR_10 * (0.25 * (double)VAR_8)) >= ((double)((double)VAR_13 + 0.5))) {
          VAR_13
           =
           VAR_13
           +
           1;
         }





         *VAR_11
          =
          (unsigned int)
          (VAR_13
          /
          (0.25 * (double)VAR_8));
         VAR_14
          =
          (double)
          VAR_13
          /
          (
          (double)
          0.25
          *
          (double)
          VAR_8);

         if ((double)((double)VAR_13 / (0.25 * (double)VAR_8)) >= (double)((double)*VAR_11 + 0.5)) {
          *VAR_11
           =
           *VAR_11
           +
           1;
         }

         VAR_10
          =
          VAR_10
          -
          1;
         VAR_13
          =
          VAR_13
          -
          2;

         break;





        case 2:





         VAR_13
          =
          VAR_10
          *
          (250.0
          *
          VAR_8);





         if ((double)((double)VAR_10 * (250.0 * (double)VAR_8)) >= ((double)((double)VAR_13 + 0.5))) {
          VAR_13
           =
           VAR_13
           +
           1;
         }





         *VAR_11
          =
          (unsigned int)
          (VAR_13
          /
          (250.0 * (double)VAR_8));
         VAR_14
          =
          (double)
          VAR_13
          /
          (250.0
          *
          (double)
          VAR_8);

         if ((double)((double)VAR_13 / (250.0 * (double)VAR_8)) >= (double)((double)*VAR_11 + 0.5)) {
          *VAR_11
           =
           *VAR_11
           +
           1;
         }

         VAR_10
          =
          VAR_10
          -
          1;
         VAR_13
          =
          VAR_13
          -
          2;

         break;
        }

        FUNC_2();




        FUNC_4(VAR_13, VAR_5->s_BoardInfos.ui_Address + 32 + (64 * VAR_7));





        VAR_5->
         s_ModuleInfo
         [VAR_7].
         s_SiemensCounterInfo.
         s_InitFlag.
         b_FrequencyMeasurementInit
         = 1;
       } else {




        FUNC_0("Counter not initialised\n");
        VAR_12 =
         -3;
       }
      }
     } else {




      FUNC_0("Base timing selection is wrong\n");
      VAR_12 = -6;
     }
    } else {




     FUNC_0("Timing unity selection is wrong\n");
     VAR_12 = -5;
    }
   } else {




    FUNC_0("The selected PCI input clock is wrong\n");
    VAR_12 = -4;
   }
  } else {





   FUNC_0("Counter not initialised\n");
   VAR_12 = -3;
  }
 } else {




  FUNC_0("The selected module number parameter is wrong\n");
  VAR_12 = -2;
 }

 return VAR_12;
}
