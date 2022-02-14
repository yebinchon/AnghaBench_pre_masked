
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
struct TYPE_5__ {int b_DigitalInit; int b_ChannelAMode; int b_ChannelBMode; int b_OutputMemoryEnabled; unsigned char dw_OutputMemory; } ;
struct TYPE_6__ {TYPE_1__ s_DigitalIOInfo; } ;


 int VAR_0 ;




 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 TYPE_4__* VAR_1 ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (unsigned int,int ) ;

int FUNC_4(struct comedi_device *VAR_2,
 struct comedi_subdevice *VAR_3, struct comedi_insn *VAR_4, unsigned int *VAR_5)
{
 int VAR_6 = 0;
 unsigned int VAR_7 = 0;
 unsigned int VAR_8;
 unsigned char VAR_9, VAR_10;
 unsigned char VAR_11, VAR_12;

 unsigned char *VAR_13;

 VAR_9 = (unsigned char) FUNC_0(VAR_4->chanspec);
 VAR_11 = (unsigned char) VAR_5[0];
 VAR_12 = (unsigned char) VAR_5[1];
 VAR_10 = (unsigned char) VAR_5[2];
 VAR_6 = VAR_4->n;
 VAR_13 = (unsigned char *) &VAR_5[0];


 switch (VAR_11) {
 case 131:




  if (VAR_9 < 4) {




   if ((VAR_1->s_BoardInfos.
     dw_MolduleConfiguration[VAR_9] &
     0xFFFF0000UL) == VAR_0) {




    if (VAR_1->s_ModuleInfo[VAR_9].
     s_DigitalIOInfo.b_DigitalInit == 1) {
     VAR_8 =
      FUNC_2(VAR_1->s_BoardInfos.
      ui_Address + (64 * VAR_9));
     *VAR_13 =
      (unsigned char) (VAR_8 ^ 0x1C);

    } else {




     VAR_6 = -4;
    }
   } else {




    VAR_6 = -3;
   }
  } else {




   VAR_6 = -2;
  }

  break;

 case 128:




  if (VAR_9 < 4) {




   if ((VAR_1->s_BoardInfos.
     dw_MolduleConfiguration[VAR_9] &
     0xFFFF0000UL) == VAR_0) {




    if (VAR_1->s_ModuleInfo[VAR_9].
     s_DigitalIOInfo.b_DigitalInit == 1) {




     if (VAR_10 <= 7) {
      if ((VAR_10 & 2) == 2) {
       if (VAR_1->
        s_ModuleInfo
        [VAR_9].
        s_DigitalIOInfo.
        b_ChannelAMode
        != 1) {




        VAR_6 =
         -6;
       }
      }





      if ((VAR_10 & 4) == 4) {
       if (VAR_1->
        s_ModuleInfo
        [VAR_9].
        s_DigitalIOInfo.
        b_ChannelBMode
        != 1) {




        VAR_6 =
         -7;
       }
      }





      if (VAR_6 >= 0) {



       switch (VAR_12) {




       case 129:





        if (VAR_1->
         s_ModuleInfo
         [VAR_9].
         s_DigitalIOInfo.
         b_OutputMemoryEnabled
         == 1) {
         VAR_7
          =
          VAR_1->
          s_ModuleInfo
          [VAR_9].
          s_DigitalIOInfo.
          dw_OutputMemory
          |
          VAR_10;

         VAR_1->
          s_ModuleInfo
          [VAR_9].
          s_DigitalIOInfo.
          dw_OutputMemory
          =
          VAR_7;
        } else {
         VAR_7
          =
          VAR_10;
        }
        break;


       case 130:





        if (VAR_1->
         s_ModuleInfo
         [VAR_9].
         s_DigitalIOInfo.
         b_OutputMemoryEnabled
         == 1) {
         VAR_7
          =
          VAR_1->
          s_ModuleInfo
          [VAR_9].
          s_DigitalIOInfo.
          dw_OutputMemory
          &
          (0xFFFFFFFFUL
          -
          VAR_10);

         VAR_1->
          s_ModuleInfo
          [VAR_9].
          s_DigitalIOInfo.
          dw_OutputMemory
          =
          VAR_7;
        } else {




         VAR_6
          =
          -8;
        }
       }
       FUNC_3(VAR_7,
        VAR_1->
        s_BoardInfos.
        ui_Address +
        (64 * VAR_9));
      }
     } else {




      VAR_6 = -4;
     }
    } else {




     VAR_6 = -5;
    }
   } else {




    VAR_6 = -3;
   }
  } else {




   VAR_6 = -2;
  }
  break;

 default:
  VAR_6 = -9;
  FUNC_1("NO INPUT/OUTPUT specified\n");
 }
 return VAR_6;
}
