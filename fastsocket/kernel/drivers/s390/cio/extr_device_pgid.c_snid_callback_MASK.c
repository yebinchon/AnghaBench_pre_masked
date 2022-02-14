
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ccw_request {int lpm; } ;
struct ccw_device {TYPE_1__* private; } ;
struct TYPE_2__ {int pgid_valid_mask; struct ccw_request req; } ;


 int VAR_0 ;
 int FUNC_0 (struct ccw_device*) ;
 int FUNC_1 (struct ccw_device*,int) ;

__attribute__((used)) static void FUNC_2(struct ccw_device *VAR_1, void *VAR_2, int VAR_3)
{
 struct ccw_request *VAR_4 = &VAR_1->private->req;

 if (VAR_3 == 0)
  VAR_1->private->pgid_valid_mask |= VAR_4->lpm;
 else if (VAR_3 != -VAR_0)
  goto err;
 VAR_4->lpm >>= 1;
 FUNC_0(VAR_1);
 return;

err:
 FUNC_1(VAR_1, VAR_3);
}
