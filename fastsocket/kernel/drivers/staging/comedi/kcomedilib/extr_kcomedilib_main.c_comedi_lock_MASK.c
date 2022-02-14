
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int spin_lock; void* lock; scalar_t__ busy; } ;
struct comedi_device {unsigned int n_subdevices; struct comedi_subdevice* subdevices; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

int FUNC_2(void *VAR_2, unsigned int VAR_3)
{
 struct comedi_device *VAR_4 = (struct comedi_device *)VAR_2;
 struct comedi_subdevice *VAR_5;
 unsigned long VAR_6;
 int VAR_7 = 0;

 if (VAR_3 >= VAR_4->n_subdevices)
  return -VAR_1;

 VAR_5 = VAR_4->subdevices + VAR_3;

 FUNC_0(&VAR_5->spin_lock, VAR_6);

 if (VAR_5->busy) {
  VAR_7 = -VAR_0;
 } else {
  if (VAR_5->lock) {
   VAR_7 = -VAR_0;
  } else {
   VAR_5->lock = VAR_2;
  }
 }

 FUNC_1(&VAR_5->spin_lock, VAR_6);

 return VAR_7;
}
