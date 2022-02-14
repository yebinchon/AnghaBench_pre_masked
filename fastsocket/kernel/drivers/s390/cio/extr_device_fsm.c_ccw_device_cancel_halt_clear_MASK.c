
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int ena; } ;
struct TYPE_8__ {int scsw; TYPE_2__ pmcw; } ;
struct subchannel {TYPE_3__ schib; } ;
struct TYPE_6__ {int parent; } ;
struct ccw_device {TYPE_5__* private; TYPE_1__ dev; } ;
struct TYPE_9__ {int devno; int ssid; } ;
struct TYPE_10__ {int iretry; TYPE_4__ dev_id; } ;


 int FUNC_0 (int ,char*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct subchannel*) ;
 int FUNC_2 (struct subchannel*) ;
 int FUNC_3 (struct subchannel*) ;
 scalar_t__ FUNC_4 (struct subchannel*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct subchannel* FUNC_7 (int ) ;

int
FUNC_8(struct ccw_device *VAR_6)
{
 struct subchannel *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_7(VAR_6->dev.parent);
 if (FUNC_4(VAR_7))
  return -VAR_3;
 if (!VAR_7->schib.pmcw.ena)

  return 0;

 if (!(FUNC_5(&VAR_7->schib.scsw) & VAR_5) &&
     !(FUNC_5(&VAR_7->schib.scsw) & VAR_4)) {
  if (!FUNC_6(&VAR_7->schib.scsw)) {
   VAR_8 = FUNC_1(VAR_7);
   if (VAR_8 != -VAR_1)
    return VAR_8;
  }


  VAR_6->private->iretry = 3;
 }
 if (!(FUNC_5(&VAR_7->schib.scsw) & VAR_4)) {

  if (VAR_6->private->iretry) {
   VAR_6->private->iretry--;
   VAR_8 = FUNC_3(VAR_7);
   if (VAR_8 != -VAR_0)
    return (VAR_8 == 0) ? -VAR_0 : VAR_8;
  }

  VAR_6->private->iretry = 255;
 }

 if (VAR_6->private->iretry) {
  VAR_6->private->iretry--;
  VAR_8 = FUNC_2 (VAR_7);
  return (VAR_8 == 0) ? -VAR_0 : VAR_8;
 }

 FUNC_0(0, "0.%x.%04x: could not stop I/O\n",
        VAR_6->private->dev_id.ssid, VAR_6->private->dev_id.devno);
 return -VAR_2;
}
