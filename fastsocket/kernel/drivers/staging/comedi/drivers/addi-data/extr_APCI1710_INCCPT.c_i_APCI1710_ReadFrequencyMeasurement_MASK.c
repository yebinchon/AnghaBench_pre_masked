
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
struct TYPE_9__ {scalar_t__ ui_Address; } ;
struct TYPE_14__ {TYPE_6__* s_ModuleInfo; TYPE_2__ s_BoardInfos; } ;
struct TYPE_10__ {int b_ModeRegister1; } ;
struct TYPE_11__ {TYPE_3__ s_ByteModeRegister; } ;
struct TYPE_8__ {int b_CounterInit; int b_FrequencyMeasurementInit; int b_FrequencyMeasurementEnable; } ;
struct TYPE_12__ {TYPE_4__ s_ModeRegister; TYPE_1__ s_InitFlag; } ;
struct TYPE_13__ {TYPE_5__ s_SiemensCounterInfo; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 TYPE_7__* VAR_1 ;
 unsigned int FUNC_1 (scalar_t__) ;

int FUNC_2(struct comedi_device *VAR_2,
 unsigned char VAR_3,
 unsigned char *VAR_4, unsigned char *VAR_5, unsigned int *VAR_6)
{
 int VAR_7 = 0;
 unsigned int VAR_8;
 unsigned int VAR_9;





 if (VAR_3 < 4) {




  if (VAR_1->
   s_ModuleInfo[VAR_3].
   s_SiemensCounterInfo.s_InitFlag.b_CounterInit == 1) {




   if (VAR_1->
    s_ModuleInfo[VAR_3].
    s_SiemensCounterInfo.
    s_InitFlag.b_FrequencyMeasurementInit == 1) {




    if (VAR_1->
     s_ModuleInfo[VAR_3].
     s_SiemensCounterInfo.
     s_InitFlag.
     b_FrequencyMeasurementEnable == 1) {




     VAR_9 =
      FUNC_1(VAR_1->s_BoardInfos.
      ui_Address + 32 +
      (64 * VAR_3));





     if (VAR_9 & 1) {
      *VAR_4 = 2;
      *VAR_5 =
       (unsigned char) ((VAR_9 >>
        1) & 3);





      *VAR_6 =
       FUNC_1(VAR_1->
       s_BoardInfos.
       ui_Address + 28 +
       (64 * VAR_3));

      if (*VAR_5 == 0) {




       if ((VAR_1->s_ModuleInfo[VAR_3].s_SiemensCounterInfo.s_ModeRegister.s_ByteModeRegister.b_ModeRegister1 & VAR_0) == VAR_0) {




        if ((*VAR_6 & 0xFFFFU) != 0) {
         VAR_8
          =
          (unsigned int)
          *
          VAR_6
          &
          0xFFFFU;
         *VAR_6
          =
          (*VAR_6
          &
          0xFFFF0000UL)
          |
          (0xFFFFU
          -
          VAR_8);
        }





        if ((*VAR_6 & 0xFFFF0000UL) != 0) {
         VAR_8
          =
          (unsigned int)
          (
          (*VAR_6
           >>
           16)
          &
          0xFFFFU);
         *VAR_6
          =
          (*VAR_6
          &
          0xFFFFUL)
          |
          (
          (0xFFFFU - VAR_8) << 16);
        }
       } else {
        if (*VAR_6 != 0) {
         *VAR_6
          =
          0xFFFFFFFFUL
          -
          *VAR_6;
        }
       }
      } else {
       if (*VAR_5 == 1) {




        if ((*VAR_6 & 0xFFFF0000UL) != 0) {
         VAR_8
          =
          (unsigned int)
          (
          (*VAR_6
           >>
           16)
          &
          0xFFFFU);
         *VAR_6
          =
          (*VAR_6
          &
          0xFFFFUL)
          |
          (
          (0xFFFFU - VAR_8) << 16);
        }
       } else {
        if (*VAR_5
         == 2) {




         if ((*VAR_6 & 0xFFFFU) != 0) {
          VAR_8
           =
           (unsigned int)
           *
           VAR_6
           &
           0xFFFFU;
          *VAR_6
           =
           (*VAR_6
           &
           0xFFFF0000UL)
           |
           (0xFFFFU
           -
           VAR_8);
         }
        }
       }
      }
     } else {
      *VAR_4 = 1;
      *VAR_5 = 0;
     }
    } else {
     *VAR_4 = 0;
     *VAR_5 = 0;
    }
   } else {




    FUNC_0("Frequency measurement logic not initialised\n");
    VAR_7 = -4;
   }
  } else {





   FUNC_0("Counter not initialised\n");
   VAR_7 = -3;
  }
 } else {




  FUNC_0("The selected module number parameter is wrong\n");
  VAR_7 = -2;
 }

 return VAR_7;
}
