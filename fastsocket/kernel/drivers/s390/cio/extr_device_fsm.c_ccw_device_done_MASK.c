
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int sch_no; } ;
struct subchannel {TYPE_3__ schid; } ;
struct irb {int dummy; } ;
struct TYPE_6__ {int parent; } ;
struct ccw_device {TYPE_5__* private; int online; TYPE_1__ dev; } ;
struct TYPE_9__ {scalar_t__ donotify; } ;
struct TYPE_7__ {int devno; } ;
struct TYPE_10__ {int state; int wait_q; TYPE_4__ flags; TYPE_2__ dev_id; int irb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ,int ) ;
 int VAR_3 ;



 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct ccw_device*,int ) ;
 int FUNC_2 (struct ccw_device*) ;
 int FUNC_3 (struct ccw_device*,int ) ;
 int FUNC_4 (struct ccw_device*) ;
 int FUNC_5 (struct ccw_device*,int ) ;
 int FUNC_6 (struct subchannel*) ;
 int FUNC_7 (int *,int ,int) ;
 struct subchannel* FUNC_8 (int ) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void
FUNC_10(struct ccw_device *VAR_6, int VAR_7)
{
 struct subchannel *VAR_8;

 VAR_8 = FUNC_8(VAR_6->dev.parent);

 FUNC_5(VAR_6, 0);

 if (VAR_7 != VAR_4)
  FUNC_6(VAR_8);


 FUNC_7(&VAR_6->private->irb, 0, sizeof(struct irb));

 VAR_6->private->state = VAR_7;

 switch (VAR_7) {
 case 130:
  FUNC_0(0, "Boxed device %04x on subchannel %04x\n",
         VAR_6->private->dev_id.devno, VAR_8->schid.sch_no);
  if (VAR_6->online &&
      FUNC_1(VAR_6, VAR_1) != VAR_5)
   FUNC_3(VAR_6, VAR_0);
  VAR_6->private->flags.donotify = 0;
  break;
 case 128:
  FUNC_0(0, "Device %04x gone on subchannel %04x\n",
         VAR_6->private->dev_id.devno, VAR_8->schid.sch_no);
  if (FUNC_1(VAR_6, VAR_2) != VAR_5)
   FUNC_3(VAR_6, VAR_0);
  else
   FUNC_4(VAR_6);
  VAR_6->private->flags.donotify = 0;
  break;
 case 129:
  FUNC_0(0, "Disconnected device %04x on subchannel "
         "%04x\n", VAR_6->private->dev_id.devno,
         VAR_8->schid.sch_no);
  if (FUNC_1(VAR_6, VAR_3) != VAR_5)
   FUNC_3(VAR_6, VAR_0);
  else
   FUNC_4(VAR_6);
  VAR_6->private->flags.donotify = 0;
  break;
 default:
  break;
 }

 if (VAR_6->private->flags.donotify) {
  VAR_6->private->flags.donotify = 0;
  FUNC_2(VAR_6);
 }
 FUNC_9(&VAR_6->private->wait_q);
}
