
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int pam; } ;
struct TYPE_7__ {TYPE_4__ pmcw; } ;
struct subchannel {TYPE_3__ schib; } ;
struct ccw_request {int lpm; } ;
struct TYPE_5__ {int parent; } ;
struct ccw_device {TYPE_2__* private; TYPE_1__ dev; } ;
struct TYPE_6__ {scalar_t__ pgid_valid_mask; struct ccw_request req; } ;


 int VAR_0 ;
 int FUNC_0 (struct ccw_device*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct ccw_device*) ;
 int FUNC_3 (struct ccw_device*,int ) ;
 struct subchannel* FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct ccw_device *VAR_1)
{
 struct subchannel *VAR_2 = FUNC_4(VAR_1->dev.parent);
 struct ccw_request *VAR_3 = &VAR_1->private->req;


 VAR_3->lpm = FUNC_1(VAR_3->lpm, VAR_2->schib.pmcw.pam);
 if (!VAR_3->lpm)
  goto out_nopath;
 FUNC_2(VAR_1);
 FUNC_0(VAR_1);
 return;

out_nopath:
 FUNC_3(VAR_1, VAR_1->private->pgid_valid_mask ? 0 : -VAR_0);
}
