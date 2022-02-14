
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
struct TYPE_6__ {size_t ui_Read; TYPE_1__* s_FIFOInterruptParameters; } ;
struct TYPE_8__ {TYPE_3__ s_BoardInfos; TYPE_2__ s_InterruptParameters; } ;
struct TYPE_5__ {unsigned int b_OldModuleMask; unsigned int ul_OldInterruptMask; unsigned int ul_OldCounterLatchValue; } ;


 int VAR_0 ;
 int VAR_1 ;


 unsigned char VAR_2 ;
 unsigned char FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 TYPE_4__* VAR_3 ;
 unsigned int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*) ;

int FUNC_5(struct comedi_device *VAR_4,
 struct comedi_subdevice *VAR_5, struct comedi_insn *VAR_6, unsigned int *VAR_7)
{
 int VAR_8 = 0;
 unsigned int VAR_9;
 unsigned int VAR_10 = 0;

 unsigned char VAR_11;
 unsigned char VAR_12;
 unsigned char VAR_13;
 unsigned int VAR_14;
 unsigned char *VAR_15;
 unsigned int *VAR_16;

 VAR_8 = VAR_6->n;
 VAR_11 = FUNC_0(VAR_6->chanspec);
 VAR_13 = (unsigned char) VAR_7[0];
 VAR_12 = (unsigned char) VAR_7[1];
 VAR_14 = (unsigned int) VAR_7[2];
 VAR_15 = (unsigned char *) &VAR_7[0];
 VAR_16 = (unsigned int *) &VAR_7[1];





 if (VAR_13 == VAR_2) {

  VAR_7[0] = VAR_3->s_InterruptParameters.
   s_FIFOInterruptParameters[VAR_3->
   s_InterruptParameters.ui_Read].b_OldModuleMask;
  VAR_7[1] = VAR_3->s_InterruptParameters.
   s_FIFOInterruptParameters[VAR_3->
   s_InterruptParameters.ui_Read].ul_OldInterruptMask;
  VAR_7[2] = VAR_3->s_InterruptParameters.
   s_FIFOInterruptParameters[VAR_3->
   s_InterruptParameters.ui_Read].ul_OldCounterLatchValue;





  VAR_3->
   s_InterruptParameters.
   ui_Read = (VAR_3->
   s_InterruptParameters.
   ui_Read + 1) % VAR_0;

  return VAR_6->n;
 }

 if (VAR_11 < 4) {




  if ((VAR_3->s_BoardInfos.
    dw_MolduleConfiguration[VAR_11] &
    0xFFFF0000UL) == VAR_1) {




   if (VAR_12 <= 1) {




    VAR_9 = FUNC_2(VAR_3->s_BoardInfos.
     ui_Address + 8 + (16 * VAR_12) +
     (64 * VAR_11));





    if (VAR_9 & 0x10) {




     if (VAR_9 & 0x1) {

      switch (VAR_13) {

      case 128:




       VAR_9 =
        FUNC_2(VAR_3->
        s_BoardInfos.
        ui_Address + 4 +
        (16 * VAR_12) + (64 * VAR_11));

       VAR_9 =
        VAR_9 & 0xF;





       if (VAR_9 & 1) {
        if (VAR_9 &
         2) {
         if (VAR_9 & 4) {




          *VAR_15
           =
           3;
         } else {




          *VAR_15
           =
           2;
         }
        } else {




         *VAR_15
          =
          1;
        }
       } else {




        *VAR_15
         = 0;
       }
       break;

      case 129:





       if ((VAR_14 >= 0)
        && (VAR_14
         <=
         65535UL))
       {
        for (;;) {




         VAR_9
          =
          FUNC_2
          (VAR_3->
          s_BoardInfos.
          ui_Address
          +
          4
          +
          (16 * VAR_12) + (64 * VAR_11));




         if ((VAR_9 & 4) == 4) {




          *VAR_15
           =
           3;





          *VAR_16
           =
           FUNC_2
           (VAR_3->
           s_BoardInfos.
           ui_Address
           +
           0
           +
           (16 * VAR_12) + (64 * VAR_11));
          break;
         }
         else {




          if ((VAR_9 & 2) == 2) {




           *VAR_15
            =
            2;





           *VAR_16
            =
            FUNC_2
            (VAR_3->
            s_BoardInfos.
            ui_Address
            +
            0
            +
            (16 * VAR_12) + (64 * VAR_11));

           break;
          }
          else {




           if ((VAR_9 & 1) == 1) {




            *VAR_15
             =
             1;
           }
           else {




            *VAR_15
             =
             0;
           }
          }
         }

         if (VAR_10 == VAR_14) {




          break;
         } else {




          VAR_10
           =
           VAR_10
           +
           1;

          FUNC_3(1000);
         }
        }





        if ((*VAR_15 != 3) && (VAR_10 == VAR_14) && (VAR_14 != 0)) {




         *VAR_15
          =
          4;
        }
       } else {




        FUNC_1("Timeout parameter is wrong\n");
        VAR_8 =
         -7;
       }
       break;

      default:
       FUNC_4("Inputs wrong\n");
      }
     }
     else {




      FUNC_1("Tor counter not enabled\n");
      VAR_8 = -6;
     }
    } else {




     FUNC_1("Tor counter not initialised\n");
     VAR_8 = -5;
    }
   }
   else {




    FUNC_1("Tor counter selection is wrong\n");
    VAR_8 = -4;
   }
  } else {




   FUNC_1("The module is not a tor counter module\n");
   VAR_8 = -3;
  }
 } else {




  FUNC_1("Module number error\n");
  VAR_8 = -2;
 }

 return VAR_8;
}
