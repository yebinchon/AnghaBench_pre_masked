
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct copy_block_struct {int ret; int kref; int wait; } ;
struct ccw_device {int ccwlock; TYPE_1__* private; } ;
struct TYPE_2__ {scalar_t__ state; struct copy_block_struct* cmb_wait; int cmb; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct ccw_device*) ;
 int VAR_8 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 struct copy_block_struct* FUNC_4 (int,int ) ;
 int FUNC_5 (int ,unsigned long) ;
 int FUNC_6 (int ,unsigned long) ;
 scalar_t__ FUNC_7 (int ,int) ;

__attribute__((used)) static int FUNC_8(struct ccw_device *VAR_9)
{
 struct copy_block_struct *VAR_10;
 int VAR_11;
 unsigned long VAR_12;

 FUNC_5(VAR_9->ccwlock, VAR_12);
 if (!VAR_9->private->cmb) {
  VAR_11 = -VAR_4;
  goto out;
 }
 VAR_10 = FUNC_4(sizeof(struct copy_block_struct), VAR_7);
 if (!VAR_10) {
  VAR_11 = -VAR_5;
  goto out;
 }
 FUNC_1(&VAR_10->wait);
 FUNC_2(&VAR_10->kref);

 VAR_11 = FUNC_0(VAR_9);
 if (VAR_11 != -VAR_3)
  goto out_put;

 if (VAR_9->private->state != VAR_2) {
  VAR_11 = -VAR_3;
  goto out_put;
 }

 VAR_9->private->state = VAR_1;
 VAR_10->ret = VAR_0;
 VAR_9->private->cmb_wait = VAR_10;

 FUNC_6(VAR_9->ccwlock, VAR_12);
 if (FUNC_7(VAR_10->wait,
         VAR_10->ret != VAR_0)) {
  FUNC_5(VAR_9->ccwlock, VAR_12);
  if (VAR_10->ret == VAR_0) {
   VAR_10->ret = -VAR_6;
   if (VAR_9->private->state == VAR_1)
    VAR_9->private->state = VAR_2;
  }
  FUNC_6(VAR_9->ccwlock, VAR_12);
 }
 FUNC_5(VAR_9->ccwlock, VAR_12);
 VAR_9->private->cmb_wait = ((void*)0);
 VAR_11 = VAR_10->ret;
out_put:
 FUNC_3(&VAR_10->kref, VAR_8);
out:
 FUNC_6(VAR_9->ccwlock, VAR_12);
 return VAR_11;
}
