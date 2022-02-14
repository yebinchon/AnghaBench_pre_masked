
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {TYPE_1__* async; scalar_t__ busy; } ;
struct comedi_device {int n_subdevices; struct comedi_subdevice* subdevices; int attached; } ;
struct TYPE_2__ {scalar_t__ mmap_count; } ;



__attribute__((used)) static int FUNC_0(struct comedi_device *VAR_0)
{
 struct comedi_subdevice *VAR_1;
 int VAR_2;

 if (!VAR_0->attached)
  return 0;

 for (VAR_2 = 0; VAR_2 < VAR_0->n_subdevices; VAR_2++) {
  VAR_1 = VAR_0->subdevices + VAR_2;
  if (VAR_1->busy)
   return 1;
  if (VAR_1->async && VAR_1->async->mmap_count)
   return 1;
 }

 return 0;
}
