
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct subchannel {int dummy; } ;
struct ccw_request {int drc; } ;
struct TYPE_3__ {int parent; } ;
struct ccw_device {TYPE_2__* private; TYPE_1__ dev; } ;
struct TYPE_4__ {struct ccw_request req; } ;


 int VAR_0 ;
 int FUNC_0 (struct ccw_device*) ;
 int FUNC_1 (struct ccw_device*,int) ;
 int FUNC_2 (struct subchannel*) ;
 struct subchannel* FUNC_3 (int ) ;

void FUNC_4(struct ccw_device *VAR_1)
{
 struct subchannel *VAR_2 = FUNC_3(VAR_1->dev.parent);
 struct ccw_request *VAR_3 = &VAR_1->private->req;
 int VAR_4;

 if (!FUNC_0(VAR_1)) {

  VAR_3->drc = -VAR_0;
 }
 VAR_4 = FUNC_2(VAR_2);
 if (VAR_4)
  goto err;
 return;

err:
 FUNC_1(VAR_1, VAR_4);
}
