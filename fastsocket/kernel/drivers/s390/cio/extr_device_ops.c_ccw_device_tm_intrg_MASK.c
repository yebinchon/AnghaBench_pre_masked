
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int ena; } ;
struct TYPE_8__ {int scsw; TYPE_2__ pmcw; } ;
struct subchannel {TYPE_4__ schib; } ;
struct TYPE_5__ {int parent; } ;
struct ccw_device {TYPE_3__* private; TYPE_1__ dev; } ;
struct TYPE_7__ {scalar_t__ state; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct subchannel*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct subchannel* FUNC_3 (int ) ;

int FUNC_4(struct ccw_device *VAR_4)
{
 struct subchannel *VAR_5 = FUNC_3(VAR_4->dev.parent);

 if (!VAR_5->schib.pmcw.ena)
  return -VAR_1;
 if (VAR_4->private->state != VAR_0)
  return -VAR_2;
 if (!FUNC_2(&VAR_5->schib.scsw) ||
     !(FUNC_1(&VAR_5->schib.scsw) & VAR_3))
  return -VAR_1;
 return FUNC_0(VAR_5);
}
