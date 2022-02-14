
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
struct TYPE_7__ {int* dw_MolduleConfiguration; int ui_Address; } ;
struct TYPE_8__ {TYPE_3__ s_BoardInfos; TYPE_2__* s_ModuleInfo; } ;
struct TYPE_5__ {int b_ChronoInit; } ;
struct TYPE_6__ {TYPE_1__ s_ChronoModuleInfo; } ;


 int VAR_0 ;




 unsigned char FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 TYPE_4__* VAR_1 ;
 unsigned int FUNC_3 (int ) ;
 int FUNC_4 (int,int ) ;

int FUNC_5(struct comedi_device *VAR_2,
 struct comedi_subdevice *VAR_3, struct comedi_insn *VAR_4, unsigned int *VAR_5)
{
 int VAR_6 = 0;
 unsigned char VAR_7, VAR_8, VAR_9, VAR_10;
 unsigned int VAR_11;
 unsigned char *VAR_12;
 unsigned char *VAR_13;

 VAR_7 = FUNC_0(VAR_4->chanspec);
 VAR_6 = VAR_4->n;
 VAR_10 = (unsigned char) VAR_5[0];





 if (VAR_7 < 4) {




  if ((VAR_1->s_BoardInfos.
    dw_MolduleConfiguration[VAR_7] &
    0xFFFF0000UL) == VAR_0) {




   if (VAR_1->s_ModuleInfo[VAR_7].
    s_ChronoModuleInfo.b_ChronoInit == 1) {



    switch (VAR_10) {

    case 129:

     VAR_8 =
      (unsigned char) FUNC_1(VAR_4->chanspec);
     if (VAR_8 <= 2) {

      FUNC_4(0, VAR_1->s_BoardInfos.
       ui_Address + 20 +
       (VAR_8 * 4) +
       (64 * VAR_7));
     }
     else {




      FUNC_2("The selected digital output is wrong\n");
      VAR_6 = -4;

     }

     break;

    case 128:

     VAR_8 =
      (unsigned char) FUNC_1(VAR_4->chanspec);
     if (VAR_8 <= 2) {

      FUNC_4(1, VAR_1->s_BoardInfos.
       ui_Address + 20 +
       (VAR_8 * 4) +
       (64 * VAR_7));
     }
     else {




      FUNC_2("The selected digital output is wrong\n");
      VAR_6 = -4;

     }

     break;

    case 131:



     VAR_12 = (unsigned char *) &VAR_5[0];
     VAR_9 =
      (unsigned char) FUNC_1(VAR_4->chanspec);

     if (VAR_9 <= 2) {

      VAR_11 =
       FUNC_3(VAR_1->
       s_BoardInfos.
       ui_Address + 12 +
       (64 * VAR_7));

      *VAR_12 =
       (unsigned char) (((VAR_11 >>
         VAR_9)
        & 1) ^ 1);
     }
     else {




      FUNC_2("The selected digital input is wrong\n");
      VAR_6 = -4;
     }

     break;

    case 130:

     VAR_13 = (unsigned char *) &VAR_5[0];

     VAR_11 =
      FUNC_3(VAR_1->s_BoardInfos.
      ui_Address + 12 +
      (64 * VAR_7));

     *VAR_13 =
      (unsigned char) ((VAR_11 & 0x7) ^ 7);
     break;
    }
   } else {




    FUNC_2("Chronometer not initialised\n");
    VAR_6 = -5;
   }
  } else {




   FUNC_2("The module is not a Chronometer module\n");
   VAR_6 = -3;
  }
 } else {




  FUNC_2("Module number error\n");
  VAR_6 = -2;
 }

 return VAR_6;
}
