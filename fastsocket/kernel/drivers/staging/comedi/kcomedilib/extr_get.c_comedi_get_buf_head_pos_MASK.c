
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {struct comedi_async* async; } ;
struct comedi_device {struct comedi_subdevice* subdevices; } ;
struct comedi_async {unsigned int buf_write_count; } ;



unsigned int FUNC_0(void *VAR_0, unsigned int VAR_1)
{
 struct comedi_device *VAR_2 = (struct comedi_device *)VAR_0;
 struct comedi_subdevice *VAR_3 = VAR_2->subdevices + VAR_1;
 struct comedi_async *VAR_4;

 VAR_4 = VAR_3->async;
 if (VAR_4 == ((void*)0))
  return 0;

 return VAR_4->buf_write_count;
}
