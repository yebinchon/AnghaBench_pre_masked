
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
struct TYPE_7__ {int* dw_MolduleConfiguration; scalar_t__ ui_Address; } ;
struct TYPE_8__ {TYPE_3__ s_BoardInfos; TYPE_2__* s_ModuleInfo; } ;
struct TYPE_5__ {int b_DigitalInit; scalar_t__ b_ChannelAMode; scalar_t__ b_ChannelBMode; } ;
struct TYPE_6__ {TYPE_1__ s_DigitalIOInfo; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 TYPE_4__* VAR_1 ;
 unsigned int FUNC_3 (scalar_t__) ;

int FUNC_4(struct comedi_device *VAR_2,
 struct comedi_subdevice *VAR_3, struct comedi_insn *VAR_4, unsigned int *VAR_5)
{
 int VAR_6 = 0;
 unsigned int VAR_7;
 unsigned char VAR_8, VAR_9;
 unsigned char *VAR_10;
 VAR_8 = (unsigned char) FUNC_0(VAR_4->chanspec);
 VAR_9 = (unsigned char) FUNC_1(VAR_4->chanspec);
 VAR_5[0] = 0;
 VAR_10 = (unsigned char *) &VAR_5[0];
 VAR_6 = VAR_4->n;





 if (VAR_8 < 4) {




  if ((VAR_1->s_BoardInfos.
    dw_MolduleConfiguration[VAR_8] &
    0xFFFF0000UL) == VAR_0) {




   if (VAR_9 <= 6) {




    if (VAR_1->s_ModuleInfo[VAR_8].
     s_DigitalIOInfo.b_DigitalInit == 1) {




     if (VAR_9 > 4) {




      if (VAR_9 == 5) {




       if (VAR_1->
        s_ModuleInfo
        [VAR_8].
        s_DigitalIOInfo.
        b_ChannelAMode
        != 0) {




        VAR_6 =
         -6;
       }
      }
      else {




       if (VAR_1->
        s_ModuleInfo
        [VAR_8].
        s_DigitalIOInfo.
        b_ChannelBMode
        != 0) {




        VAR_6 =
         -7;
       }
      }
     }





     if (VAR_6 >= 0) {
      VAR_7 =
       FUNC_3(VAR_1->
       s_BoardInfos.
       ui_Address +
       (64 * VAR_8));

      *VAR_10 =
       (unsigned char) ((VAR_7 ^
        0x1C) >>
       VAR_9) & 1;

     }
    } else {



     FUNC_2("Digital I/O not initialised\n");
     VAR_6 = -5;
    }
   } else {



    FUNC_2("Selected digital input error\n");
    VAR_6 = -4;
   }
  } else {



   FUNC_2("The module is not a digital I/O module\n");
   VAR_6 = -3;
  }
 } else {



  FUNC_2("Module number error\n");
  VAR_6 = -2;
 }

 return VAR_6;
}
