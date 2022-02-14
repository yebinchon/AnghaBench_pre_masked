
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file {int f_flags; } ;
struct comedi_subdevice {struct file* lock; struct file* busy; } ;
struct comedi_device_file_info {struct comedi_device* device; } ;
struct comedi_device {int n_subdevices; int use_count; int mutex; TYPE_1__* driver; scalar_t__ attached; int (* close ) (struct comedi_device*) ;struct comedi_subdevice* subdevices; } ;
struct TYPE_2__ {int module; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,struct file*,int ) ;
 struct comedi_device_file_info* FUNC_1 (unsigned int const) ;
 int FUNC_2 (struct comedi_device*,struct comedi_subdevice*) ;
 unsigned int FUNC_3 (struct inode*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct comedi_device*) ;

__attribute__((used)) static int FUNC_8(struct inode *VAR_2, struct file *VAR_3)
{
 const unsigned VAR_4 = FUNC_3(VAR_2);
 struct comedi_device_file_info *VAR_5 =
     FUNC_1(VAR_4);
 struct comedi_device *VAR_6 = VAR_5->device;
 struct comedi_subdevice *VAR_7 = ((void*)0);
 int VAR_8;

 FUNC_5(&VAR_6->mutex);

 if (VAR_6->subdevices) {
  for (VAR_8 = 0; VAR_8 < VAR_6->n_subdevices; VAR_8++) {
   VAR_7 = VAR_6->subdevices + VAR_8;

   if (VAR_7->busy == VAR_3)
    FUNC_2(VAR_6, VAR_7);
   if (VAR_7->lock == VAR_3)
    VAR_7->lock = ((void*)0);
  }
 }
 if (VAR_6->attached && VAR_6->use_count == 1 && VAR_6->close)
  VAR_6->close(VAR_6);

 FUNC_4(VAR_1);
 if (VAR_6->attached)
  FUNC_4(VAR_6->driver->module);

 VAR_6->use_count--;

 FUNC_6(&VAR_6->mutex);

 if (VAR_3->f_flags & VAR_0)
  FUNC_0(-1, VAR_3, 0);

 return 0;
}
