
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {scalar_t__ type; int (* do_cmdtest ) (struct comedi_device*,struct comedi_subdevice*,struct comedi_cmd*) ;int * async; } ;
struct comedi_device {scalar_t__ n_subdevices; struct comedi_subdevice* subdevices; } ;
struct comedi_cmd {scalar_t__ subdev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct comedi_device*,struct comedi_subdevice*,struct comedi_cmd*) ;

int FUNC_1(void *VAR_3, struct comedi_cmd *VAR_4)
{
 struct comedi_device *VAR_5 = (struct comedi_device *)VAR_3;
 struct comedi_subdevice *VAR_6;

 if (VAR_4->subdev >= VAR_5->n_subdevices)
  return -VAR_2;

 VAR_6 = VAR_5->subdevices + VAR_4->subdev;
 if (VAR_6->type == VAR_0)
  return -VAR_1;

 if (VAR_6->async == ((void*)0))
  return -VAR_2;

 return VAR_6->do_cmdtest(VAR_5, VAR_6, VAR_4);
}
