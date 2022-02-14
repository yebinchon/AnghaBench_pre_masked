
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct comedi_subdevice {int maxdata; TYPE_1__* range_table; } ;
struct comedi_krange {scalar_t__ min; scalar_t__ max; } ;
struct comedi_device {struct comedi_subdevice* read_subdev; } ;
struct TYPE_4__ {unsigned long usec_period; int uvolt_amplitude; } ;
struct TYPE_3__ {struct comedi_krange* range; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static short FUNC_1(struct comedi_device *VAR_1,
        unsigned int VAR_2,
        unsigned long VAR_3)
{
 struct comedi_subdevice *VAR_4 = VAR_1->read_subdev;
 unsigned int VAR_5 = VAR_4->maxdata / 2;
 u64 VAR_6;
 const struct comedi_krange *VAR_7 =
     &VAR_4->range_table->range[VAR_2];
 VAR_3 %= VAR_0->usec_period;

 VAR_6 = VAR_4->maxdata;
 VAR_6 *= VAR_0->uvolt_amplitude;
 FUNC_0(VAR_6, VAR_7->max - VAR_7->min);

 if (VAR_3 < VAR_0->usec_period / 2)
  VAR_6 *= -1;

 return VAR_5 + VAR_6;
}
