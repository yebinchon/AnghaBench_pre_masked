
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {unsigned int* maxdata_list; unsigned int maxdata; } ;
struct comedi_device {struct comedi_subdevice* subdevices; } ;



unsigned int FUNC_0(void *VAR_0, unsigned int VAR_1,
    unsigned int VAR_2)
{
 struct comedi_device *VAR_3 = (struct comedi_device *)VAR_0;
 struct comedi_subdevice *VAR_4 = VAR_3->subdevices + VAR_1;

 if (VAR_4->maxdata_list)
  return VAR_4->maxdata_list[VAR_2];

 return VAR_4->maxdata;
}
