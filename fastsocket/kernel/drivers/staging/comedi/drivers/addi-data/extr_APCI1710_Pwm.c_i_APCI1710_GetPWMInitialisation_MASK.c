
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
struct TYPE_6__ {int* dw_MolduleConfiguration; scalar_t__ ui_Address; } ;
struct TYPE_10__ {TYPE_4__* s_ModuleInfo; TYPE_1__ s_BoardInfos; } ;
struct TYPE_8__ {TYPE_2__* s_PWMInfo; } ;
struct TYPE_9__ {TYPE_3__ s_PWMModuleInfo; } ;
struct TYPE_7__ {unsigned char b_TimingUnit; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 TYPE_5__* VAR_1 ;
 unsigned int FUNC_1 (scalar_t__) ;

int FUNC_2(struct comedi_device *VAR_2,
 unsigned char VAR_3,
 unsigned char VAR_4,
 unsigned char *VAR_5,
 unsigned int *VAR_6,
 unsigned int *VAR_7,
 unsigned char *VAR_8,
 unsigned char *VAR_9,
 unsigned char *VAR_10,
 unsigned char *VAR_11, unsigned char *VAR_12, unsigned char *VAR_13)
{
 int VAR_14 = 0;
 unsigned int VAR_15;
 unsigned int VAR_16;





 if (VAR_3 < 4) {




  if ((VAR_1->s_BoardInfos.
    dw_MolduleConfiguration[VAR_3] &
    0xFFFF0000UL) == VAR_0) {




   if (VAR_4 <= 1) {




    VAR_15 = FUNC_1(VAR_1->s_BoardInfos.
     ui_Address + 12 + (20 * VAR_4) +
     (64 * VAR_3));

    if (VAR_15 & 0x10) {




     *VAR_6 =
      FUNC_1(VAR_1->s_BoardInfos.
      ui_Address + 0 + (20 * VAR_4) +
      (64 * VAR_3));





     *VAR_7 =
      FUNC_1(VAR_1->s_BoardInfos.
      ui_Address + 4 + (20 * VAR_4) +
      (64 * VAR_3));





     VAR_16 = FUNC_1(VAR_1->s_BoardInfos.
      ui_Address + 8 + (20 * VAR_4) +
      (64 * VAR_3));

     *VAR_8 =
      (unsigned char) ((VAR_16 >> 5) & 1);
     *VAR_9 =
      (unsigned char) ((VAR_16 >> 0) & 1);
     *VAR_10 =
      (unsigned char) ((VAR_16 >> 1) & 1);
     *VAR_11 =
      (unsigned char) ((VAR_16 >> 4) & 1);
     *VAR_12 =
      (unsigned char) ((VAR_16 >> 3) & 1);

     if (*VAR_10) {
      *VAR_10 =
       *VAR_10 +
       (unsigned char) ((VAR_16 >>
        2) & 1);
     }





     VAR_16 = FUNC_1(VAR_1->s_BoardInfos.
      ui_Address + 8 + (20 * VAR_4) +
      (64 * VAR_3));

     *VAR_13 =
      (unsigned char) ((VAR_16 >> 0) & 1);

     *VAR_5 = VAR_1->
      s_ModuleInfo[VAR_3].
      s_PWMModuleInfo.
      s_PWMInfo[VAR_4].b_TimingUnit;
    }
    else {



     FUNC_0("PWM not initialised\n");
     VAR_14 = -5;
    }
   }
   else {



    FUNC_0("Tor PWM selection is wrong\n");
    VAR_14 = -4;
   }
  } else {



   FUNC_0("The module is not a PWM module\n");
   VAR_14 = -3;
  }
 } else {



  FUNC_0("Module number error\n");
  VAR_14 = -2;
 }

 return VAR_14;
}
