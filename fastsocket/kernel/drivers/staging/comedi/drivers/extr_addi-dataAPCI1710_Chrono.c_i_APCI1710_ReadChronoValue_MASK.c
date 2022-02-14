
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct comedi_device {int dummy; } ;
struct TYPE_7__ {int* dw_MolduleConfiguration; scalar_t__ ui_Address; } ;
struct TYPE_8__ {TYPE_3__ s_BoardInfos; TYPE_2__* s_ModuleInfo; } ;
struct TYPE_5__ {int b_ChronoInit; scalar_t__ b_CycleMode; } ;
struct TYPE_6__ {TYPE_1__ s_ChronoModuleInfo; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 TYPE_4__* VAR_2 ;
 unsigned int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,scalar_t__) ;

int FUNC_4(struct comedi_device *VAR_3,
 unsigned char VAR_4,
 unsigned int VAR_5, unsigned char *VAR_6, unsigned int *VAR_7)
{
 int VAR_8 = 0;
 unsigned int VAR_9;
 unsigned int VAR_10 = 0;





 if (VAR_4 < 4) {




  if ((VAR_2->s_BoardInfos.
    dw_MolduleConfiguration[VAR_4] &
    0xFFFF0000UL) == VAR_0) {




   if (VAR_2->
    s_ModuleInfo[VAR_4].
    s_ChronoModuleInfo.b_ChronoInit == 1) {




    if ((VAR_5 >= 0)
     && (VAR_5 <= 65535UL)) {

     for (;;) {




      VAR_9 =
       FUNC_1(VAR_2->
       s_BoardInfos.
       ui_Address + 8 +
       (64 * VAR_4));





      if ((VAR_9 & 8) == 8) {




       *VAR_6 = 3;





       if (VAR_2->
        s_ModuleInfo
        [VAR_4].
        s_ChronoModuleInfo.
        b_CycleMode ==
        VAR_1)
       {




        FUNC_3(0, VAR_2->s_BoardInfos.ui_Address + 36 + (64 * VAR_4));
       }

       break;
      }
      else {




       if ((VAR_9 & 2) ==
        2) {




        *VAR_6
         = 2;





        if (VAR_2->
         s_ModuleInfo
         [VAR_4].
         s_ChronoModuleInfo.
         b_CycleMode
         ==
         VAR_1)
        {




         FUNC_3(0, VAR_2->s_BoardInfos.ui_Address + 36 + (64 * VAR_4));
        }
        break;
       }
       else {




        if ((VAR_9 & 1) == 1) {




         *VAR_6
          =
          1;
        }
        else {




         *VAR_6
          =
          0;
        }
       }
      }

      if (VAR_10 == VAR_5) {




       break;
      } else {




       VAR_10 =
        VAR_10 + 1;
       FUNC_2(1000);

      }
     }





     if (*VAR_6 == 2) {




      *VAR_7 =
       FUNC_1(VAR_2->
       s_BoardInfos.
       ui_Address + 4 +
       (64 * VAR_4));

      if (*VAR_7 != 0) {
       *VAR_7 =
        *VAR_7
        - 1;
      }
     } else {




      if ((*VAR_6 != 3)
       && (VAR_10 ==
        VAR_5)
       && (VAR_5 != 0)) {




       *VAR_6 = 4;
      }
     }

    } else {



     FUNC_0("Timeout parameter is wrong\n");
     VAR_8 = -5;
    }
   } else {



    FUNC_0("Chronometer not initialised\n");
    VAR_8 = -4;
   }
  } else {



   FUNC_0("The module is not a Chronometer module\n");
   VAR_8 = -3;
  }
 } else {



  FUNC_0("Module number error\n");
  VAR_8 = -2;
 }

 return VAR_8;
}
