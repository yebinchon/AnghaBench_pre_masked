
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct comedi_device {int dummy; } ;
struct TYPE_6__ {TYPE_1__* ai_fifo; } ;
struct TYPE_5__ {unsigned int ai_fifo_segment_length; } ;
struct TYPE_4__ {unsigned int num_segments; unsigned int sample_packing_ratio; } ;


 TYPE_3__* FUNC_0 (struct comedi_device*) ;
 TYPE_2__* FUNC_1 (struct comedi_device*) ;

__attribute__((used)) static unsigned int FUNC_2(struct comedi_device *VAR_0)
{
 return FUNC_1(VAR_0)->ai_fifo_segment_length *
     FUNC_0(VAR_0)->ai_fifo->num_segments *
     FUNC_0(VAR_0)->ai_fifo->sample_packing_ratio;
}
