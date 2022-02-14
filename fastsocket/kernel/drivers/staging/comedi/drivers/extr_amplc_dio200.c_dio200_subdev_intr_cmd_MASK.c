
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dio200_subdev_intr {int active; int continuous; int spinlock; int stopcount; } ;
struct comedi_subdevice {TYPE_1__* async; struct dio200_subdev_intr* private; } ;
struct comedi_device {int dummy; } ;
struct comedi_cmd {int stop_src; int start_src; int stop_arg; } ;
struct TYPE_2__ {int inttrig; struct comedi_cmd cmd; } ;




 int FUNC_0 (struct comedi_device*,struct comedi_subdevice*) ;
 int VAR_0 ;
 int FUNC_1 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_1,
      struct comedi_subdevice *VAR_2)
{
 struct comedi_cmd *VAR_3 = &VAR_2->async->cmd;
 struct dio200_subdev_intr *VAR_4 = VAR_2->private;
 unsigned long VAR_5;
 int VAR_6 = 0;

 FUNC_2(&VAR_4->spinlock, VAR_5);
 VAR_4->active = 1;


 switch (VAR_3->stop_src) {
 case 129:
  VAR_4->continuous = 0;
  VAR_4->stopcount = VAR_3->stop_arg;
  break;
 default:

  VAR_4->continuous = 1;
  VAR_4->stopcount = 0;
  break;
 }


 switch (VAR_3->start_src) {
 case 128:
  VAR_2->async->inttrig = VAR_0;
  break;
 default:

  VAR_6 = FUNC_1(VAR_1, VAR_2);
  break;
 }
 FUNC_3(&VAR_4->spinlock, VAR_5);

 if (VAR_6) {
  FUNC_0(VAR_1, VAR_2);
 }

 return 0;
}
