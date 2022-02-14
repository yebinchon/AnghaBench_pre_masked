
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct comedi_subdevice {int subdev_flags; TYPE_1__* async; } ;
struct comedi_device_file_info {TYPE_2__* device; } ;
typedef int ssize_t ;
struct TYPE_4__ {int mutex; } ;
struct TYPE_3__ {unsigned int prealloc_bufsz; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 struct comedi_subdevice* FUNC_0 (struct comedi_device_file_info*) ;
 struct comedi_device_file_info* FUNC_1 (struct device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,int ,char*,unsigned int) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_3,
       struct device_attribute *VAR_4, char *VAR_5)
{
 ssize_t VAR_6;
 struct comedi_device_file_info *VAR_7 = FUNC_1(VAR_3);
 unsigned VAR_8 = 0;
 struct comedi_subdevice *const VAR_9 =
     FUNC_0(VAR_7);

 FUNC_2(&VAR_7->device->mutex);
 if (VAR_9 &&
     (VAR_9->subdev_flags & VAR_1) &&
     VAR_9->async) {
  VAR_8 = VAR_9->async->prealloc_bufsz /
      VAR_2;
 }
 VAR_6 = FUNC_4(VAR_5, VAR_0, "%i\n", VAR_8);
 FUNC_3(&VAR_7->device->mutex);

 return VAR_6;
}
