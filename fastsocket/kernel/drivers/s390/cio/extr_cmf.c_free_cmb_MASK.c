
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cmb_data {struct cmb_data* last_block; } ;
struct cmb {int dummy; } ;
struct ccw_device_private {int cmb_list; struct cmb_data* cmb; } ;
struct ccw_device {int ccwlock; struct ccw_device_private* private; } ;
typedef int ssize_t ;
struct TYPE_2__ {int num_channels; int lock; int * mem; int list; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (unsigned long,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct cmb_data*) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static void FUNC_10(struct ccw_device *VAR_1)
{
 struct ccw_device_private *VAR_2;
 struct cmb_data *VAR_3;

 FUNC_6(&VAR_0.lock);
 FUNC_7(VAR_1->ccwlock);

 VAR_2 = VAR_1->private;

 if (FUNC_5(&VAR_2->cmb_list)) {

  goto out;
 }

 VAR_3 = VAR_2->cmb;
 VAR_2->cmb = ((void*)0);
 if (VAR_3)
  FUNC_3(VAR_3->last_block);
 FUNC_3(VAR_3);
 FUNC_4(&VAR_2->cmb_list);

 if (FUNC_5(&VAR_0.list)) {
  ssize_t VAR_4;
  VAR_4 = sizeof(struct cmb) * VAR_0.num_channels;
  FUNC_0(((void*)0), 0);
  FUNC_1((unsigned long)VAR_0.mem, FUNC_2(VAR_4));
  VAR_0.mem = ((void*)0);
 }
out:
 FUNC_9(VAR_1->ccwlock);
 FUNC_8(&VAR_0.lock);
}
