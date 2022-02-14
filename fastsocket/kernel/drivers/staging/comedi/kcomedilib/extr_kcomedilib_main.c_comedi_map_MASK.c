
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {unsigned int n_subdevices; struct comedi_subdevice* subdevices; } ;
struct TYPE_2__ {void* prealloc_buf; } ;


 int VAR_0 ;

int FUNC_0(void *VAR_1, unsigned int VAR_2, void *VAR_3)
{
 struct comedi_device *VAR_4 = (struct comedi_device *)VAR_1;
 struct comedi_subdevice *VAR_5;

 if (VAR_2 >= VAR_4->n_subdevices)
  return -VAR_0;

 VAR_5 = VAR_4->subdevices + VAR_2;

 if (!VAR_5->async)
  return -VAR_0;

 if (VAR_3)
  *((void **)VAR_3) = VAR_5->async->prealloc_buf;



 return 0;
}
