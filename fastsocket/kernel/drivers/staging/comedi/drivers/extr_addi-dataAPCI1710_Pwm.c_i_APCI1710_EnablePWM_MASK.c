
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct comedi_device {int dummy; } ;
struct TYPE_9__ {int* dw_MolduleConfiguration; scalar_t__ ui_Address; } ;
struct TYPE_10__ {TYPE_4__ s_BoardInfos; TYPE_3__* s_ModuleInfo; int tsk_Current; } ;
struct TYPE_7__ {TYPE_1__* s_PWMInfo; } ;
struct TYPE_8__ {TYPE_2__ s_PWMModuleInfo; } ;
struct TYPE_6__ {unsigned char b_InterruptEnable; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int VAR_3 ;
 TYPE_5__* VAR_4 ;
 unsigned int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

int FUNC_3(struct comedi_device *VAR_5,
 unsigned char VAR_6,
 unsigned char VAR_7,
 unsigned char VAR_8,
 unsigned char VAR_9,
 unsigned char VAR_10, unsigned char VAR_11, unsigned char VAR_12)
{
 int VAR_13 = 0;
 unsigned int VAR_14;
 unsigned int VAR_15;

 VAR_4->tsk_Current = VAR_3;




 if (VAR_6 < 4) {




  if ((VAR_4->s_BoardInfos.
    dw_MolduleConfiguration[VAR_6] &
    0xFFFF0000UL) == VAR_2) {




   if (VAR_7 <= 1) {




    VAR_14 = FUNC_1(VAR_4->s_BoardInfos.
     ui_Address + 12 + (20 * VAR_7) +
     (64 * VAR_6));

    if (VAR_14 & 0x10) {




     if (VAR_8 <= 1) {




      if (VAR_9 <= 1) {




       if (VAR_10 <= 2) {




        if (VAR_11
         <= 1) {




         if (VAR_12 == VAR_1 || VAR_12 == VAR_0) {
          VAR_15
           =
           FUNC_1
           (VAR_4->
           s_BoardInfos.
           ui_Address
           +
           8
           +
           (20 * VAR_7) + (64 * VAR_6));

          VAR_15
           =
           VAR_15
           &
           0x80;





          VAR_15
           =
           VAR_15
           |
           VAR_9
           |
           (VAR_12
           <<
           3)
           |
           (VAR_11
           <<
           4)
           |
           (VAR_8
           <<
           5);

          if (VAR_10 & 3) {
           VAR_15
            =
            VAR_15
            |
            2;

           if (VAR_10 & 2) {
            VAR_15
             =
             VAR_15
             |
             4;
           }
          }

          VAR_4->
           s_ModuleInfo
           [VAR_6].
           s_PWMModuleInfo.
           s_PWMInfo
           [VAR_7].
           b_InterruptEnable
           =
           VAR_12;





          FUNC_2(VAR_15, VAR_4->s_BoardInfos.ui_Address + 8 + (20 * VAR_7) + (64 * VAR_6));




          FUNC_2(1, VAR_4->s_BoardInfos.ui_Address + 12 + (20 * VAR_7) + (64 * VAR_6));
         }
         else {



          FUNC_0("Interrupt parameter is wrong\n");
          VAR_13
           =
           -10;
         }
        }
        else {



         FUNC_0("Extern gate signal selection is wrong\n");
         VAR_13
          =
          -9;
        }
       }
       else {



        FUNC_0("PWM stop level selection is wrong\n");
        VAR_13 =
         -8;
       }
      }
      else {



       FUNC_0("PWM stop mode selection is wrong\n");
       VAR_13 = -7;
      }
     }
     else {



      FUNC_0("PWM start level selection is wrong\n");
      VAR_13 = -6;
     }
    }
    else {



     FUNC_0("PWM not initialised\n");
     VAR_13 = -5;
    }
   }
   else {



    FUNC_0("Tor PWM selection is wrong\n");
    VAR_13 = -4;
   }
  } else {



   FUNC_0("The module is not a PWM module\n");
   VAR_13 = -3;
  }
 } else {



  FUNC_0("Module number error\n");
  VAR_13 = -2;
 }

 return VAR_13;
}
