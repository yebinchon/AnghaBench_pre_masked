
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_lock {scalar_t__ fl_type; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_0(struct file_lock *VAR_1, struct file_lock *VAR_2)
{
 if (VAR_2->fl_type == VAR_0)
  return 1;
 if (VAR_1->fl_type == VAR_0)
  return 1;
 return 0;
}
