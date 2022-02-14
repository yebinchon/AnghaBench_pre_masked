
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
struct comedi_device {int dummy; } ;
struct TYPE_6__ {TYPE_1__* ai_fifo; } ;
struct TYPE_5__ {unsigned int ai_fifo_segment_length; } ;
struct TYPE_4__ {unsigned int sample_packing_ratio; } ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (struct comedi_device*) ;
 TYPE_2__* FUNC_1 (struct comedi_device*) ;

__attribute__((used)) static inline unsigned int FUNC_2(struct comedi_device *VAR_1)
{
 unsigned int VAR_2;

 VAR_2 =
     FUNC_1(VAR_1)->ai_fifo_segment_length *
     FUNC_0(VAR_1)->ai_fifo->sample_packing_ratio;
 if (VAR_2 > VAR_0 / sizeof(uint16_t))
  VAR_2 = VAR_0 / sizeof(uint16_t);

 return VAR_2;
}
