
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {unsigned int n_subdevices; TYPE_1__* subdevices; } ;
struct TYPE_2__ {int type; } ;


 int VAR_0 ;

int FUNC_0(void *VAR_1, int VAR_2, unsigned int VAR_3)
{
 struct comedi_device *VAR_4 = (struct comedi_device *)VAR_1;

 if (VAR_3 > VAR_4->n_subdevices)
  return -VAR_0;

 for (; VAR_3 < VAR_4->n_subdevices; VAR_3++) {
  if (VAR_4->subdevices[VAR_3].type == VAR_2)
   return VAR_3;
 }
 return -1;
}
