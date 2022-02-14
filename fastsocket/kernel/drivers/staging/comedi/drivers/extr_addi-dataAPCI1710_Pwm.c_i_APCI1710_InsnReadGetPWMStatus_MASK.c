
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {int dummy; } ;
struct TYPE_3__ {int* dw_MolduleConfiguration; scalar_t__ ui_Address; } ;
struct TYPE_4__ {TYPE_1__ s_BoardInfos; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 TYPE_2__* VAR_1 ;
 unsigned int FUNC_3 (scalar_t__) ;

int FUNC_4(struct comedi_device *VAR_2, struct comedi_subdevice *VAR_3,
 struct comedi_insn *VAR_4, unsigned int *VAR_5)
{
 int VAR_6 = 0;
 unsigned int VAR_7;

 unsigned char VAR_8;
 unsigned char VAR_9;
 unsigned char *VAR_10;
 unsigned char *VAR_11;

 VAR_6 = VAR_4->n;
 VAR_8 = (unsigned char) FUNC_0(VAR_4->chanspec);
 VAR_9 = (unsigned char) FUNC_1(VAR_4->chanspec);
 VAR_10 = (unsigned char *) &VAR_5[0];
 VAR_11 = (unsigned char *) &VAR_5[1];





 if (VAR_8 < 4) {




  if ((VAR_1->s_BoardInfos.
    dw_MolduleConfiguration[VAR_8] &
    0xFFFF0000UL) == VAR_0) {




   if (VAR_9 <= 1) {




    VAR_7 = FUNC_3(VAR_1->s_BoardInfos.
     ui_Address + 12 + (20 * VAR_9) +
     (64 * VAR_8));

    if (VAR_7 & 0x10) {




     if (VAR_7 & 0x1) {
      *VAR_10 =
       (unsigned char) ((VAR_7 >> 7)
       & 1);
      *VAR_11 =
       (unsigned char) ((VAR_7 >> 6)
       & 1);
     }
     else {




      FUNC_2("PWM not enabled \n");
      VAR_6 = -6;
     }
    }
    else {




     FUNC_2("PWM not initialised\n");
     VAR_6 = -5;
    }
   }
   else {




    FUNC_2("Tor PWM selection is wrong\n");
    VAR_6 = -4;
   }
  } else {




   FUNC_2("The module is not a PWM module\n");
   VAR_6 = -3;
  }
 } else {




  FUNC_2("Module number error\n");
  VAR_6 = -2;
 }

 return VAR_6;
}
