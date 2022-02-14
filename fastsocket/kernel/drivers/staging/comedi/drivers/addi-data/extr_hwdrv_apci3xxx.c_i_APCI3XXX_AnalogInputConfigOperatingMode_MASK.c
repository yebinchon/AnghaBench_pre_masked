
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; } ;
struct comedi_device {int dummy; } ;
struct TYPE_4__ {unsigned int ui_EocEosConversionTime; unsigned char b_EocEosConversionTimeBase; unsigned char b_SingelDiff; int b_AiInitialisation; scalar_t__ dw_AiBase; TYPE_1__* ps_BoardInfo; } ;
struct TYPE_3__ {int b_AvailableConvertUnit; unsigned int ui_MinAcquisitiontimeNs; scalar_t__ i_NbrAiChannel; scalar_t__ i_NbrAiChannelDiff; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 TYPE_2__* VAR_2 ;
 scalar_t__ FUNC_0 (struct comedi_device*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (unsigned int,void*) ;

int FUNC_3(struct comedi_device *VAR_3,
 struct comedi_subdevice *VAR_4, struct comedi_insn *VAR_5, unsigned int *VAR_6)
{
 int VAR_7 = VAR_5->n;
 unsigned char VAR_8 = 0;
 unsigned char VAR_9 = 0;
 unsigned int VAR_10 = 0;
 unsigned int VAR_11 = 0;





 if (VAR_5->n == 4) {




  VAR_9 = (unsigned char) VAR_6[1];





  VAR_8 = (unsigned char) VAR_6[2];





  VAR_10 = (unsigned int) VAR_6[3];





  if ((VAR_2->ps_BoardInfo->
    b_AvailableConvertUnit & (1 << VAR_8)) !=
   0) {




   if ((VAR_10 >= 0) && (VAR_10 <= 65535)) {
    VAR_11 = VAR_10;

    if (VAR_8 == 1) {
     VAR_11 =
      VAR_11 * 1000UL;
    }
    if (VAR_8 == 2) {
     VAR_11 =
      VAR_11 * 1000000UL;
    }





    if (VAR_11 >=
     VAR_2->ps_BoardInfo->
     ui_MinAcquisitiontimeNs) {
     if ((VAR_9 == VAR_1)
      || (VAR_9 ==
       VAR_0)) {
      if (((VAR_9 == VAR_1) && (VAR_2->ps_BoardInfo->i_NbrAiChannel == 0)) || ((VAR_9 == VAR_0) && (VAR_2->ps_BoardInfo->i_NbrAiChannelDiff == 0))) {




       FUNC_1("Single/Diff selection error\n");
       VAR_7 = -1;
      } else {




       if (FUNC_0(VAR_3) == 0) {
        VAR_2->
         ui_EocEosConversionTime
         =
         (unsigned int)
         VAR_10;
        VAR_2->
         b_EocEosConversionTimeBase
         =
         VAR_8;
        VAR_2->
         b_SingelDiff
         =
         VAR_9;
        VAR_2->
         b_AiInitialisation
         = 1;





        FUNC_2((unsigned int)
         VAR_8,
         (void *)
         (VAR_2->
          dw_AiBase
          +
          36));





        FUNC_2(VAR_10, (void *)(VAR_2->dw_AiBase + 32));
       } else {




        FUNC_1("Any conversion started\n");
        VAR_7 =
         -10;
       }
      }
     } else {




      FUNC_1("Single/Diff selection error\n");
      VAR_7 = -1;
     }
    } else {




     FUNC_1("Convert time value selection error\n");
     VAR_7 = -3;
    }
   } else {




    FUNC_1("Convert time value selection error\n");
    VAR_7 = -3;
   }
  } else {




   FUNC_1("Convert time base unity selection error\n");
   VAR_7 = -2;
  }
 } else {




  FUNC_1("Buffer size error\n");
  VAR_7 = -101;
 }

 return VAR_7;
}
