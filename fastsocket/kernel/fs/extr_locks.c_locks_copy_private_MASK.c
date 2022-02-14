
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct file_lock {TYPE_2__* fl_lmops; TYPE_1__* fl_ops; } ;
struct TYPE_4__ {int (* fl_copy_lock ) (struct file_lock*,struct file_lock*) ;} ;
struct TYPE_3__ {int (* fl_copy_lock ) (struct file_lock*,struct file_lock*) ;} ;


 int FUNC_0 (struct file_lock*,struct file_lock*) ;
 int FUNC_1 (struct file_lock*,struct file_lock*) ;

__attribute__((used)) static void FUNC_2(struct file_lock *VAR_0, struct file_lock *VAR_1)
{
 if (VAR_1->fl_ops) {
  if (VAR_1->fl_ops->fl_copy_lock)
   VAR_1->fl_ops->fl_copy_lock(VAR_0, VAR_1);
  VAR_0->fl_ops = VAR_1->fl_ops;
 }
 if (VAR_1->fl_lmops) {
  if (VAR_1->fl_lmops->fl_copy_lock)
   VAR_1->fl_lmops->fl_copy_lock(VAR_0, VAR_1);
  VAR_0->fl_lmops = VAR_1->fl_lmops;
 }
}
