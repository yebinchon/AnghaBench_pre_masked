
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dasd_eckd_private {struct alias_lcu* lcu; } ;
struct dasd_device {scalar_t__ private; } ;
struct alias_lcu {int lock; } ;


 int FUNC_0 (struct alias_lcu*,struct dasd_device*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

int FUNC_3(struct dasd_device *VAR_0)
{
 struct dasd_eckd_private *VAR_1;
 struct alias_lcu *VAR_2;
 unsigned long VAR_3;

 VAR_1 = (struct dasd_eckd_private *) VAR_0->private;
 VAR_2 = VAR_1->lcu;

 if (!VAR_2)
  return 0;
 FUNC_1(&VAR_2->lock, VAR_3);
 FUNC_0(VAR_2, VAR_0);
 FUNC_2(&VAR_2->lock, VAR_3);
 return 0;
}
