
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {int dummy; } ;
struct TYPE_2__ {int b_EocEosInterrupt; unsigned char ui_AiNbrofChannels; unsigned int* ui_AiReadData; int tsk_Current; scalar_t__ dw_AiBase; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 unsigned int FUNC_0 (void*) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (unsigned int,void*) ;

void FUNC_3(int VAR_2, void *VAR_3)
{
 struct comedi_device *VAR_4 = VAR_3;
 unsigned char VAR_5 = 0;
 unsigned int VAR_6 = 0;





 VAR_6 = FUNC_0((void *)(VAR_1->dw_AiBase + 16));
 if ( (VAR_6 & 0x2UL) == 0x2UL) {




  FUNC_2(VAR_6, (void *)(VAR_1->dw_AiBase + 16));





  if (VAR_1->b_EocEosInterrupt == 1) {




   for (VAR_5 = 0;
    VAR_5 < VAR_1->ui_AiNbrofChannels;
    VAR_5++) {
    VAR_1->ui_AiReadData[VAR_5] =
     (unsigned int) FUNC_0((void *)(VAR_1->
      dw_AiBase + 28));
   }





   VAR_1->b_EocEosInterrupt = 2;





   FUNC_1(VAR_0, VAR_1->tsk_Current, 0);
  }
 }
}
