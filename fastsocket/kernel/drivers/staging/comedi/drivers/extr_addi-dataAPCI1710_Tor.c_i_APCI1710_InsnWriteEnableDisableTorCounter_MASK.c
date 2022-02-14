
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {int dummy; } ;
struct TYPE_9__ {int* dw_MolduleConfiguration; scalar_t__ ui_Address; } ;
struct TYPE_10__ {TYPE_4__ s_BoardInfos; TYPE_3__* s_ModuleInfo; int tsk_Current; } ;
struct TYPE_7__ {TYPE_1__* s_TorCounterInfo; } ;
struct TYPE_8__ {TYPE_2__ s_TorCounterModuleInfo; } ;
struct TYPE_6__ {unsigned char b_InterruptEnable; } ;


 unsigned char VAR_0 ;


 unsigned char VAR_1 ;
 int VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int VAR_6 ;
 TYPE_5__* VAR_7 ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (int,int ) ;

int FUNC_4(struct comedi_device *VAR_8,
 struct comedi_subdevice *VAR_9, struct comedi_insn *VAR_10, unsigned int *VAR_11)
{
 int VAR_12 = 0;
 unsigned int VAR_13;
 unsigned int VAR_14;
 unsigned int VAR_15;
 unsigned char VAR_16, VAR_17;
 unsigned char VAR_18;
 unsigned char VAR_19;
 unsigned char VAR_20;
 unsigned char VAR_21;
 unsigned char VAR_22;

 VAR_16 = (unsigned char) FUNC_0(VAR_10->chanspec);
 VAR_17 = (unsigned char) VAR_11[0];
 VAR_18 = (unsigned char) VAR_11[1];
 VAR_19 = (unsigned char) VAR_11[2];
 VAR_20 = (unsigned char) VAR_11[3];
 VAR_21 = (unsigned char) VAR_11[4];
 VAR_22 = (unsigned char) VAR_11[5];
 VAR_12 = VAR_10->n;;
 VAR_7->tsk_Current = VAR_6;




 if (VAR_16 < 4) {




  if ((VAR_7->s_BoardInfos.
    dw_MolduleConfiguration[VAR_16] &
    0xFFFF0000UL) == VAR_2) {




   if (VAR_18 <= 1) {
    switch (VAR_17)
    {
    case 128:




     VAR_13 =
      FUNC_2(VAR_7->s_BoardInfos.
      ui_Address + 8 +
      (16 * VAR_18) +
      (64 * VAR_16));

     if (VAR_13 & 0x10) {




      if (VAR_19 == 0 ||
       VAR_19 == 1 ||
       VAR_19 ==
       VAR_5
       || VAR_19 ==
       VAR_3
       || VAR_19 ==
       VAR_4)
      {




       if (VAR_20 == 0
        || VAR_20
        == 1
        || VAR_19 >
        1) {




        if ((VAR_21 == VAR_1) || (VAR_21 == VAR_0)) {




         if ((VAR_22 == 128) || (VAR_22 == 129)) {





          VAR_7->
           s_ModuleInfo
           [VAR_16].
           s_TorCounterModuleInfo.
           s_TorCounterInfo
           [VAR_18].
           b_InterruptEnable
           =
           VAR_22;





          VAR_15
           =
           FUNC_2
           (VAR_7->
           s_BoardInfos.
           ui_Address
           +
           4
           +
           (16 * VAR_18) + (64 * VAR_16));

          VAR_15
           =
           (VAR_15
           >>
           4)
           &
           0x30;





          if (VAR_19 > 1) {




           VAR_20
            =
            0;





           VAR_15
            =
            VAR_15
            |
            0x40;





           if (VAR_19 == VAR_5) {




            VAR_15
             =
             VAR_15
             |
             0x780;

           }





           if (VAR_19 == VAR_3) {




            VAR_15
             =
             VAR_15
             |
             0x180;

           }

           VAR_19
            =
            0;
          }





          VAR_15
           =
           VAR_15
           |
           VAR_21
           |
           (VAR_22
           *
           2)
           |
           (VAR_19
           *
           4)
           |
           (VAR_20
           *
           8);





          VAR_14
           =
           FUNC_2
           (VAR_7->
           s_BoardInfos.
           ui_Address
           +
           0
           +
           (16 * VAR_18) + (64 * VAR_16));





          VAR_14
           =
           FUNC_2
           (VAR_7->
           s_BoardInfos.
           ui_Address
           +
           12
           +
           (16 * VAR_18) + (64 * VAR_16));





          FUNC_3(VAR_15, VAR_7->s_BoardInfos.ui_Address + 4 + (16 * VAR_18) + (64 * VAR_16));





          FUNC_3(1, VAR_7->s_BoardInfos.ui_Address + 8 + (16 * VAR_18) + (64 * VAR_16));

         }
         else {




          FUNC_1("Interrupt parameter is wrong\n");
          VAR_12
           =
           -9;
         }
        }
        else {




         FUNC_1("Tor counter acquisition mode cycle is wrong\n");
         VAR_12
          =
          -8;
        }
       }
       else {




        FUNC_1("Extern gate input mode is wrong\n");
        VAR_12 =
         -7;
       }
      }
      else {




       FUNC_1("Tor input signal selection is wrong\n");
       VAR_12 = -6;
      }
     } else {




      FUNC_1("Tor counter not initialised\n");
      VAR_12 = -5;
     }
     break;

    case 129:




     VAR_13 = FUNC_2(VAR_7->s_BoardInfos.
      ui_Address + 8 +
      (16 * VAR_18) +
      (64 * VAR_16));





     if (VAR_13 & 0x10) {




      if (VAR_13 & 0x1) {



       VAR_7->
        s_ModuleInfo
        [VAR_16].
        s_TorCounterModuleInfo.
        s_TorCounterInfo
        [VAR_18].
        b_InterruptEnable
        =
        129;





       FUNC_3(0, VAR_7->
        s_BoardInfos.
        ui_Address + 8 +
        (16 * VAR_18) + (64 * VAR_16));
      }
      else {




       FUNC_1("Tor counter not enabled \n");
       VAR_12 = -6;
      }
     }
     else {




      FUNC_1("Tor counter not initialised\n");
      VAR_12 = -5;
     }

    }
   }
   else {




    FUNC_1("Tor counter selection is wrong\n");
    VAR_12 = -4;
   }
  } else {




   FUNC_1("The module is not a tor counter module \n");
   VAR_12 = -3;
  }
 } else {




  FUNC_1("Module number error \n");
  VAR_12 = -2;
 }

 return VAR_12;
}
