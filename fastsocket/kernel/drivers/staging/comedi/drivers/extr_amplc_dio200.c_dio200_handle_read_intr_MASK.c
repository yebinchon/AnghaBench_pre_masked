
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dio200_subdev_intr {unsigned int enabled_isns; unsigned int valid_isns; scalar_t__ stopcount; int spinlock; int continuous; scalar_t__ active; int iobase; scalar_t__ has_int_sce; } ;
struct comedi_subdevice {TYPE_2__* async; struct dio200_subdev_intr* private; } ;
struct comedi_device {int dummy; } ;
struct TYPE_3__ {unsigned int chanlist_len; int * chanlist; } ;
struct TYPE_4__ {unsigned int events; TYPE_1__ cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*,short) ;
 int FUNC_2 (struct comedi_device*,char*) ;
 int FUNC_3 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_4 (struct comedi_device*,struct comedi_subdevice*) ;
 unsigned int FUNC_5 (int ) ;
 int FUNC_6 (unsigned int,int ) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_9(struct comedi_device *VAR_5,
       struct comedi_subdevice *VAR_6)
{
 struct dio200_subdev_intr *VAR_7 = VAR_6->private;
 unsigned VAR_8;
 unsigned VAR_9;
 unsigned VAR_10;
 unsigned int VAR_11;
 unsigned long VAR_12;

 VAR_8 = 0;

 FUNC_7(&VAR_7->spinlock, VAR_12);
 VAR_11 = VAR_6->async->events;
 if (VAR_7->has_int_sce) {
  VAR_10 = VAR_7->enabled_isns;
  while ((VAR_9 = (FUNC_5(VAR_7->iobase) & VAR_7->valid_isns
       & ~VAR_8)) != 0) {
   VAR_8 |= VAR_9;
   VAR_10 &= ~VAR_8;
   FUNC_6(VAR_10, VAR_7->iobase);
  }
 } else {




  VAR_8 = VAR_7->enabled_isns;
 }

 if (VAR_8) {






  VAR_10 = VAR_7->enabled_isns;
  if (VAR_7->has_int_sce) {
   FUNC_6(VAR_10, VAR_7->iobase);
  }

  if (VAR_7->active) {







   if (VAR_8 & VAR_7->enabled_isns) {

    short VAR_13;
    unsigned int VAR_14, VAR_15, VAR_16;

    VAR_13 = 0;
    VAR_16 = VAR_6->async->cmd.chanlist_len;
    for (VAR_14 = 0; VAR_14 < VAR_16; VAR_14++) {
     VAR_15 = FUNC_0(VAR_6->async->cmd.chanlist[VAR_14]);
     if (VAR_8 & (1U << VAR_15)) {
      VAR_13 |= (1U << VAR_14);
     }
    }

    if (FUNC_1(VAR_6->async, VAR_13)) {
     VAR_6->async->events |= (VAR_0 |
            VAR_2);
    } else {

     FUNC_4(VAR_5, VAR_6);
     VAR_6->async->events |= VAR_3
         | VAR_4;
     FUNC_2(VAR_5, "buffer overflow");
    }


    if (!VAR_7->continuous) {

     if (VAR_7->stopcount > 0) {
      VAR_7->stopcount--;
      if (VAR_7->stopcount == 0) {
       VAR_6->async->events |=
           VAR_1;
       FUNC_4(VAR_5,
          VAR_6);
      }
     }
    }
   }
  }
 }
 FUNC_8(&VAR_7->spinlock, VAR_12);

 if (VAR_11 != VAR_6->async->events) {
  FUNC_3(VAR_5, VAR_6);
 }

 return (VAR_8 != 0);
}
