
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int dev; } ;
struct TYPE_10__ {TYPE_4__ pmcw; } ;
struct TYPE_8__ {int ssid; int sch_no; } ;
struct subchannel {int lock; TYPE_5__ schib; TYPE_3__ schid; int todo_work; int dev; } ;
struct ccw_device {int dev; TYPE_2__* private; } ;
struct ccw_dev_id {int devno; int ssid; } ;
typedef enum io_sch_action { ____Placeholder_io_sch_action } io_sch_action ;
struct TYPE_6__ {int resuming; } ;
struct TYPE_7__ {TYPE_1__ flags; int state; int todo_work; } ;


 int FUNC_0 (int,char*,int ,int ,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct ccw_device*) ;
 int FUNC_2 (struct ccw_device*,struct subchannel*) ;
 int FUNC_3 (struct ccw_device*) ;
 int FUNC_4 (struct ccw_device*) ;
 int FUNC_5 (struct ccw_device*) ;
 int FUNC_6 (struct ccw_device*) ;
 int FUNC_7 (struct subchannel*) ;
 int FUNC_8 (struct ccw_device*,int ) ;
 int FUNC_9 (int *) ;
 struct ccw_device* FUNC_10 (struct ccw_dev_id*) ;
 int FUNC_11 (struct subchannel*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct subchannel*) ;
 int FUNC_14 (struct subchannel*) ;
 struct ccw_device* FUNC_15 (struct subchannel*) ;
 int FUNC_16 (int ,unsigned long) ;
 int FUNC_17 (int ,unsigned long) ;
 scalar_t__ FUNC_18 (int *) ;

__attribute__((used)) static int FUNC_19(struct subchannel *VAR_3, int VAR_4)
{
 unsigned long VAR_5;
 struct ccw_device *VAR_6;
 struct ccw_dev_id VAR_7;
 enum io_sch_action VAR_8;
 int VAR_9 = -VAR_2;

 FUNC_16(VAR_3->lock, VAR_5);
 if (!FUNC_9(&VAR_3->dev))
  goto out_unlock;
 if (FUNC_18(&VAR_3->todo_work))
  goto out_unlock;
 VAR_6 = FUNC_15(VAR_3);
 if (VAR_6 && FUNC_18(&VAR_6->private->todo_work))
  goto out_unlock;
 VAR_8 = FUNC_14(VAR_3);
 FUNC_0(2, "event: sch 0.%x.%04x, process=%d, action=%d\n",
        VAR_3->schid.ssid, VAR_3->schid.sch_no, VAR_4,
        VAR_8);

 switch (VAR_8) {
 case 131:

  FUNC_5(VAR_6);
  VAR_9 = 0;
  goto out_unlock;
 case 128:

  FUNC_11(VAR_3);
  VAR_9 = 0;
  goto out_unlock;
 case 135:
  FUNC_3(VAR_6);
  VAR_9 = 0;
  goto out_unlock;
 case 132:
 case 133:
  FUNC_3(VAR_6);
  break;
 case 129:
 case 130:
  if (!VAR_6)
   break;
  if (VAR_6->private->state == VAR_1) {





   FUNC_8(VAR_6, VAR_0);
  } else
   FUNC_4(VAR_6);
  break;
 case 134:
  VAR_9 = 0;
  goto out_unlock;
 default:
  break;
 }
 FUNC_17(VAR_3->lock, VAR_5);

 if (!VAR_4)
  goto out;

 switch (VAR_8) {
 case 132:
 case 133:

  VAR_9 = FUNC_1(VAR_6);
  if (VAR_9)
   goto out;
  break;
 case 129:

  if (!VAR_6->private->flags.resuming)
   FUNC_6(VAR_6);
  break;
 default:
  break;
 }

 switch (VAR_8) {
 case 132:
 case 130:
  if (!VAR_6 || !VAR_6->private->flags.resuming)
   FUNC_7(VAR_3);
  break;
 case 133:
 case 129:
 case 136:
  VAR_7.ssid = VAR_3->schid.ssid;
  VAR_7.devno = VAR_3->schib.pmcw.dev;
  VAR_6 = FUNC_10(&VAR_7);
  if (!VAR_6) {
   FUNC_13(VAR_3);
   break;
  }
  VAR_9 = FUNC_2(VAR_6, VAR_3);
  if (VAR_9) {

   FUNC_12(&VAR_6->dev);
   goto out;
  }
  FUNC_16(VAR_3->lock, VAR_5);
  FUNC_5(VAR_6);
  FUNC_17(VAR_3->lock, VAR_5);

  FUNC_12(&VAR_6->dev);
  break;
 default:
  break;
 }
 return 0;

out_unlock:
 FUNC_17(VAR_3->lock, VAR_5);
out:
 return VAR_9;
}
