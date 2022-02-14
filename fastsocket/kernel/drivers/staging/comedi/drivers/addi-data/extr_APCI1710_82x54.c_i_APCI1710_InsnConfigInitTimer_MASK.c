
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
struct TYPE_10__ {TYPE_4__ s_BoardInfos; TYPE_3__* s_ModuleInfo; } ;
struct TYPE_7__ {TYPE_1__* s_82X54TimerInfo; } ;
struct TYPE_8__ {TYPE_2__ s_82X54ModuleInfo; } ;
struct TYPE_6__ {int b_82X54Init; unsigned char b_InputClockSelection; unsigned char b_InputClockLevel; unsigned char b_OutputLevel; unsigned char b_HardwareGateLevel; unsigned int dw_ConfigurationWord; } ;


 unsigned char VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 TYPE_5__* VAR_4 ;
 unsigned int FUNC_3 (scalar_t__) ;
 int FUNC_4 (unsigned int,scalar_t__) ;

int FUNC_5(struct comedi_device *VAR_5, struct comedi_subdevice *VAR_6,
       struct comedi_insn *VAR_7, unsigned int *VAR_8)
{

 int VAR_9 = 0;
 unsigned char VAR_10;
 unsigned char VAR_11;
 unsigned char VAR_12;
 unsigned int VAR_13;
 unsigned char VAR_14;
 unsigned char VAR_15;
 unsigned char VAR_16;
 unsigned char VAR_17;


 unsigned int VAR_18 = 0;


 VAR_9 = VAR_7->n;
 VAR_10 = (unsigned char) FUNC_0(VAR_7->chanspec);
 VAR_11 = (unsigned char) FUNC_1(VAR_7->chanspec);
 VAR_12 = (unsigned char) VAR_8[0];
 VAR_13 = (unsigned int) VAR_8[1];
 VAR_14 = (unsigned char) VAR_8[2];
 VAR_15 = (unsigned char) VAR_8[3];
 VAR_16 = (unsigned char) VAR_8[4];
 VAR_17 = (unsigned char) VAR_8[5];


 if (VAR_10 < 4) {

  if ((VAR_4->s_BoardInfos.dw_MolduleConfiguration[VAR_10] & 0xFFFF0000UL) == VAR_1) {


   if (VAR_11 <= 2) {

    if (VAR_12 <= 5) {







     if (((VAR_11 == 0) &&
          (VAR_14 == VAR_3)) ||
         ((VAR_11 == 0) &&
          (VAR_14 == VAR_0)) ||
         ((VAR_11 != 0) &&
          ((VAR_14 == VAR_3) ||
           (VAR_14 == VAR_2) ||
           (VAR_14 == VAR_0)))) {

      if (((VAR_14 == VAR_0) &&
           ((VAR_4->s_BoardInfos.dw_MolduleConfiguration[VAR_10] & 0x0000FFFFUL) >= 0x3131)) ||
           (VAR_14 != VAR_0)) {



       if ((VAR_15 == 0) ||
           (VAR_15 == 1)) {

        if ((VAR_16 == 0) || (VAR_16 == 1)) {

         if ((VAR_17 == 0) || (VAR_17 == 1)) {


          if ((VAR_14 == VAR_0) && ((VAR_4->s_BoardInfos.dw_MolduleConfiguration[VAR_10] & 0x0000FFFFUL) > 0x3131)) {

           VAR_18 = FUNC_3(VAR_4->s_BoardInfos.ui_Address + (16 + (VAR_11 * 4) + (64 * VAR_10)));

           VAR_18 = (VAR_18 >> 16) & 1;
          } else {
           VAR_18 = 1;
          }


          if (VAR_18 == 1) {


           VAR_4->s_ModuleInfo[VAR_10].s_82X54ModuleInfo.s_82X54TimerInfo[VAR_11].b_82X54Init = 1;


           VAR_4-> s_ModuleInfo[VAR_10].s_82X54ModuleInfo.s_82X54TimerInfo[VAR_11].b_InputClockSelection = VAR_14;


           VAR_4->s_ModuleInfo[VAR_10].s_82X54ModuleInfo.s_82X54TimerInfo[VAR_11].b_InputClockLevel = ~VAR_15 & 1;


           VAR_4->s_ModuleInfo[VAR_10].s_82X54ModuleInfo.s_82X54TimerInfo[VAR_11].b_OutputLevel = ~VAR_16 & 1;


           VAR_4->s_ModuleInfo[VAR_10].s_82X54ModuleInfo.s_82X54TimerInfo[VAR_11].b_HardwareGateLevel = VAR_17;
           if (VAR_14 == VAR_0) {
            VAR_14 = 2;
           }

           VAR_4->s_ModuleInfo[VAR_10].s_82X54ModuleInfo.s_82X54TimerInfo[VAR_11].dw_ConfigurationWord = (unsigned int)(((VAR_17 << 0) & 0x1) | ((VAR_15 << 1) & 0x2) | (((~VAR_16 & 1) << 2) & 0x4) | ((VAR_14 << 4) & 0x30));

           FUNC_4(VAR_4->s_ModuleInfo[VAR_10].s_82X54ModuleInfo.s_82X54TimerInfo[VAR_11].dw_ConfigurationWord, VAR_4->s_BoardInfos.ui_Address + 32 + (VAR_11 * 4) + (64 * VAR_10));


           FUNC_4((unsigned int) VAR_12, VAR_4->s_BoardInfos.ui_Address + 16 + (VAR_11 * 4) + (64 * VAR_10));


           FUNC_4(VAR_13, VAR_4->s_BoardInfos.ui_Address + 0 + (VAR_11 * 4) + (64 * VAR_10));

          }
          else {

           VAR_9 = -6;
          }

         }
         else {

          FUNC_2("Selection from hardware gate level is wrong\n");
          VAR_9 = -9;
         }
        }
        else {

         FUNC_2("Selection from output clock level is wrong\n");
         VAR_9 = -8;
        }
       }
       else {

        FUNC_2("Selection from input clock level is wrong\n");
        VAR_9 = -7;
       }
      } else {

       FUNC_2("Input timer clock selection is wrong\n");
       VAR_9 = -6;
      }
     } else {

      FUNC_2("Input timer clock selection is wrong\n");
      VAR_9 = -6;
     }
    }
    else {

     FUNC_2("Timer mode selection is wrong\n");
     VAR_9 = -5;
    }
   }
   else {

    FUNC_2("Timer selection wrong\n");
    VAR_9 = -3;
   }
  } else {

   FUNC_2("The module is not a TIMER module\n");
   VAR_9 = -4;
  }
 } else {

  FUNC_2("Module number error\n");
  VAR_9 = -2;
 }

 return VAR_9;
}
