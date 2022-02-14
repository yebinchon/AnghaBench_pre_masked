
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dio200_subdev_intr {scalar_t__ stopcount; unsigned int valid_isns; unsigned int enabled_isns; int iobase; scalar_t__ has_int_sce; scalar_t__ active; int continuous; } ;
struct comedi_subdevice {TYPE_1__* async; struct dio200_subdev_intr* private; } ;
struct comedi_device {int dummy; } ;
struct comedi_cmd {unsigned int chanlist_len; int * chanlist; } ;
struct TYPE_2__ {int events; struct comedi_cmd cmd; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (unsigned int,int ) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_1,
        struct comedi_subdevice *VAR_2)
{
 unsigned int VAR_3;
 unsigned VAR_4;
 struct dio200_subdev_intr *VAR_5 = VAR_2->private;
 struct comedi_cmd *VAR_6 = &VAR_2->async->cmd;
 int VAR_7 = 0;

 if (!VAR_5->continuous && VAR_5->stopcount == 0) {

  VAR_2->async->events |= VAR_0;
  VAR_5->active = 0;
  VAR_7 = 1;
 } else {

  VAR_4 = 0;
  if (VAR_6->chanlist) {
   for (VAR_3 = 0; VAR_3 < VAR_6->chanlist_len; VAR_3++) {
    VAR_4 |= (1U << FUNC_0(VAR_6->chanlist[VAR_3]));
   }
  }
  VAR_4 &= VAR_5->valid_isns;

  VAR_5->enabled_isns = VAR_4;
  if (VAR_5->has_int_sce) {
   FUNC_1(VAR_4, VAR_5->iobase);
  }
 }

 return VAR_7;
}
