
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {struct comedi_async* async; } ;
struct comedi_device {struct comedi_subdevice* subdevices; } ;
struct comedi_async {unsigned int buf_read_count; } ;


 int FUNC_0 (struct comedi_async*,int) ;
 int FUNC_1 (struct comedi_async*,int) ;

int FUNC_2(void *VAR_0, unsigned int VAR_1,
         unsigned int VAR_2)
{
 struct comedi_device *VAR_3 = (struct comedi_device *)VAR_0;
 struct comedi_subdevice *VAR_4 = VAR_3->subdevices + VAR_1;
 struct comedi_async *VAR_5;
 int VAR_6;

 VAR_5 = VAR_4->async;
 if (VAR_5 == ((void*)0))
  return -1;

 VAR_6 = VAR_2 - VAR_5->buf_read_count;
 if (VAR_6 < 0)
  return -1;
 FUNC_0(VAR_5, VAR_6);
 FUNC_1(VAR_5, VAR_6);

 return 0;
}
