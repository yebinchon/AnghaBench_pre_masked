
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_12__ {int ssid; } ;
struct TYPE_8__ {int ena; int dev; } ;
struct TYPE_9__ {TYPE_2__ pmcw; } ;
struct subchannel {int lock; TYPE_6__ schid; int dev; TYPE_3__ schib; int reg_mutex; } ;
struct TYPE_11__ {int parent; } ;
struct ccw_device {int ccwlock; TYPE_4__* private; TYPE_5__ dev; } ;
typedef scalar_t__ addr_t ;
struct TYPE_7__ {int devno; int ssid; } ;
struct TYPE_10__ {TYPE_6__ schid; TYPE_1__ dev_id; } ;


 int FUNC_0 (int ,char*,int ,int ,int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct subchannel*) ;
 int FUNC_2 (struct subchannel*,int ) ;
 int FUNC_3 (TYPE_6__) ;
 int FUNC_4 (struct subchannel*) ;
 int FUNC_5 (TYPE_5__*,int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct subchannel*) ;
 int FUNC_11 (struct subchannel*,struct ccw_device*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 struct subchannel* FUNC_14 (int ) ;

__attribute__((used)) static int FUNC_15(struct ccw_device *VAR_3,
      struct subchannel *VAR_4)
{
 struct subchannel *VAR_5;
 int VAR_6, VAR_7 = 0;

 VAR_5 = FUNC_14(VAR_3->dev.parent);

 if (!FUNC_6(&VAR_4->dev))
  return -VAR_2;

 if (!FUNC_10(VAR_5)) {
  FUNC_12(VAR_5->lock);
  VAR_7 = VAR_5->schib.pmcw.ena;
  VAR_6 = 0;
  if (VAR_7)
   VAR_6 = FUNC_1(VAR_5);
  FUNC_13(VAR_5->lock);
  if (VAR_6 == -VAR_1) {

   FUNC_9(&VAR_4->dev);
   return VAR_6;
  }
 }

 FUNC_7(&VAR_4->reg_mutex);
 VAR_6 = FUNC_5(&VAR_3->dev, &VAR_4->dev, VAR_0);
 FUNC_8(&VAR_4->reg_mutex);
 if (VAR_6) {
  FUNC_0(0, "device_move(0.%x.%04x,0.%x.%04x)=%d\n",
         VAR_3->private->dev_id.ssid,
         VAR_3->private->dev_id.devno, VAR_4->schid.ssid,
         VAR_4->schib.pmcw.dev, VAR_6);
  if (VAR_7) {

   FUNC_12(VAR_5->lock);
   FUNC_2(VAR_5, (u32)(addr_t)VAR_5);
   FUNC_13(VAR_5->lock);
  }

  FUNC_9(&VAR_4->dev);
  return VAR_6;
 }

 if (!FUNC_10(VAR_5)) {
  FUNC_12(VAR_5->lock);
  FUNC_11(VAR_5, ((void*)0));
  FUNC_13(VAR_5->lock);
  FUNC_3(VAR_5->schid);
 }

 FUNC_9(&VAR_5->dev);

 FUNC_12(VAR_4->lock);
 VAR_3->private->schid = VAR_4->schid;
 VAR_3->ccwlock = VAR_4->lock;
 if (!FUNC_10(VAR_4))
  FUNC_11(VAR_4, VAR_3);
 FUNC_13(VAR_4->lock);
 if (!FUNC_10(VAR_4))
  FUNC_4(VAR_4);
 return 0;
}
