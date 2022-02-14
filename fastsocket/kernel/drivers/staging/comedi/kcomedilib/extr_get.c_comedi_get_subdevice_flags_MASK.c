
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {unsigned int subdev_flags; } ;
struct comedi_device {struct comedi_subdevice* subdevices; } ;



unsigned int FUNC_0(void *VAR_0, unsigned int VAR_1)
{
 struct comedi_device *VAR_2 = (struct comedi_device *)VAR_0;
 struct comedi_subdevice *VAR_3 = VAR_2->subdevices + VAR_1;

 return VAR_3->subdev_flags;
}
