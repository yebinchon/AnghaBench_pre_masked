
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {scalar_t__ type; void* lock; scalar_t__ busy; struct comedi_async* async; } ;
struct comedi_device {unsigned int n_subdevices; struct comedi_subdevice* subdevices; } ;
struct comedi_async {unsigned int cb_mask; int (* cb_func ) (unsigned int,void*) ;int * cb_arg; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

int FUNC_0(void *VAR_5, unsigned int VAR_6,
        unsigned int VAR_7, int (*VAR_8) (unsigned int,
          void *), void *VAR_9)
{
 struct comedi_device *VAR_10 = (struct comedi_device *)VAR_5;
 struct comedi_subdevice *VAR_11;
 struct comedi_async *VAR_12;

 if (VAR_6 >= VAR_10->n_subdevices)
  return -VAR_3;

 VAR_11 = VAR_10->subdevices + VAR_6;

 VAR_12 = VAR_11->async;
 if (VAR_11->type == VAR_0 || !VAR_12)
  return -VAR_4;


 if (VAR_11->lock && VAR_11->lock != VAR_5)
  return -VAR_1;


 if (VAR_11->busy)
  return -VAR_2;

 if (!VAR_7) {
  VAR_12->cb_mask = 0;
  VAR_12->cb_func = ((void*)0);
  VAR_12->cb_arg = ((void*)0);
 } else {
  VAR_12->cb_mask = VAR_7;
  VAR_12->cb_func = VAR_8;
  VAR_12->cb_arg = VAR_9;
 }

 return 0;
}
