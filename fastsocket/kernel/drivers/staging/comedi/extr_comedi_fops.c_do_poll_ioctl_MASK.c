
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {void* lock; void* busy; int (* poll ) (struct comedi_device*,struct comedi_subdevice*) ;} ;
struct comedi_device {unsigned int n_subdevices; struct comedi_subdevice* subdevices; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct comedi_device*,struct comedi_subdevice*) ;

__attribute__((used)) static int FUNC_1(struct comedi_device *VAR_3, unsigned int VAR_4,
    void *VAR_5)
{
 struct comedi_subdevice *VAR_6;

 if (VAR_4 >= VAR_3->n_subdevices)
  return -VAR_2;
 VAR_6 = VAR_3->subdevices + VAR_4;

 if (VAR_6->lock && VAR_6->lock != VAR_5)
  return -VAR_0;

 if (!VAR_6->busy)
  return 0;

 if (VAR_6->busy != VAR_5)
  return -VAR_1;

 if (VAR_6->poll)
  return VAR_6->poll(VAR_3, VAR_6);

 return -VAR_2;
}
