
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int actl; } ;
struct TYPE_8__ {TYPE_1__ cmd; } ;
struct TYPE_10__ {int ena; } ;
struct TYPE_11__ {TYPE_2__ scsw; TYPE_4__ pmcw; } ;
struct subchannel {TYPE_5__ schib; } ;
struct TYPE_9__ {int parent; } ;
struct ccw_device {TYPE_6__* private; TYPE_3__ dev; } ;
struct TYPE_12__ {scalar_t__ state; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct subchannel*) ;
 struct subchannel* FUNC_1 (int ) ;

int FUNC_2(struct ccw_device *VAR_5)
{
 struct subchannel *VAR_6;

 if (!VAR_5 || !VAR_5->dev.parent)
  return -VAR_3;
 VAR_6 = FUNC_1(VAR_5->dev.parent);
 if (!VAR_6->schib.pmcw.ena)
  return -VAR_2;
 if (VAR_5->private->state == VAR_0)
  return -VAR_3;
 if (VAR_5->private->state != VAR_1 ||
     !(VAR_6->schib.scsw.cmd.actl & VAR_4))
  return -VAR_2;
 return FUNC_0(VAR_6);
}
