
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int scsw; } ;
struct subchannel {TYPE_2__ schib; } ;
struct TYPE_6__ {int parent; } ;
struct ccw_device {TYPE_5__* private; TYPE_1__ dev; } ;
typedef enum dev_event { ____Placeholder_dev_event } dev_event ;
struct TYPE_9__ {int doverify; } ;
struct TYPE_8__ {int scsw; } ;
struct TYPE_10__ {scalar_t__ state; TYPE_4__ flags; TYPE_3__ irb; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ccw_device*,int ) ;
 int FUNC_1 (struct ccw_device*) ;
 scalar_t__ FUNC_2 (struct subchannel*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct subchannel* FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(struct ccw_device *VAR_4, enum dev_event VAR_5)
{
 struct subchannel *VAR_6;

 if (VAR_4->private->state == VAR_1) {
  VAR_4->private->flags.doverify = 1;
  return;
 }
 VAR_6 = FUNC_5(VAR_4->dev.parent);




 if (FUNC_2(VAR_6)) {
  FUNC_0(VAR_4, -VAR_2);
  return;
 }

 if (FUNC_3(&VAR_6->schib.scsw) != 0 ||
     (FUNC_4(&VAR_6->schib.scsw) & VAR_3) ||
     (FUNC_4(&VAR_4->private->irb.scsw) & VAR_3)) {





  VAR_4->private->flags.doverify = 1;
  return;
 }

 VAR_4->private->state = VAR_0;
 FUNC_1(VAR_4);
}
