
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct subchannel {int dummy; } ;
struct irb {int dummy; } ;
struct TYPE_6__ {int parent; } ;
struct ccw_device {TYPE_3__* private; int (* handler ) (struct ccw_device*,int ,TYPE_4__*) ;TYPE_1__ dev; } ;
struct TYPE_9__ {int scsw; } ;
struct TYPE_7__ {scalar_t__ fast; int repall; } ;
struct TYPE_8__ {TYPE_4__ irb; int intparm; TYPE_2__ options; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (struct ccw_device*,int ) ;
 int FUNC_1 (TYPE_4__*,int ,int) ;
 unsigned int FUNC_2 (int *) ;
 int FUNC_3 (struct ccw_device*,int ,TYPE_4__*) ;
 struct subchannel* FUNC_4 (int ) ;

int
FUNC_5(struct ccw_device *VAR_5)
{
 struct subchannel *VAR_6;
 unsigned int VAR_7;
 int VAR_8;

 VAR_6 = FUNC_4(VAR_5->dev.parent);
 VAR_7 = FUNC_2(&VAR_5->private->irb.scsw);
 VAR_8 = (VAR_7 & VAR_3) ||
  (VAR_7 == (VAR_0 | VAR_4)) ||
  (VAR_7 == VAR_4);
 if (!VAR_8 &&
     !VAR_5->private->options.repall &&
     !(VAR_7 & VAR_1) &&
     !(VAR_5->private->options.fast &&
       (VAR_7 & VAR_2)))
  return 0;


 if (VAR_8)
  FUNC_0(VAR_5, 0);



 if (VAR_5->handler)
  VAR_5->handler(VAR_5, VAR_5->private->intparm,
         &VAR_5->private->irb);




 FUNC_1(&VAR_5->private->irb, 0, sizeof(struct irb));

 return 1;
}
