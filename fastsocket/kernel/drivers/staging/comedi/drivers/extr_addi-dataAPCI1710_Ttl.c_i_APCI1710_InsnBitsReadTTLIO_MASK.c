
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
struct TYPE_5__ {int b_TTLInit; int * b_PortConfiguration; } ;
struct TYPE_6__ {TYPE_1__ s_TTLIOInfo; } ;


 int VAR_0 ;


 unsigned char FUNC_0 (int ) ;
 unsigned char FUNC_1 (int ) ;
 unsigned char FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 TYPE_4__* VAR_1 ;
 unsigned int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;

int FUNC_6(struct comedi_device *VAR_2, struct comedi_subdevice *VAR_3,
 struct comedi_insn *VAR_4, unsigned int *VAR_5)
{
 int VAR_6 = 0;
 unsigned int VAR_7;
 unsigned char VAR_8;
 unsigned char VAR_9;
 unsigned char VAR_10;
 unsigned char VAR_11;
 unsigned char *VAR_12;
 unsigned char *VAR_13;

 VAR_6 = VAR_4->n;
 VAR_11 = (unsigned char) VAR_5[0];
 VAR_8 = FUNC_0(VAR_4->chanspec);
 VAR_9 = FUNC_2(VAR_4->chanspec);
 VAR_10 = FUNC_1(VAR_4->chanspec);





 if (VAR_8 < 4) {




  if ((VAR_1->s_BoardInfos.
    dw_MolduleConfiguration[VAR_8] &
    0xFFFF0000UL) == VAR_0) {
   switch (VAR_11) {

   case 129:
    VAR_12 = (unsigned char *) &VAR_5[0];




    if (((VAR_9 <= 2)
      && ((VAR_1->s_BoardInfos.
        dw_MolduleConfiguration
        [VAR_8] &
        0xFFFF) ==
       0x3130))
     || ((VAR_9 <= 3)
      && ((VAR_1->s_BoardInfos.
        dw_MolduleConfiguration
        [VAR_8] &
        0xFFFF) >=
       0x3230))) {




     if (((VAR_10 <= 7)
       && (VAR_9 < 3))
      || ((VAR_10 <= 1)
       && (VAR_9 ==
        3))) {




      if (VAR_1->
       s_ModuleInfo
       [VAR_8].
       s_TTLIOInfo.b_TTLInit ==
       1) {




       if (((VAR_1->s_BoardInfos.dw_MolduleConfiguration[VAR_8] & 0xFFFF) == 0x3130) || (((VAR_1->s_BoardInfos.dw_MolduleConfiguration[VAR_8] & 0xFFFF) >= 0x3230) && (VAR_1->s_ModuleInfo[VAR_8].s_TTLIOInfo.b_PortConfiguration[VAR_9] == 0))) {




        VAR_7 =
         FUNC_4
         (VAR_1->
         s_BoardInfos.
         ui_Address
         +
         (64 * VAR_8));

        *VAR_12
         =
         (unsigned char) (
         (VAR_7
          >>
          (8 * VAR_9)) >> VAR_10) & 1;
       } else {




        FUNC_3("Selected TTL I/O port error\n");
        VAR_6 =
         -4;
       }
      } else {




       FUNC_3("TTL I/O not initialised\n");
       VAR_6 = -6;
      }
     } else {




      FUNC_3("Selected digital input error\n");
      VAR_6 = -5;
     }
    } else {




     FUNC_3("Selected TTL I/O port error\n");
     VAR_6 = -4;
    }
    break;

   case 128:
    VAR_13 = (unsigned char *) &VAR_5[0];




    if (((VAR_9 <= 2)
      && ((VAR_1->s_BoardInfos.
        dw_MolduleConfiguration
        [VAR_8] &
        0xFFFF) ==
       0x3130))
     || ((VAR_9 <= 3)
      && ((VAR_1->s_BoardInfos.
        dw_MolduleConfiguration
        [VAR_8] &
        0xFFFF) >=
       0x3230))) {




     if (VAR_1->s_ModuleInfo[VAR_8].
      s_TTLIOInfo.b_TTLInit == 1) {




      if (((VAR_1->s_BoardInfos.
         dw_MolduleConfiguration
         [VAR_8]
         &
         0xFFFF)
        == 0x3130)
       || (((VAR_1->s_BoardInfos.dw_MolduleConfiguration[VAR_8] & 0xFFFF) >= 0x3230) && (VAR_1->s_ModuleInfo[VAR_8].s_TTLIOInfo.b_PortConfiguration[VAR_9] == 0))) {




       VAR_7 =
        FUNC_4(VAR_1->
        s_BoardInfos.
        ui_Address +
        (64 * VAR_8));

       *VAR_13 =
        (unsigned char) (
        (VAR_7 >>
         (8 * VAR_9)) & 0xFF);
      } else {




       FUNC_3("Selected TTL I/O port error\n");
       VAR_6 = -4;
      }
     } else {




      FUNC_3("TTL I/O not initialised\n");
      VAR_6 = -5;
     }
    } else {




     FUNC_3("Selected TTL I/O port error\n");
     VAR_6 = -4;
    }
    break;

   default:
    FUNC_5("Bad ReadType\n");

   }
  } else {




   FUNC_3("The module is not a TTL module\n");
   VAR_6 = -3;
  }
 } else {




  FUNC_3("Module number error\n");
  VAR_6 = -2;
 }

 return VAR_6;
}
