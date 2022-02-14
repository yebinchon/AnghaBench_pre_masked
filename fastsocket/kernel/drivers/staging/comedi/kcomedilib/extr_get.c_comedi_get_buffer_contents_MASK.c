
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {struct comedi_async* async; } ;
struct comedi_device {unsigned int n_subdevices; struct comedi_subdevice* subdevices; } ;
struct comedi_async {int dummy; } ;


 unsigned int FUNC_0 (struct comedi_async*) ;

int FUNC_1(void *VAR_0, unsigned int VAR_1)
{
 struct comedi_device *VAR_2 = (struct comedi_device *)VAR_0;
 struct comedi_subdevice *VAR_3 = VAR_2->subdevices + VAR_1;
 struct comedi_async *VAR_4;
 unsigned int VAR_5;

 if (VAR_1 >= VAR_2->n_subdevices)
  return -1;
 VAR_4 = VAR_3->async;
 if (VAR_4 == ((void*)0))
  return 0;
 VAR_5 = FUNC_0(VAR_3->async);
 return VAR_5;
}
