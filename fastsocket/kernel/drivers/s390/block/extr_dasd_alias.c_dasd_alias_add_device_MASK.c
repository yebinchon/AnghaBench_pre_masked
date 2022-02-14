
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dasd_eckd_private {struct alias_lcu* lcu; } ;
struct dasd_device {int cdev; int alias_list; scalar_t__ private; } ;
struct alias_lcu {int flags; int lock; int active_devices; } ;


 int VAR_0 ;
 int FUNC_0 (struct alias_lcu*,struct dasd_device*,struct dasd_device*) ;
 int FUNC_1 (struct alias_lcu*,struct dasd_device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,unsigned long) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,unsigned long) ;

int FUNC_8(struct dasd_device *VAR_1)
{
 struct dasd_eckd_private *VAR_2;
 struct alias_lcu *VAR_3;
 unsigned long VAR_4;
 int VAR_5;

 VAR_2 = (struct dasd_eckd_private *) VAR_1->private;
 VAR_3 = VAR_2->lcu;
 VAR_5 = 0;


 FUNC_5(FUNC_2(VAR_1->cdev), VAR_4);
 FUNC_4(&VAR_3->lock);
 if (!(VAR_3->flags & VAR_0)) {
  VAR_5 = FUNC_0(VAR_3, VAR_1, VAR_1);
  if (VAR_5)
   VAR_3->flags |= VAR_0;
 }
 if (VAR_3->flags & VAR_0) {
  FUNC_3(&VAR_1->alias_list, &VAR_3->active_devices);
  FUNC_1(VAR_3, VAR_1);
 }
 FUNC_6(&VAR_3->lock);
 FUNC_7(FUNC_2(VAR_1->cdev), VAR_4);
 return VAR_5;
}
