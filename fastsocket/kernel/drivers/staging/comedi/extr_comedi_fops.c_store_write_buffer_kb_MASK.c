
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long uint64_t ;
typedef unsigned long uint32_t ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct comedi_subdevice {int subdev_flags; int * async; } ;
struct comedi_device_file_info {TYPE_1__* device; } ;
typedef int ssize_t ;
struct TYPE_2__ {int mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 struct comedi_subdevice* FUNC_0 (struct comedi_device_file_info*) ;
 struct comedi_device_file_info* FUNC_1 (struct device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*,struct comedi_subdevice* const,int *,unsigned long) ;
 scalar_t__ FUNC_5 (char const*,int,unsigned long*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_3,
         struct device_attribute *VAR_4,
         const char *VAR_5, size_t VAR_6)
{
 struct comedi_device_file_info *VAR_7 = FUNC_1(VAR_3);
 unsigned long VAR_8;
 uint64_t VAR_9;
 int VAR_10;
 struct comedi_subdevice *const VAR_11 =
     FUNC_0(VAR_7);

 if (FUNC_5(VAR_5, 10, &VAR_8))
  return -VAR_0;
 if (VAR_8 != (uint32_t) VAR_8)
  return -VAR_0;
 VAR_9 = ((uint64_t) VAR_8) * VAR_2;
 if (VAR_9 != (uint32_t) VAR_9)
  return -VAR_0;

 FUNC_2(&VAR_7->device->mutex);
 if (VAR_11 == ((void*)0) ||
     (VAR_11->subdev_flags & VAR_1) == 0 ||
     VAR_11->async == ((void*)0)) {
  FUNC_3(&VAR_7->device->mutex);
  return -VAR_0;
 }
 VAR_10 = FUNC_4(VAR_7->device, VAR_11,
         VAR_11->async, VAR_9);
 FUNC_3(&VAR_7->device->mutex);

 if (VAR_10 < 0)
  return VAR_10;
 return VAR_6;
}
