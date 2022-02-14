
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int kobj; int parent; } ;
struct subchannel {int lock; TYPE_4__ dev; } ;
struct ccw_device {TYPE_3__* private; TYPE_4__ dev; int drv; } ;
struct TYPE_9__ {int recog_done; } ;
struct TYPE_8__ {int ssid; int devno; } ;
struct TYPE_10__ {int wait_q; TYPE_2__ flags; TYPE_1__ dev_id; } ;


 int FUNC_0 (int ,char*,int,int,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct ccw_device*) ;
 int FUNC_3 (struct subchannel*) ;
 int FUNC_4 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (struct subchannel*,int *) ;
 int FUNC_10 (int ,unsigned long) ;
 int FUNC_11 (int ,unsigned long) ;
 struct subchannel* FUNC_12 (int ) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static void FUNC_14(struct ccw_device *VAR_3)
{
 struct subchannel *VAR_4;
 int VAR_5, VAR_6 = 1;
 unsigned long VAR_7;

 VAR_4 = FUNC_12(VAR_3->dev.parent);






 if (!FUNC_5(&VAR_4->dev))
  goto out_err;
 FUNC_3(VAR_4);






 if (FUNC_5(&VAR_3->dev)) {
  if (!VAR_3->drv) {
   VAR_5 = FUNC_6(&VAR_3->dev);
   if (VAR_5)

    FUNC_0(0, "device_reprobe() returned"
           " %d for 0.%x.%04x\n", VAR_5,
           VAR_3->private->dev_id.ssid,
           VAR_3->private->dev_id.devno);
  }
  VAR_6 = 0;
  goto out;
 }




 FUNC_4(&VAR_4->dev, 0);
 FUNC_7(&VAR_4->dev.kobj, VAR_0);

 VAR_5 = FUNC_2(VAR_3);
 if (VAR_5) {
  FUNC_0(0, "Could not register ccw dev 0.%x.%04x: %d\n",
         VAR_3->private->dev_id.ssid,
         VAR_3->private->dev_id.devno, VAR_5);
  FUNC_10(VAR_4->lock, VAR_7);
  FUNC_9(VAR_4, ((void*)0));
  FUNC_11(VAR_4->lock, VAR_7);

  FUNC_8(&VAR_3->dev);
  goto out_err;
 }
out:
 VAR_3->private->flags.recog_done = 1;
 FUNC_13(&VAR_3->private->wait_q);
out_err:
 if (VAR_6 && FUNC_1(&VAR_1))
  FUNC_13(&VAR_2);
}
