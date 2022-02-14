
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {unsigned int ai_add_front; unsigned int ai_n_chan; unsigned int ai_add_back; unsigned int ai_act_dmapos; } ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static unsigned int FUNC_0(struct comedi_device *VAR_1,
       struct comedi_subdevice *VAR_2,
       short *VAR_3,
       unsigned int VAR_4)
{
 unsigned int VAR_5 = 0, VAR_6 = 0;
 unsigned int VAR_7 = VAR_0->ai_add_front,
     VAR_8 = VAR_0->ai_add_front + VAR_0->ai_n_chan;
 unsigned int VAR_9 = VAR_0->ai_add_front + VAR_0->ai_n_chan +
     VAR_0->ai_add_back;

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  if (VAR_0->ai_act_dmapos >= VAR_7 &&
      VAR_0->ai_act_dmapos < VAR_8) {
   VAR_3[VAR_6++] = VAR_3[VAR_5];
  }
  VAR_0->ai_act_dmapos++;
  VAR_0->ai_act_dmapos %= VAR_9;
 }

 return VAR_6;
}
