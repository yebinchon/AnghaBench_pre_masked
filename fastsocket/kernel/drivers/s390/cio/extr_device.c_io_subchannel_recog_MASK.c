
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int ssid; } ;
struct TYPE_5__ {int dev; } ;
struct TYPE_6__ {TYPE_1__ pmcw; } ;
struct subchannel {int lock; TYPE_4__ schid; TYPE_2__ schib; } ;
struct TYPE_7__ {int ssid; int devno; } ;
struct ccw_device_private {int timer; int wait_q; int cmb_list; int state; TYPE_4__ schid; TYPE_3__ dev_id; } ;
struct ccw_device {struct ccw_device_private* private; int ccwlock; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int FUNC_2 (struct ccw_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct subchannel*,struct ccw_device*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(struct ccw_device *VAR_2, struct subchannel *VAR_3)
{
 struct ccw_device_private *VAR_4;

 VAR_2->ccwlock = VAR_3->lock;


 VAR_4 = VAR_2->private;
 VAR_4->dev_id.devno = VAR_3->schib.pmcw.dev;
 VAR_4->dev_id.ssid = VAR_3->schid.ssid;
 VAR_4->schid = VAR_3->schid;
 VAR_4->state = VAR_0;
 FUNC_0(&VAR_4->cmb_list);
 FUNC_4(&VAR_4->wait_q);
 FUNC_3(&VAR_4->timer);


 FUNC_1(&VAR_1);


 FUNC_6(VAR_3->lock);
 FUNC_5(VAR_3, VAR_2);
 FUNC_2(VAR_2);
 FUNC_7(VAR_3->lock);
}
