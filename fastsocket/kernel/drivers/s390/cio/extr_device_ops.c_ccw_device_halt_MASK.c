
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int ena; } ;
struct TYPE_6__ {TYPE_1__ pmcw; } ;
struct subchannel {TYPE_2__ schib; } ;
struct TYPE_8__ {int parent; } ;
struct ccw_device {TYPE_3__* private; TYPE_4__ dev; } ;
struct TYPE_7__ {scalar_t__ state; unsigned long intparm; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct subchannel*) ;
 struct subchannel* FUNC_1 (int ) ;

int FUNC_2(struct ccw_device *VAR_5, unsigned long VAR_6)
{
 struct subchannel *VAR_7;
 int VAR_8;

 if (!VAR_5 || !VAR_5->dev.parent)
  return -VAR_4;
 VAR_7 = FUNC_1(VAR_5->dev.parent);
 if (!VAR_7->schib.pmcw.ena)
  return -VAR_3;
 if (VAR_5->private->state == VAR_0)
  return -VAR_4;
 if (VAR_5->private->state != VAR_1 &&
     VAR_5->private->state != VAR_2)
  return -VAR_3;

 VAR_8 = FUNC_0(VAR_7);
 if (VAR_8 == 0)
  VAR_5->private->intparm = VAR_6;
 return VAR_8;
}
