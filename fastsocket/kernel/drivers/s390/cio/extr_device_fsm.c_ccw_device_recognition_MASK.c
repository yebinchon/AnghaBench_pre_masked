
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct subchannel {int dummy; } ;
struct TYPE_4__ {int parent; } ;
struct ccw_device {TYPE_3__* private; TYPE_1__ dev; } ;
typedef scalar_t__ addr_t ;
struct TYPE_5__ {scalar_t__ recog_done; } ;
struct TYPE_6__ {int state; TYPE_2__ flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ccw_device*,int ) ;
 int FUNC_1 (struct ccw_device*) ;
 scalar_t__ FUNC_2 (struct subchannel*,int ) ;
 struct subchannel* FUNC_3 (int ) ;

void FUNC_4(struct ccw_device *VAR_2)
{
 struct subchannel *VAR_3 = FUNC_3(VAR_2->dev.parent);
 VAR_2->private->flags.recog_done = 0;
 VAR_2->private->state = VAR_1;
 if (FUNC_2(VAR_3, (u32) (addr_t) VAR_3)) {
  FUNC_0(VAR_2, VAR_0);
  return;
 }
 FUNC_1(VAR_2);
}
