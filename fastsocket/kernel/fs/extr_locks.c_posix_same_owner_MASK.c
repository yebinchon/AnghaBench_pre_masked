
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file_lock {scalar_t__ fl_owner; TYPE_1__* fl_lmops; } ;
struct TYPE_2__ {scalar_t__ (* fl_compare_owner ) (struct file_lock*,struct file_lock*) ;} ;


 scalar_t__ FUNC_0 (struct file_lock*,struct file_lock*) ;

__attribute__((used)) static int FUNC_1(struct file_lock *VAR_0, struct file_lock *VAR_1)
{
 if (VAR_0->fl_lmops && VAR_0->fl_lmops->fl_compare_owner)
  return VAR_1->fl_lmops == VAR_0->fl_lmops &&
   VAR_0->fl_lmops->fl_compare_owner(VAR_0, VAR_1);
 return VAR_0->fl_owner == VAR_1->fl_owner;
}
