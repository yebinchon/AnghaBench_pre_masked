
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


struct TYPE_8__ {int pam; } ;
struct TYPE_9__ {TYPE_2__ pmcw; } ;
struct subchannel {TYPE_3__ schib; } ;
struct TYPE_7__ {int parent; } ;
struct ccw_device {TYPE_6__* private; TYPE_1__ dev; } ;
struct TYPE_11__ {scalar_t__ doverify; int mpath; int pgroup; } ;
struct TYPE_10__ {int mpath; int pgroup; } ;
struct TYPE_12__ {TYPE_5__ flags; TYPE_4__ options; int pgid_todo_mask; scalar_t__ pgid_valid_mask; int pgid; int dev_id; } ;


 int FUNC_0 (int,int *,int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int ,int ,int) ;
 struct subchannel* FUNC_3 (int ) ;
 int FUNC_4 (struct ccw_device*) ;

void FUNC_5(struct ccw_device *VAR_0)
{
 struct subchannel *VAR_1 = FUNC_3(VAR_0->dev.parent);

 FUNC_1(4, "vrfy");
 FUNC_0(4, &VAR_0->private->dev_id, sizeof(VAR_0->private->dev_id));

 FUNC_2(VAR_0->private->pgid, 0, sizeof(VAR_0->private->pgid));
 VAR_0->private->pgid_valid_mask = 0;
 VAR_0->private->pgid_todo_mask = VAR_1->schib.pmcw.pam;




 VAR_0->private->flags.pgroup = VAR_0->private->options.pgroup;
 VAR_0->private->flags.mpath = VAR_0->private->options.mpath;
 VAR_0->private->flags.doverify = 0;
 FUNC_4(VAR_0);
}
