
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct set_schib_struct {int mbfc; unsigned long address; int ret; int kref; int wait; int mme; } ;
struct ccw_device {int ccwlock; TYPE_1__* private; } ;
struct TYPE_2__ {scalar_t__ state; struct set_schib_struct* cmb_wait; int cmb; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 struct set_schib_struct* FUNC_3 (int,int ) ;
 int FUNC_4 (struct ccw_device*,int ,int,unsigned long) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ,int) ;

__attribute__((used)) static int FUNC_8(struct ccw_device *VAR_9, u32 VAR_10,
    int VAR_11, unsigned long VAR_12)
{
 struct set_schib_struct *VAR_13;
 int VAR_14;

 FUNC_5(VAR_9->ccwlock);
 if (!VAR_9->private->cmb) {
  VAR_14 = -VAR_4;
  goto out;
 }
 VAR_13 = FUNC_3(sizeof(struct set_schib_struct), VAR_7);
 if (!VAR_13) {
  VAR_14 = -VAR_5;
  goto out;
 }
 FUNC_0(&VAR_13->wait);
 FUNC_1(&VAR_13->kref);
 VAR_13->mme = VAR_10;
 VAR_13->mbfc = VAR_11;
 VAR_13->address = VAR_12;

 VAR_14 = FUNC_4(VAR_9, VAR_10, VAR_11, VAR_12);
 if (VAR_14 != -VAR_3)
  goto out_put;

 if (VAR_9->private->state != VAR_2) {

  VAR_14 = -VAR_3;
  goto out_put;
 }

 VAR_9->private->state = VAR_1;
 VAR_13->ret = VAR_0;
 VAR_9->private->cmb_wait = VAR_13;

 FUNC_6(VAR_9->ccwlock);
 if (FUNC_7(VAR_13->wait,
         VAR_13->ret != VAR_0)) {
  FUNC_5(VAR_9->ccwlock);
  if (VAR_13->ret == VAR_0) {
   VAR_13->ret = -VAR_6;
   if (VAR_9->private->state == VAR_1)
    VAR_9->private->state = VAR_2;
  }
  FUNC_6(VAR_9->ccwlock);
 }
 FUNC_5(VAR_9->ccwlock);
 VAR_9->private->cmb_wait = ((void*)0);
 VAR_14 = VAR_13->ret;
out_put:
 FUNC_2(&VAR_13->kref, VAR_8);
out:
 FUNC_6(VAR_9->ccwlock);
 return VAR_14;
}
