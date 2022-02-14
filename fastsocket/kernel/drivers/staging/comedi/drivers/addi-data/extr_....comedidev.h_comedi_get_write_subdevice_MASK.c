
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_device_file_info {TYPE_1__* device; struct comedi_subdevice* write_subdevice; } ;
struct TYPE_2__ {struct comedi_subdevice* write_subdev; } ;



__attribute__((used)) static inline struct comedi_subdevice *FUNC_0(const struct
          comedi_device_file_info
          *VAR_0)
{
 if (VAR_0->write_subdevice)
  return VAR_0->write_subdevice;
 if (VAR_0->device == ((void*)0))
  return ((void*)0);
 return VAR_0->device->write_subdev;
}
