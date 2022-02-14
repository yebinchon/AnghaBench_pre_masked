
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct tcw {int dummy; } ;
struct TYPE_6__ {int ena; } ;
struct TYPE_7__ {TYPE_2__ pmcw; } ;
struct subchannel {int lpm; TYPE_3__ schib; } ;
struct TYPE_5__ {int parent; } ;
struct ccw_device {TYPE_4__* private; TYPE_1__ dev; } ;
struct TYPE_8__ {scalar_t__ state; unsigned long intparm; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct subchannel*,struct tcw*,int ,int ) ;
 struct subchannel* FUNC_1 (int ) ;

int FUNC_2(struct ccw_device *VAR_4, struct tcw *VAR_5,
       unsigned long VAR_6, u8 VAR_7, u8 VAR_8)
{
 struct subchannel *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_1(VAR_4->dev.parent);
 if (!VAR_9->schib.pmcw.ena)
  return -VAR_2;
 if (VAR_4->private->state != VAR_0)
  return -VAR_3;

 if (VAR_7) {
  VAR_7 &= VAR_9->lpm;
  if (VAR_7 == 0)
   return -VAR_1;
 }
 VAR_10 = FUNC_0(VAR_9, VAR_5, VAR_7, VAR_8);
 if (VAR_10 == 0)
  VAR_4->private->intparm = VAR_6;
 return VAR_10;
}
