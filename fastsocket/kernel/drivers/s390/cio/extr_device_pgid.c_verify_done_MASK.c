
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int mp; } ;
struct subchannel {int vpm; TYPE_3__ config; } ;
struct TYPE_8__ {int parent; } ;
struct ccw_device {TYPE_2__* private; TYPE_4__ dev; } ;
struct ccw_dev_id {int devno; int ssid; } ;
struct TYPE_5__ {int mpath; int pgroup; } ;
struct TYPE_6__ {TYPE_1__ flags; struct ccw_dev_id dev_id; } ;


 int FUNC_0 (int,char*,int ,int ,int,int,int,int ) ;
 int FUNC_1 (struct ccw_device*,int) ;
 int FUNC_2 (struct subchannel*) ;
 struct subchannel* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct ccw_device *VAR_0, int VAR_1)
{
 struct subchannel *VAR_2 = FUNC_3(VAR_0->dev.parent);
 struct ccw_dev_id *VAR_3 = &VAR_0->private->dev_id;
 int VAR_4 = VAR_0->private->flags.mpath;
 int VAR_5 = VAR_0->private->flags.pgroup;

 if (VAR_1)
  goto out;

 if (VAR_2->config.mp != VAR_4) {
  VAR_2->config.mp = VAR_4;
  VAR_1 = FUNC_2(VAR_2);
 }
out:
 FUNC_0(2, "vrfy: device 0.%x.%04x: rc=%d pgroup=%d mpath=%d "
    "vpm=%02x\n", VAR_3->ssid, VAR_3->devno, VAR_1, VAR_5, VAR_4,
    VAR_2->vpm);
 FUNC_1(VAR_0, VAR_1);
}
