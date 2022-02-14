
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int pam; } ;
struct TYPE_6__ {TYPE_1__ pmcw; } ;
struct subchannel {int opm; scalar_t__ vpm; TYPE_2__ schib; } ;
struct ccw_request {int lpm; } ;
struct TYPE_7__ {int parent; } ;
struct ccw_device {TYPE_4__* private; TYPE_3__ dev; } ;
struct TYPE_8__ {struct ccw_request req; } ;


 int VAR_0 ;
 int FUNC_0 (struct ccw_device*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct ccw_device*) ;
 struct subchannel* FUNC_3 (int ) ;
 int FUNC_4 (struct ccw_device*,int ) ;

__attribute__((used)) static void FUNC_5(struct ccw_device *VAR_1)
{
 struct subchannel *VAR_2 = FUNC_3(VAR_1->dev.parent);
 struct ccw_request *VAR_3 = &VAR_1->private->req;


 VAR_3->lpm = FUNC_1(VAR_3->lpm, VAR_2->schib.pmcw.pam & VAR_2->opm);
 if (!VAR_3->lpm)
  goto out_nopath;
 FUNC_2(VAR_1);
 FUNC_0(VAR_1);
 return;

out_nopath:
 FUNC_4(VAR_1, VAR_2->vpm ? 0 : -VAR_0);
}
