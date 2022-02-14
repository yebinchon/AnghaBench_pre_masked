
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int async; } ;
struct comedi_device {unsigned int n_subdevices; struct comedi_subdevice* subdevices; } ;


 int VAR_0 ;

int FUNC_0(void *VAR_1, unsigned int VAR_2)
{
 struct comedi_device *VAR_3 = (struct comedi_device *)VAR_1;
 struct comedi_subdevice *VAR_4;

 if (VAR_2 >= VAR_3->n_subdevices)
  return -VAR_0;

 VAR_4 = VAR_3->subdevices + VAR_2;

 if (!VAR_4->async)
  return -VAR_0;



 return 0;
}
