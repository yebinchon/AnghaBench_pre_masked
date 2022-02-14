
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_lock {scalar_t__ fl_end; scalar_t__ fl_start; } ;



__attribute__((used)) static inline int FUNC_0(struct file_lock *VAR_0, struct file_lock *VAR_1)
{
 return ((VAR_0->fl_end >= VAR_1->fl_start) &&
  (VAR_1->fl_end >= VAR_0->fl_start));
}
