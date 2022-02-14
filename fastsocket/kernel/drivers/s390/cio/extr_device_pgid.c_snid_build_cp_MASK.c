
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct pgid {int dummy; } ;
struct ccw_request {struct ccw1* cp; int lpm; } ;
struct ccw_device {TYPE_1__* private; } ;
struct ccw1 {int count; int flags; scalar_t__ cda; int cmd_code; } ;
typedef scalar_t__ addr_t ;
struct TYPE_2__ {int * pgid; struct ccw1* iccws; struct ccw_request req; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct ccw_device *VAR_2)
{
 struct ccw_request *VAR_3 = &VAR_2->private->req;
 struct ccw1 *VAR_4 = VAR_2->private->iccws;
 int VAR_5 = 8 - FUNC_0(VAR_3->lpm);


 VAR_4->cmd_code = VAR_0;
 VAR_4->cda = (u32) (addr_t) &VAR_2->private->pgid[VAR_5];
 VAR_4->count = sizeof(struct pgid);
 VAR_4->flags = VAR_1;
 VAR_3->cp = VAR_4;
}
