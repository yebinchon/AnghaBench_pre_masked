
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_device {int dummy; } ;
struct TYPE_3__ {int* dw_MolduleConfiguration; scalar_t__ ui_Address; } ;
struct TYPE_4__ {TYPE_1__ s_BoardInfos; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 TYPE_2__* VAR_1 ;
 unsigned int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;

int FUNC_3(struct comedi_device *VAR_2, unsigned char VAR_3, unsigned char VAR_4)
{
 int VAR_5 = 0;
 unsigned int VAR_6;





 if (VAR_3 < 4) {




  if ((VAR_1->s_BoardInfos.
    dw_MolduleConfiguration[VAR_3] &
    0xFFFF0000UL) == VAR_0) {




   if (VAR_4 <= 1) {




    VAR_6 = FUNC_1(VAR_1->s_BoardInfos.
     ui_Address + 12 + (20 * VAR_4) +
     (64 * VAR_3));

    if (VAR_6 & 0x10) {




     if (VAR_6 & 0x1) {



      FUNC_2(0, VAR_1->s_BoardInfos.
       ui_Address + 12 +
       (20 * VAR_4) +
       (64 * VAR_3));
     }
     else {



      FUNC_0("PWM not enabled\n");
      VAR_5 = -6;
     }
    }
    else {



     FUNC_0(" PWM not initialised\n");
     VAR_5 = -5;
    }
   }
   else {



    FUNC_0("Tor PWM selection is wrong\n");
    VAR_5 = -4;
   }
  } else {



   FUNC_0("The module is not a PWM module\n");
   VAR_5 = -3;
  }
 } else {



  FUNC_0("Module number error\n");
  VAR_5 = -2;
 }

 return VAR_5;
}
