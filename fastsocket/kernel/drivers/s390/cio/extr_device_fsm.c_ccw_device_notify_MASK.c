
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ccw_device {TYPE_1__* drv; TYPE_3__* private; int online; } ;
struct TYPE_5__ {int devno; int ssid; } ;
struct TYPE_6__ {TYPE_2__ dev_id; } ;
struct TYPE_4__ {scalar_t__ (* notify ) (struct ccw_device*,int) ;} ;


 int FUNC_0 (int,char*,int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct ccw_device*,int) ;

int FUNC_2(struct ccw_device *VAR_4, int VAR_5)
{
 int VAR_6 = -VAR_0;

 if (!VAR_4->drv)
  goto out;
 if (!VAR_4->online)
  goto out;
 FUNC_0(2, "notify called for 0.%x.%04x, event=%d\n",
        VAR_4->private->dev_id.ssid, VAR_4->private->dev_id.devno,
        VAR_5);
 if (!VAR_4->drv->notify) {
  VAR_6 = -VAR_1;
  goto out;
 }
 if (VAR_4->drv->notify(VAR_4, VAR_5))
  VAR_6 = VAR_3;
 else
  VAR_6 = VAR_2;
out:
 return VAR_6;
}
