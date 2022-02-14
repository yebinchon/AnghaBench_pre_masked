
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct subchannel {int lock; int schid; } ;
struct device {int dummy; } ;
struct TYPE_6__ {int parent; } ;
struct ccw_device {TYPE_5__* drv; scalar_t__ online; TYPE_4__* private; TYPE_1__ dev; } ;
struct TYPE_10__ {int (* restore ) (struct ccw_device*) ;} ;
struct TYPE_8__ {int devno; int ssid; } ;
struct TYPE_7__ {int donotify; } ;
struct TYPE_9__ {int state; TYPE_3__ dev_id; scalar_t__ cmb; int wait_q; TYPE_2__ flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,int ,int ,int) ;
 int VAR_2 ;



 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct ccw_device*) ;
 scalar_t__ FUNC_2 (struct ccw_device*,int ) ;
 scalar_t__ FUNC_3 (struct ccw_device*) ;
 int FUNC_4 (struct ccw_device*,int ) ;
 int FUNC_5 (struct ccw_device*) ;
 int FUNC_6 (struct ccw_device*) ;
 int FUNC_7 (struct ccw_device*,int) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (struct ccw_device*) ;
 int FUNC_10 (struct ccw_device*) ;
 int FUNC_11 (struct ccw_device*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (struct ccw_device*) ;
 struct ccw_device* FUNC_15 (struct device*) ;
 struct subchannel* FUNC_16 (int ) ;
 int FUNC_17 (int ,int ) ;

__attribute__((used)) static int FUNC_18(struct device *VAR_5)
{
 struct ccw_device *VAR_6 = FUNC_15(VAR_5);
 struct subchannel *VAR_7;
 int VAR_8 = 0;

 FUNC_1(VAR_6);
 VAR_7 = FUNC_16(VAR_6->dev.parent);
 FUNC_12(VAR_7->lock);
 if (FUNC_8(VAR_7->schid))
  goto out_restore;


 switch (VAR_6->private->state) {
 case 129:
 case 128:
  VAR_6->private->flags.donotify = 0;
  break;
 case 130:
  VAR_8 = FUNC_10(VAR_6);
  if (VAR_8)
   goto out_unlock;
  goto out_restore;
 default:
  VAR_8 = FUNC_11(VAR_6);
  if (VAR_8)
   goto out_unlock;
  goto out_restore;
 }

 if (!FUNC_5(VAR_6)) {
  FUNC_6(VAR_6);
  FUNC_4(VAR_6, VAR_0);
  VAR_8 = -VAR_3;
  goto out_unlock;
 }
 if (!VAR_6->online)
  goto out_unlock;

 if (FUNC_3(VAR_6)) {
  VAR_8 = FUNC_11(VAR_6);
  if (VAR_8)
   goto out_unlock;
  goto out_restore;
 }
 FUNC_13(VAR_7->lock);
 FUNC_17(VAR_6->private->wait_q, FUNC_9(VAR_6));
 FUNC_12(VAR_7->lock);

 if (FUNC_2(VAR_6, VAR_2) == VAR_4) {
  FUNC_4(VAR_6, VAR_1);
  VAR_8 = -VAR_3;
  goto out_unlock;
 }


 if (VAR_6->private->cmb) {
  FUNC_13(VAR_7->lock);
  VAR_8 = FUNC_7(VAR_6, 1);
  FUNC_12(VAR_7->lock);
  if (VAR_8) {
   FUNC_0(2, "resume: cdev 0.%x.%04x: cmf failed "
          "(rc=%d)\n", VAR_6->private->dev_id.ssid,
          VAR_6->private->dev_id.devno, VAR_8);
   VAR_8 = 0;
  }
 }

out_restore:
 FUNC_13(VAR_7->lock);
 if (VAR_6->online && VAR_6->drv && VAR_6->drv->restore)
  VAR_8 = VAR_6->drv->restore(VAR_6);
 return VAR_8;

out_unlock:
 FUNC_13(VAR_7->lock);
 return VAR_8;
}
