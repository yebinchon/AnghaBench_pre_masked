
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
struct TYPE_5__ {int b_TTLInit; int* b_PortConfiguration; } ;
struct TYPE_6__ {TYPE_1__ s_TTLIOInfo; } ;




 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 TYPE_4__* VAR_1 ;
 int FUNC_2 (unsigned char,int ) ;
 int FUNC_3 (char*) ;

int FUNC_4(struct comedi_device *VAR_2, struct comedi_subdevice *VAR_3,
 struct comedi_insn *VAR_4, unsigned int *VAR_5)
{
 int VAR_6 = 0;
 unsigned char VAR_7;
 unsigned char VAR_8;
 unsigned char VAR_9;
 unsigned char VAR_10;
 unsigned char VAR_11;
 unsigned char VAR_12;

 VAR_7 = (unsigned char) FUNC_0(VAR_4->chanspec);
 VAR_8 = (unsigned char) VAR_5[0];
 VAR_6 = VAR_4->n;





 if (VAR_7 < 4) {




  if ((VAR_1->s_BoardInfos.
    dw_MolduleConfiguration[VAR_7] &
    0xFFFF0000UL) == VAR_0) {
   switch (VAR_8) {
   case 129:

    VAR_1->s_ModuleInfo[VAR_7].
     s_TTLIOInfo.b_TTLInit = 1;





    VAR_1->s_ModuleInfo[VAR_7].
     s_TTLIOInfo.b_PortConfiguration[0] = 0;





    VAR_1->s_ModuleInfo[VAR_7].
     s_TTLIOInfo.b_PortConfiguration[1] = 0;





    VAR_1->s_ModuleInfo[VAR_7].
     s_TTLIOInfo.b_PortConfiguration[2] = 0;





    VAR_1->s_ModuleInfo[VAR_7].
     s_TTLIOInfo.b_PortConfiguration[3] = 1;





    FUNC_2(0x8,
     VAR_1->s_BoardInfos.ui_Address + 20 +
     (64 * VAR_7));
    break;

   case 128:

    VAR_9 = (unsigned char) VAR_5[1];
    VAR_10 = (unsigned char) VAR_5[2];
    VAR_11 = (unsigned char) VAR_5[3];
    VAR_12 = (unsigned char) VAR_5[4];





    if ((VAR_1->s_BoardInfos.
      dw_MolduleConfiguration
      [VAR_7] & 0xFFFF) >=
     0x3230) {




     if ((VAR_9 == 0)
      || (VAR_9 == 1)) {




      if ((VAR_10 == 0)
       || (VAR_10 == 1)) {




       if ((VAR_11 == 0)
        || (VAR_11
         == 1)) {




        if ((VAR_12 == 0) || (VAR_12 == 1)) {
         VAR_1->
          s_ModuleInfo
          [VAR_7].
          s_TTLIOInfo.
          b_TTLInit
          =
          1;





         VAR_1->
          s_ModuleInfo
          [VAR_7].
          s_TTLIOInfo.
          b_PortConfiguration
          [0]
          =
          VAR_9;





         VAR_1->
          s_ModuleInfo
          [VAR_7].
          s_TTLIOInfo.
          b_PortConfiguration
          [1]
          =
          VAR_10;





         VAR_1->
          s_ModuleInfo
          [VAR_7].
          s_TTLIOInfo.
          b_PortConfiguration
          [2]
          =
          VAR_11;





         VAR_1->
          s_ModuleInfo
          [VAR_7].
          s_TTLIOInfo.
          b_PortConfiguration
          [3]
          =
          VAR_12;





         FUNC_2((VAR_9 << 0) | (VAR_10 << 1) | (VAR_11 << 2) | (VAR_12 << 3), VAR_1->s_BoardInfos.ui_Address + 20 + (64 * VAR_7));
        } else {




         FUNC_1("Port D mode selection is wrong\n");
         VAR_6
          =
          -8;
        }
       } else {




        FUNC_1("Port C mode selection is wrong\n");
        VAR_6 =
         -7;
       }
      } else {




       FUNC_1("Port B mode selection is wrong\n");
       VAR_6 = -6;
      }
     } else {




      FUNC_1("Port A mode selection is wrong\n");
      VAR_6 = -5;
     }
    } else {




     FUNC_1("Function not available for this version\n");
     VAR_6 = -4;
    }
    break;

    FUNC_1("\n");
   default:
    FUNC_3("Bad Config Type\n");
   }
  } else {




   FUNC_1("The module is not a TTL module\n");
   VAR_6 = -3;
  }
 } else {




  FUNC_1("Module number error\n");
  VAR_6 = -2;
 }

 return VAR_6;
}
