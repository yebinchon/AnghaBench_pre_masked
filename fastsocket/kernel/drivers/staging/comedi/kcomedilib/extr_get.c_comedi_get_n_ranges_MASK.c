
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {TYPE_2__* range_table; TYPE_1__** range_table_list; } ;
struct comedi_device {struct comedi_subdevice* subdevices; } ;
struct TYPE_4__ {int length; } ;
struct TYPE_3__ {int length; } ;



int FUNC_0(void *VAR_0, unsigned int VAR_1, unsigned int VAR_2)
{
 struct comedi_device *VAR_3 = (struct comedi_device *)VAR_0;
 struct comedi_subdevice *VAR_4 = VAR_3->subdevices + VAR_1;
 int VAR_5;

 if (VAR_4->range_table_list) {
  VAR_5 = VAR_4->range_table_list[VAR_2]->length;
 } else {
  VAR_5 = VAR_4->range_table->length;
 }

 return VAR_5;
}
