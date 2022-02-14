
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct subchannel {int opm; scalar_t__ vpm; } ;
struct ccw_request {int lpm; } ;
struct TYPE_6__ {int parent; } ;
struct ccw_device {TYPE_2__* private; TYPE_3__ dev; } ;
struct TYPE_4__ {scalar_t__ mpath; } ;
struct TYPE_5__ {TYPE_1__ flags; int pgid_todo_mask; struct ccw_request req; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ccw_device*) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (struct ccw_device*,int ) ;
 struct subchannel* FUNC_3 (int ) ;
 int FUNC_4 (struct ccw_device*,int ) ;

__attribute__((used)) static void FUNC_5(struct ccw_device *VAR_4)
{
 struct subchannel *VAR_5 = FUNC_3(VAR_4->dev.parent);
 struct ccw_request *VAR_6 = &VAR_4->private->req;
 u8 VAR_7;


 VAR_6->lpm = FUNC_1(VAR_6->lpm, VAR_4->private->pgid_todo_mask);
 if (!VAR_6->lpm)
  goto out_nopath;

 if (VAR_6->lpm & VAR_5->opm)
  VAR_7 = VAR_1;
 else
  VAR_7 = VAR_3;
 if (VAR_4->private->flags.mpath)
  VAR_7 |= VAR_2;
 FUNC_2(VAR_4, VAR_7);
 FUNC_0(VAR_4);
 return;

out_nopath:
 FUNC_4(VAR_4, VAR_5->vpm ? 0 : -VAR_0);
}
