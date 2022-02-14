
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct i1480u {TYPE_3__* net_dev; TYPE_1__* usb_iface; } ;
struct device {int dummy; } ;
struct TYPE_5__ {int kobj; } ;
struct TYPE_6__ {TYPE_2__ dev; } ;
struct TYPE_4__ {struct device dev; } ;


 int FUNC_0 (struct device*,char*,int) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *) ;

int FUNC_2(struct i1480u *VAR_1)
{
 int VAR_2;
 struct device *VAR_3 = &VAR_1->usb_iface->dev;
 VAR_2 = FUNC_1(&VAR_1->net_dev->dev.kobj,
        &VAR_0);
 if (VAR_2 < 0)
  FUNC_0(VAR_3, "cannot initialize sysfs attributes: %d\n",
   VAR_2);
 return VAR_2;
}
