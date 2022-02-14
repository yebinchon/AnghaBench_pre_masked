
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int pam; } ;
struct TYPE_8__ {TYPE_2__ pmcw; } ;
struct subchannel {TYPE_3__ schib; int lpm; scalar_t__ vpm; } ;
struct ccw_request {int lpm; int singlepath; int callback; int filter; int maxretries; int timeout; } ;
struct TYPE_6__ {int parent; } ;
struct ccw_device {TYPE_5__* private; TYPE_1__ dev; } ;
struct ccw_dev_id {int dummy; } ;
struct TYPE_9__ {scalar_t__ pgroup; } ;
struct TYPE_10__ {TYPE_4__ flags; struct ccw_dev_id dev_id; struct ccw_request req; } ;


 int FUNC_0 (int,struct ccw_dev_id*,int) ;
 int FUNC_1 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct ccw_request*,int ,int) ;
 int VAR_2 ;
 int FUNC_3 (struct ccw_device*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (struct ccw_device*) ;
 struct subchannel* FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct ccw_device *VAR_5)
{
 struct subchannel *VAR_6 = FUNC_5(VAR_5->dev.parent);
 struct ccw_request *VAR_7 = &VAR_5->private->req;
 struct ccw_dev_id *VAR_8 = &VAR_5->private->dev_id;

 VAR_6->vpm = 0;
 VAR_6->lpm = VAR_6->schib.pmcw.pam;

 FUNC_2(VAR_7, 0, sizeof(*VAR_7));
 VAR_7->timeout = VAR_1;
 VAR_7->maxretries = VAR_0;
 VAR_7->lpm = 0x80;
 VAR_7->singlepath = 1;
 if (VAR_5->private->flags.pgroup) {
  FUNC_1(4, "snid");
  FUNC_0(4, VAR_8, sizeof(*VAR_8));
  VAR_7->callback = VAR_4;
  FUNC_4(VAR_5);
 } else {
  FUNC_1(4, "nop");
  FUNC_0(4, VAR_8, sizeof(*VAR_8));
  VAR_7->filter = VAR_3;
  VAR_7->callback = VAR_2;
  FUNC_3(VAR_5);
 }
}
