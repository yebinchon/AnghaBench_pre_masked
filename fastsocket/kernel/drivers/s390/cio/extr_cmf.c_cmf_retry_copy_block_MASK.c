
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct copy_block_struct {int kref; int wait; int ret; } ;
struct ccw_device {TYPE_1__* private; } ;
struct TYPE_2__ {struct copy_block_struct* cmb_wait; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct ccw_device*) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct ccw_device *VAR_1)
{
 struct copy_block_struct *VAR_2;

 VAR_2 = VAR_1->private->cmb_wait;
 if (!VAR_2) {
  FUNC_0(1);
  return;
 }
 FUNC_2(&VAR_2->kref);
 VAR_2->ret = FUNC_1(VAR_1);
 FUNC_4(&VAR_2->wait);
 FUNC_3(&VAR_2->kref, VAR_0);
}
