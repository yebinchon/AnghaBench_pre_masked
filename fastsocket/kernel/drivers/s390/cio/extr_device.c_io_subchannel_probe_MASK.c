
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {int sch_no; int ssid; } ;
struct TYPE_11__ {int kobj; } ;
struct subchannel {int lock; TYPE_6__ schid; int private; TYPE_5__ dev; } ;
struct io_subchannel_private {int dummy; } ;
struct TYPE_10__ {int groups; } ;
struct ccw_device {TYPE_3__ dev; TYPE_2__* private; } ;
struct TYPE_8__ {int initialized; } ;
struct TYPE_9__ {scalar_t__ state; TYPE_1__ flags; } ;


 int FUNC_0 (int ,char*,int ,int ,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct ccw_device*) ;
 int VAR_7 ;
 int FUNC_2 (struct subchannel*) ;
 scalar_t__ FUNC_3 (TYPE_6__) ;
 int FUNC_4 (struct subchannel*,int ) ;
 int FUNC_5 (TYPE_6__) ;
 int FUNC_6 (TYPE_5__*,int ) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*) ;
 int VAR_8 ;
 int FUNC_9 (struct subchannel*) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int,int) ;
 struct ccw_device* FUNC_12 (struct subchannel*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int *,int *) ;

__attribute__((used)) static int FUNC_16(struct subchannel *VAR_9)
{
 struct ccw_device *VAR_10;
 int VAR_11;

 if (FUNC_3(VAR_9->schid)) {
  VAR_11 = FUNC_15(&VAR_9->dev.kobj,
     &VAR_8);
  if (VAR_11)
   FUNC_0(0, "Failed to create io subchannel "
          "attributes for subchannel "
          "0.%x.%04x (rc=%d)\n",
          VAR_9->schid.ssid, VAR_9->schid.sch_no, VAR_11);





  FUNC_6(&VAR_9->dev, 0);
  FUNC_10(&VAR_9->dev.kobj, VAR_5);
  VAR_10 = FUNC_12(VAR_9);
  VAR_10->dev.groups = VAR_7;
  FUNC_7(&VAR_10->dev);
  VAR_10->private->flags.initialized = 1;
  FUNC_1(VAR_10);





  if (VAR_10->private->state != VAR_1 &&
      VAR_10->private->state != VAR_2 &&
      VAR_10->private->state != VAR_0)
   FUNC_8(&VAR_10->dev);
  return 0;
 }
 FUNC_9(VAR_9);
 VAR_11 = FUNC_2(VAR_9);
 if (VAR_11)
  goto out_schedule;
 VAR_11 = FUNC_15(&VAR_9->dev.kobj,
    &VAR_8);
 if (VAR_11)
  goto out_schedule;

 VAR_9->private = FUNC_11(sizeof(struct io_subchannel_private),
          VAR_4 | VAR_3);
 if (!VAR_9->private)
  goto out_schedule;
 FUNC_5(VAR_9->schid);
 return 0;

out_schedule:
 FUNC_13(VAR_9->lock);
 FUNC_4(VAR_9, VAR_6);
 FUNC_14(VAR_9->lock);
 return 0;
}
