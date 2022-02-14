
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {scalar_t__ type; int (* do_cmd ) (struct comedi_device*,struct comedi_subdevice*) ;void* busy; struct comedi_async* async; } ;
struct comedi_device {scalar_t__ n_subdevices; struct comedi_subdevice* subdevices; } ;
struct comedi_cmd {scalar_t__ subdev; int flags; } ;
struct comedi_async {int cb_mask; struct comedi_cmd cmd; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct comedi_async*) ;
 int FUNC_1 (struct comedi_subdevice*,int ,unsigned int) ;
 int FUNC_2 (struct comedi_device*,struct comedi_subdevice*) ;

int FUNC_3(void *VAR_7, struct comedi_cmd *VAR_8)
{
 struct comedi_device *VAR_9 = (struct comedi_device *)VAR_7;
 struct comedi_subdevice *VAR_10;
 struct comedi_async *VAR_11;
 unsigned VAR_12;

 if (VAR_8->subdev >= VAR_9->n_subdevices)
  return -VAR_4;

 VAR_10 = VAR_9->subdevices + VAR_8->subdev;
 if (VAR_10->type == VAR_1)
  return -VAR_3;

 VAR_11 = VAR_10->async;
 if (VAR_11 == ((void*)0))
  return -VAR_4;

 if (VAR_10->busy)
  return -VAR_2;
 VAR_10->busy = VAR_7;

 if (VAR_11->cb_mask & VAR_0)
  VAR_8->flags |= VAR_6;

 VAR_11->cmd = *VAR_8;

 VAR_12 = VAR_5;

 FUNC_1(VAR_10, ~0, VAR_12);

 FUNC_0(VAR_11);

 return VAR_10->do_cmd(VAR_9, VAR_10);
}
