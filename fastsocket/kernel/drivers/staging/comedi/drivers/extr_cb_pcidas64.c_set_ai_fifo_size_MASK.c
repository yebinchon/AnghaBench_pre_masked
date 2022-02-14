
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hw_fifo_info {unsigned int sample_packing_ratio; unsigned int num_segments; } ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {struct hw_fifo_info* ai_fifo; } ;


 int FUNC_0 (char*,unsigned int) ;
 TYPE_1__* FUNC_1 (struct comedi_device*) ;
 int FUNC_2 (struct comedi_device*,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_0, unsigned int VAR_1)
{
 unsigned int VAR_2;
 int VAR_3;
 const struct hw_fifo_info *const VAR_4 = FUNC_1(VAR_0)->ai_fifo;

 VAR_2 = VAR_1 / VAR_4->sample_packing_ratio;

 VAR_3 = FUNC_2(VAR_0,
         VAR_2 /
         VAR_4->num_segments);
 if (VAR_3 < 0)
  return VAR_3;

 VAR_1 = VAR_3 * VAR_4->num_segments * VAR_4->sample_packing_ratio;

 FUNC_0("set hardware fifo size to %i\n", VAR_1);

 return VAR_1;
}
