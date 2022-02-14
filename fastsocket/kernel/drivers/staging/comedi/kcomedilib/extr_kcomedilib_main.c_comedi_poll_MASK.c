
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {scalar_t__ type; void* lock; int (* poll ) (struct comedi_device*,struct comedi_subdevice*) ;int busy; struct comedi_async* async; } ;
struct comedi_device {unsigned int n_subdevices; struct comedi_subdevice* subdevices; } ;
struct comedi_async {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct comedi_device*,struct comedi_subdevice*) ;

int FUNC_1(void *VAR_4, unsigned int VAR_5)
{
 struct comedi_device *VAR_6 = (struct comedi_device *)VAR_4;
 struct comedi_subdevice *VAR_7 = VAR_6->subdevices;
 struct comedi_async *VAR_8;

 if (VAR_5 >= VAR_6->n_subdevices)
  return -VAR_2;

 VAR_7 = VAR_6->subdevices + VAR_5;

 VAR_8 = VAR_7->async;
 if (VAR_7->type == VAR_0 || !VAR_8)
  return -VAR_3;


 if (VAR_7->lock && VAR_7->lock != VAR_4)
  return -VAR_1;


 if (!VAR_7->busy)
  return -VAR_3;

 return VAR_7->poll(VAR_6, VAR_7);
}
