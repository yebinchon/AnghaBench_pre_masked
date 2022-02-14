
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
struct TYPE_6__ {int* dw_MolduleConfiguration; scalar_t__ ui_Address; } ;
struct TYPE_10__ {TYPE_4__* s_ModuleInfo; TYPE_1__ s_BoardInfos; } ;
struct TYPE_8__ {TYPE_2__* s_TorCounterInfo; } ;
struct TYPE_9__ {TYPE_3__ s_TorCounterModuleInfo; } ;
struct TYPE_7__ {unsigned char b_TimingUnit; unsigned int ul_RealTimingInterval; } ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char FUNC_0 (int ) ;
 unsigned char FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 TYPE_5__* VAR_4 ;
 unsigned int FUNC_3 (scalar_t__) ;

int FUNC_4(struct comedi_device *VAR_5,
 struct comedi_subdevice *VAR_6, struct comedi_insn *VAR_7, unsigned int *VAR_8)
{
 int VAR_9 = 0;
 unsigned int VAR_10;
 unsigned char VAR_11;
 unsigned char VAR_12;
 unsigned char *VAR_13;
 unsigned int *VAR_14;
 unsigned char *VAR_15;
 unsigned char *VAR_16;
 unsigned char *VAR_17;
 unsigned char *VAR_18;
 unsigned char *VAR_19;

 VAR_9 = VAR_7->n;
 VAR_11 = FUNC_0(VAR_7->chanspec);
 VAR_12 = FUNC_1(VAR_7->chanspec);

 VAR_13 = (unsigned char *) &VAR_8[0];
 VAR_14 = (unsigned int *) &VAR_8[1];
 VAR_15 = (unsigned char *) &VAR_8[2];
 VAR_16 = (unsigned char *) &VAR_8[3];
 VAR_17 = (unsigned char *) &VAR_8[4];
 VAR_18 = (unsigned char *) &VAR_8[5];
 VAR_19 = (unsigned char *) &VAR_8[6];





 if (VAR_11 < 4) {




  if ((VAR_4->s_BoardInfos.
    dw_MolduleConfiguration[VAR_11] &
    0xFFFF0000UL) == VAR_0) {




   if (VAR_12 <= 1) {





    VAR_10 = FUNC_3(VAR_4->s_BoardInfos.
     ui_Address + 8 + (16 * VAR_12) +
     (64 * VAR_11));

    if (VAR_10 & 0x10) {
     *VAR_18 = VAR_10 & 1;





     VAR_10 = FUNC_3(VAR_4->s_BoardInfos.
      ui_Address + 4 +
      (16 * VAR_12) +
      (64 * VAR_11));

     *VAR_17 =
      (unsigned char) ((VAR_10 >> 4) & 1);
     *VAR_19 =
      (unsigned char) ((VAR_10 >> 5) & 1);





     if (VAR_10 & 0x600) {




      if (VAR_10 & 0x400) {




       if ((VAR_10 & 0x7800)
        == 0x7800) {
        *VAR_15 =
         VAR_3;
       }





       if ((VAR_10 & 0x7800)
        == 0x1800) {
        *VAR_15 =
         VAR_1;
       }





       if ((VAR_10 & 0x7800)
        == 0x0000) {
        *VAR_15 =
         VAR_2;
       }
      }
      else {
       *VAR_15 = 1;
      }





      *VAR_16 = 0;
     }
     else {
      *VAR_15 =
       (unsigned char) ((VAR_10 >> 6)
       & 1);
      *VAR_16 =
       (unsigned char) ((VAR_10 >> 7)
       & 1);
     }

     *VAR_13 =
      VAR_4->
      s_ModuleInfo[VAR_11].
      s_TorCounterModuleInfo.
      s_TorCounterInfo[VAR_12].
      b_TimingUnit;

     *VAR_14 =
      VAR_4->
      s_ModuleInfo[VAR_11].
      s_TorCounterModuleInfo.
      s_TorCounterInfo[VAR_12].
      ul_RealTimingInterval;
    } else {




     FUNC_2("Tor counter not initialised\n");
     VAR_9 = -5;
    }

   }
   else {




    FUNC_2("Tor counter selection is wrong \n");
    VAR_9 = -4;
   }
  } else {




   FUNC_2("The module is not a tor counter module\n");
   VAR_9 = -3;
  }
 } else {




  FUNC_2("Module number error\n");
  VAR_9 = -2;
 }

 return VAR_9;
}
