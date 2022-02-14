
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {void* lock; int spin_lock; scalar_t__ busy; struct comedi_async* async; } ;
struct comedi_device {unsigned int n_subdevices; struct comedi_subdevice* subdevices; } ;
struct comedi_async {int * cb_arg; int * cb_func; scalar_t__ cb_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

int FUNC_2(void *VAR_3, unsigned int VAR_4)
{
 struct comedi_device *VAR_5 = (struct comedi_device *)VAR_3;
 struct comedi_subdevice *VAR_6;
 unsigned long VAR_7;
 struct comedi_async *VAR_8;
 int VAR_9;

 if (VAR_4 >= VAR_5->n_subdevices)
  return -VAR_2;

 VAR_6 = VAR_5->subdevices + VAR_4;

 VAR_8 = VAR_6->async;

 FUNC_0(&VAR_6->spin_lock, VAR_7);

 if (VAR_6->busy) {
  VAR_9 = -VAR_1;
 } else if (VAR_6->lock && VAR_6->lock != (void *)VAR_3) {
  VAR_9 = -VAR_0;
 } else {
  VAR_6->lock = ((void*)0);

  if (VAR_8) {
   VAR_8->cb_mask = 0;
   VAR_8->cb_func = ((void*)0);
   VAR_8->cb_arg = ((void*)0);
  }

  VAR_9 = 0;
 }

 FUNC_1(&VAR_6->spin_lock, VAR_7);

 return VAR_9;
}
