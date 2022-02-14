
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {unsigned long vm_start; } ;
struct mm_struct {scalar_t__ get_unmapped_area; } ;
struct file {int dummy; } ;
struct TYPE_2__ {struct mm_struct* mm; } ;


 unsigned long FUNC_0 (unsigned long,int ) ;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 TYPE_1__* VAR_9 ;
 struct vm_area_struct* FUNC_1 (struct mm_struct*,unsigned long) ;
 unsigned long FUNC_2 (struct file*,unsigned long,unsigned long,unsigned long,unsigned long) ;
 unsigned long FUNC_3 (struct file*,unsigned long,unsigned long,unsigned long,unsigned long) ;
 scalar_t__ FUNC_4 (struct file*,unsigned long,unsigned long) ;
 scalar_t__ FUNC_5 (int ) ;

unsigned long
FUNC_6(struct file *VAR_10, unsigned long VAR_11,
  unsigned long VAR_12, unsigned long VAR_13, unsigned long VAR_14)
{
 struct mm_struct *VAR_15 = VAR_9->mm;
 struct vm_area_struct *VAR_16;
 unsigned long VAR_17 = VAR_6;

 if (FUNC_5(VAR_7))
  VAR_17 = VAR_5;

 if (VAR_12 & ~VAR_2)
  return -VAR_0;
 if (VAR_12 > VAR_17)
  return -VAR_1;

 if (VAR_14 & VAR_4) {
  if (FUNC_4(VAR_10, VAR_11, VAR_12))
   return -VAR_0;
  return VAR_11;
 }

 if (VAR_11) {
  VAR_11 = FUNC_0(VAR_11, VAR_3);
  VAR_16 = FUNC_1(VAR_15, VAR_11);
  if (VAR_17 - VAR_12 >= VAR_11 &&
      (!VAR_16 || VAR_11 + VAR_12 <= VAR_16->vm_start))
   return VAR_11;
 }
 if (VAR_15->get_unmapped_area == VAR_8)
  return FUNC_2(VAR_10, VAR_11, VAR_12,
    VAR_13, VAR_14);
 else
  return FUNC_3(VAR_10, VAR_11, VAR_12,
    VAR_13, VAR_14);
}
