
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {unsigned long vm_start; unsigned long vm_end; struct vm_area_struct* vm_next; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int mm; } ;


 unsigned long FUNC_0 (unsigned long,int) ;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 scalar_t__ FUNC_1 (unsigned long) ;
 unsigned long FUNC_2 (unsigned long) ;
 scalar_t__ VAR_6 ;
 unsigned long VAR_7 ;
 TYPE_1__* VAR_8 ;
 struct vm_area_struct* FUNC_3 (int ,unsigned long) ;
 scalar_t__ FUNC_4 (struct file*,unsigned long,unsigned long) ;

unsigned long FUNC_5(struct file *VAR_9, unsigned long VAR_10, unsigned long VAR_11,
  unsigned long VAR_12, unsigned long VAR_13)
{
 struct vm_area_struct *VAR_14;

 if (VAR_11 > VAR_7)
  return -VAR_1;
 if (VAR_11 & ~VAR_2)
  return -VAR_0;


 if (VAR_13 & VAR_5) {
  if (FUNC_4(VAR_9, VAR_10, VAR_11))
   return -VAR_0;
  return VAR_10;
 }


 if ((FUNC_1(VAR_10) != VAR_6) || (VAR_10 & (VAR_4 - 1)))
  VAR_10 = VAR_3;
 else
  VAR_10 = FUNC_0(VAR_10, VAR_4);
 for (VAR_14 = FUNC_3(VAR_8->mm, VAR_10); ; VAR_14 = VAR_14->vm_next) {

  if (FUNC_2(VAR_10) + VAR_11 > VAR_7)
   return -VAR_1;
  if (!VAR_14 || (VAR_10 + VAR_11) <= VAR_14->vm_start)
   return VAR_10;
  VAR_10 = FUNC_0(VAR_14->vm_end, VAR_4);
 }
}
