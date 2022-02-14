
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; } ;
struct comedi_device {int dummy; } ;
struct TYPE_4__ {unsigned int ui_EocEosConversionTime; unsigned int b_InterruptMode; unsigned int ui_AiNbrofChannels; unsigned int* ui_AiChannelList; void* b_EocEosInterrupt; } ;
struct TYPE_3__ {scalar_t__ i_NbrAiChannel; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ FUNC_0 (unsigned int) ;
 TYPE_2__* VAR_4 ;
 int FUNC_1 (char*) ;
 TYPE_1__* VAR_5 ;

int FUNC_2(struct comedi_device *VAR_6, struct comedi_subdevice *VAR_7,
 struct comedi_insn *VAR_8, unsigned int *VAR_9)
{
 unsigned int VAR_10;

 if ((VAR_9[0] != VAR_2) && (VAR_9[0] != VAR_3))
  return -1;


 VAR_4->ui_EocEosConversionTime = VAR_9[2];

 if (VAR_9[0] == VAR_3) {


  for (VAR_10 = 0; VAR_10 < VAR_9[3]; VAR_10++) {

   if (FUNC_0(VAR_9[4 + VAR_10]) >= VAR_5->i_NbrAiChannel) {
    FUNC_1("bad channel list\n");
    return -2;
   }
  }

  VAR_4->b_InterruptMode = VAR_3;

  if (VAR_9[1]) {
   VAR_4->b_EocEosInterrupt = VAR_1;
  } else
   VAR_4->b_EocEosInterrupt = VAR_0;


  VAR_4->ui_AiNbrofChannels = VAR_9[3];
  for (VAR_10 = 0; VAR_10 < VAR_4->ui_AiNbrofChannels; VAR_10++) {
   VAR_4->ui_AiChannelList[VAR_10] = VAR_9[4 + VAR_10];
  }

 } else
 {
  VAR_4->b_InterruptMode = VAR_2;
  if (VAR_9[1]) {
   VAR_4->b_EocEosInterrupt = VAR_1;
  } else {
   VAR_4->b_EocEosInterrupt = VAR_0;
  }
 }

 return VAR_8->n;
}
