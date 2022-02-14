
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cmb_data {struct cmb_data* last_block; } ;
struct ccw_device {TYPE_1__* private; int ccwlock; } ;
struct TYPE_4__ {int lock; int list; } ;
struct TYPE_3__ {int cmb_list; struct cmb_data* cmb; } ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct cmb_data*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(struct ccw_device *VAR_1)
{
 struct cmb_data *VAR_2;

 FUNC_5(VAR_1->ccwlock);
 VAR_2 = VAR_1->private->cmb;
 VAR_1->private->cmb = ((void*)0);
 if (VAR_2)
  FUNC_1(VAR_2->last_block);
 FUNC_1(VAR_2);
 FUNC_7(VAR_1->ccwlock);


 FUNC_4(&VAR_0.lock);
 FUNC_2(&VAR_1->private->cmb_list);
 if (FUNC_3(&VAR_0.list))
  FUNC_0(((void*)0), 0);
 FUNC_6(&VAR_0.lock);
}
