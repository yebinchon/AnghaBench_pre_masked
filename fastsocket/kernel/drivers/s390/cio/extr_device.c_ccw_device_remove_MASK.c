
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device {int dummy; } ;
struct ccw_driver {int (* remove ) (struct ccw_device*) ;} ;
struct ccw_device {struct ccw_driver* drv; int dev; TYPE_2__* private; int ccwlock; scalar_t__ online; } ;
struct TYPE_3__ {int devno; int ssid; } ;
struct TYPE_4__ {TYPE_1__ dev_id; int wait_q; } ;


 int FUNC_0 (int ,char*,int,int ,int ) ;
 int FUNC_1 (struct ccw_device*) ;
 int FUNC_2 (struct ccw_device*,int ) ;
 int FUNC_3 (struct ccw_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct ccw_device*) ;
 struct ccw_device* FUNC_8 (struct device*) ;
 int FUNC_9 (int ,int ) ;

__attribute__((used)) static int
FUNC_10 (struct device *VAR_0)
{
 struct ccw_device *VAR_1 = FUNC_8(VAR_0);
 struct ccw_driver *VAR_2 = VAR_1->drv;
 int VAR_3;

 if (VAR_2->remove)
  VAR_2->remove(VAR_1);
 if (VAR_1->online) {
  VAR_1->online = 0;
  FUNC_5(VAR_1->ccwlock);
  VAR_3 = FUNC_1(VAR_1);
  FUNC_6(VAR_1->ccwlock);
  if (VAR_3 == 0)
   FUNC_9(VAR_1->private->wait_q,
       FUNC_3(VAR_1));
  else
   FUNC_0(0, "ccw_device_offline returned %d, "
          "device 0.%x.%04x\n",
          VAR_3, VAR_1->private->dev_id.ssid,
          VAR_1->private->dev_id.devno);

  FUNC_4(&VAR_1->dev);
 }
 FUNC_2(VAR_1, 0);
 VAR_1->drv = ((void*)0);
 return 0;
}
