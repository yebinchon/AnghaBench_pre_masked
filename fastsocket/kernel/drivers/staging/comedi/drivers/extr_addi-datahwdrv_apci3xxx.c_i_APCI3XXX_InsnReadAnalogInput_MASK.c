
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {int dummy; } ;
struct TYPE_4__ {scalar_t__ b_SingelDiff; unsigned char b_EocEosInterrupt; int ui_AiNbrofChannels; scalar_t__ dw_AiBase; TYPE_1__* ps_BoardInfo; scalar_t__ b_AiInitialisation; } ;
struct TYPE_3__ {unsigned char i_NbrAiChannel; unsigned char i_NbrAiChannelDiff; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_2__* VAR_2 ;
 scalar_t__ FUNC_2 (struct comedi_device*) ;
 int FUNC_3 (char*,...) ;
 unsigned int FUNC_4 (void*) ;
 int FUNC_5 (int,void*) ;

int FUNC_6(struct comedi_device *VAR_3,
 struct comedi_subdevice *VAR_4, struct comedi_insn *VAR_5, unsigned int *VAR_6)
{
 int VAR_7 = VAR_5->n;
 unsigned char VAR_8 = (unsigned char) FUNC_1(VAR_5->chanspec);
 unsigned char VAR_9 = (unsigned char) FUNC_0(VAR_5->chanspec);
 unsigned int VAR_10 = 0;
 unsigned int VAR_11 = 0;
 unsigned int VAR_12 = 0;
 unsigned char VAR_13 = 0;





 if (VAR_2->b_AiInitialisation) {




  if (((VAR_9 < VAR_2->ps_BoardInfo->i_NbrAiChannel)
    && (VAR_2->b_SingelDiff == VAR_1))
   || ((VAR_9 < VAR_2->ps_BoardInfo->
     i_NbrAiChannelDiff)
    && (VAR_2->b_SingelDiff == VAR_0))) {




   if (VAR_8 > 7) {




    VAR_7 = -4;
    FUNC_3("Channel %d range %d selection error\n",
     VAR_9, VAR_8);
   }
  } else {




   VAR_7 = -3;
   FUNC_3("Channel %d selection error\n", VAR_9);
  }





  if (VAR_7 >= 0) {




   if ((VAR_13 != 0) || ((VAR_13 == 0)
     && (VAR_5->n >= 1))) {




    if (FUNC_2(VAR_3) == 0) {




     FUNC_5(0x10000UL,
      (void *)(VAR_2->dw_AiBase +
       12));





     VAR_10 =
      FUNC_4((void *)(VAR_2->
       dw_AiBase + 4));
     VAR_10 = VAR_10 & 0xFFFFFEF0UL;





     FUNC_5(VAR_10,
      (void *)(VAR_2->dw_AiBase +
       4));





     VAR_11 =
      (VAR_8 & 3) |
      ((unsigned int) (VAR_8 >> 2)
      << 6) | ((unsigned int) VAR_2->
      b_SingelDiff << 7);





     FUNC_5(VAR_11,
      (void *)(VAR_2->dw_AiBase +
       0));





     FUNC_5(VAR_10 | 0x100UL,
      (void *)(VAR_2->dw_AiBase +
       4));
     FUNC_5((unsigned int) VAR_9,
      (void *)(VAR_2->dw_AiBase +
       0));





     FUNC_5(VAR_10,
      (void *)(VAR_2->dw_AiBase +
       4));





     FUNC_5(1,
      (void *)(VAR_2->dw_AiBase +
       48));





     VAR_2->b_EocEosInterrupt =
      VAR_13;





     VAR_2->ui_AiNbrofChannels = 1;





     if (VAR_13 == 0) {
      for (VAR_12 = 0;
       VAR_12 <
       VAR_5->n;
       VAR_12++) {




       FUNC_5(0x80000UL,
        (void *)
        (VAR_2->
         dw_AiBase
         + 8));





       do {
        VAR_10 =
         FUNC_4(
         (void *)
         (VAR_2->
          dw_AiBase
          +
          20));
        VAR_10 =
         VAR_10
         & 1;
       } while (VAR_10 != 1);





       VAR_6[VAR_12]
        =
        (unsigned int)
        FUNC_4((void
         *)
        (VAR_2->
         dw_AiBase
         + 28));
      }
     } else {




      FUNC_5(0x180000UL,
       (void *)(VAR_2->
        dw_AiBase + 8));
     }
    } else {




     FUNC_3("Any conversion started\n");
     VAR_7 = -10;
    }
   } else {




    FUNC_3("Buffer size error\n");
    VAR_7 = -101;
   }
  }
 } else {




  FUNC_3("Operating mode not configured\n");
  VAR_7 = -1;
 }
 return VAR_7;
}
