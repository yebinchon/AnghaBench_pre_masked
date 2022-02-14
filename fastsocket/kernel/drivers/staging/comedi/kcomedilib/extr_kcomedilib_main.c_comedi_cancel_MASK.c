
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {void* lock; void* busy; int (* cancel ) (struct comedi_device*,struct comedi_subdevice*) ;TYPE_1__* async; } ;
struct comedi_device {unsigned int n_subdevices; struct comedi_subdevice* subdevices; } ;
struct TYPE_2__ {int * inttrig; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct comedi_subdevice*,int,int ) ;
 int FUNC_1 (struct comedi_device*,struct comedi_subdevice*) ;

int FUNC_2(void *VAR_5, unsigned int VAR_6)
{
 struct comedi_device *VAR_7 = (struct comedi_device *)VAR_5;
 struct comedi_subdevice *VAR_8;
 int VAR_9 = 0;

 if (VAR_6 >= VAR_7->n_subdevices)
  return -VAR_2;

 VAR_8 = VAR_7->subdevices + VAR_6;

 if (VAR_8->lock && VAR_8->lock != VAR_5)
  return -VAR_0;
 if (!VAR_8->cancel || !VAR_8->async)
  return -VAR_2;

 VAR_9 = VAR_8->cancel(VAR_7, VAR_8);

 if (VAR_9)
  return VAR_9;

 FUNC_0(VAR_8, VAR_4 | VAR_3, 0);
 VAR_8->async->inttrig = ((void*)0);
 VAR_8->busy = ((void*)0);

 return 0;
}
