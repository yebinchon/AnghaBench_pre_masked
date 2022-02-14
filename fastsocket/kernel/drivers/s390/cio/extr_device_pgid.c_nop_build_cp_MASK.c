
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ccw_request {struct ccw1* cp; } ;
struct ccw_device {TYPE_1__* private; } ;
struct ccw1 {int flags; scalar_t__ count; scalar_t__ cda; int cmd_code; } ;
struct TYPE_2__ {struct ccw1* iccws; struct ccw_request req; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct ccw_device *VAR_2)
{
 struct ccw_request *VAR_3 = &VAR_2->private->req;
 struct ccw1 *VAR_4 = VAR_2->private->iccws;

 VAR_4->cmd_code = VAR_0;
 VAR_4->cda = 0;
 VAR_4->count = 0;
 VAR_4->flags = VAR_1;
 VAR_3->cp = VAR_4;
}
