
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ mp; } ;
struct subchannel {TYPE_2__ config; } ;
struct TYPE_7__ {int parent; } ;
struct ccw_device {TYPE_4__* private; TYPE_3__ dev; } ;
struct ccw_dev_id {int devno; int ssid; } ;
struct TYPE_5__ {scalar_t__ mpath; } ;
struct TYPE_8__ {TYPE_1__ flags; struct ccw_dev_id dev_id; } ;


 int FUNC_0 (int ,char*,int ,int ,int) ;
 int FUNC_1 (struct ccw_device*,int) ;
 int FUNC_2 (struct subchannel*) ;
 struct subchannel* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct ccw_device *VAR_0, void *VAR_1, int VAR_2)
{
 struct subchannel *VAR_3 = FUNC_3(VAR_0->dev.parent);
 struct ccw_dev_id *VAR_4 = &VAR_0->private->dev_id;

 if (VAR_2)
  goto out;

 VAR_0->private->flags.mpath = 0;
 if (VAR_3->config.mp) {
  VAR_3->config.mp = 0;
  VAR_2 = FUNC_2(VAR_3);
 }
out:
 FUNC_0(0, "disb: device 0.%x.%04x: rc=%d\n", VAR_4->ssid, VAR_4->devno,
        VAR_2);
 FUNC_1(VAR_0, VAR_2);
}
