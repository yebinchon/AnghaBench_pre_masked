
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
struct TYPE_5__ {int b_ChronoInit; } ;
struct TYPE_6__ {TYPE_1__ s_ChronoModuleInfo; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 TYPE_4__* VAR_1 ;
 unsigned int FUNC_1 (scalar_t__) ;

int FUNC_2(struct comedi_device *VAR_2,
 unsigned char VAR_3, unsigned char *VAR_4)
{
 int VAR_5 = 0;
 unsigned int VAR_6;





 if (VAR_3 < 4) {




  if ((VAR_1->s_BoardInfos.
    dw_MolduleConfiguration[VAR_3] &
    0xFFFF0000UL) == VAR_0) {




   if (VAR_1->
    s_ModuleInfo[VAR_3].
    s_ChronoModuleInfo.b_ChronoInit == 1) {

    VAR_6 = FUNC_1(VAR_1->s_BoardInfos.
     ui_Address + 8 + (64 * VAR_3));





    if ((VAR_6 & 8) == 8) {




     *VAR_4 = 3;
    }
    else {




     if ((VAR_6 & 2) == 2) {




      *VAR_4 = 2;
     }
     else {




      if ((VAR_6 & 1) == 1) {




       *VAR_4 = 1;
      }
      else {




       *VAR_4 = 0;
      }
     }
    }
   } else {



    FUNC_0("Chronometer not initialised\n");
    VAR_5 = -4;
   }
  } else {



   FUNC_0("The module is not a Chronometer module\n");
   VAR_5 = -3;
  }
 } else {



  FUNC_0("Module number error\n");
  VAR_5 = -2;
 }

 return VAR_5;
}
