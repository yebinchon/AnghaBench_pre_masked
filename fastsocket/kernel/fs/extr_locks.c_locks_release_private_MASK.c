
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct file_lock {TYPE_2__* fl_lmops; TYPE_1__* fl_ops; } ;
struct TYPE_4__ {int (* fl_release_private ) (struct file_lock*) ;} ;
struct TYPE_3__ {int (* fl_release_private ) (struct file_lock*) ;} ;


 int FUNC_0 (struct file_lock*) ;
 int FUNC_1 (struct file_lock*) ;

void FUNC_2(struct file_lock *VAR_0)
{
 if (VAR_0->fl_ops) {
  if (VAR_0->fl_ops->fl_release_private)
   VAR_0->fl_ops->fl_release_private(VAR_0);
  VAR_0->fl_ops = ((void*)0);
 }
 if (VAR_0->fl_lmops) {
  if (VAR_0->fl_lmops->fl_release_private)
   VAR_0->fl_lmops->fl_release_private(VAR_0);
  VAR_0->fl_lmops = ((void*)0);
 }

}
