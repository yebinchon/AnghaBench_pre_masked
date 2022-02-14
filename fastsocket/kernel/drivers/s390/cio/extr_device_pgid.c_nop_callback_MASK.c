
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct subchannel {int vpm; } ;
struct ccw_request {int lpm; } ;
struct TYPE_3__ {int parent; } ;
struct ccw_device {TYPE_2__* private; TYPE_1__ dev; } ;
struct TYPE_4__ {struct ccw_request req; } ;


 int VAR_0 ;
 int FUNC_0 (struct ccw_device*) ;
 struct subchannel* FUNC_1 (int ) ;
 int FUNC_2 (struct ccw_device*,int) ;

__attribute__((used)) static void FUNC_3(struct ccw_device *VAR_1, void *VAR_2, int VAR_3)
{
 struct subchannel *VAR_4 = FUNC_1(VAR_1->dev.parent);
 struct ccw_request *VAR_5 = &VAR_1->private->req;

 if (VAR_3 == 0)
  VAR_4->vpm |= VAR_5->lpm;
 else if (VAR_3 != -VAR_0)
  goto err;
 VAR_5->lpm >>= 1;
 FUNC_0(VAR_1);
 return;

err:
 FUNC_2(VAR_1, VAR_3);
}
