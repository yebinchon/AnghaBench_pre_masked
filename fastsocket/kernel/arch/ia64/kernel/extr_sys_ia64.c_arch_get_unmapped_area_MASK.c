
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {unsigned long vm_start; unsigned long vm_end; struct vm_area_struct* vm_next; } ;
struct mm_struct {unsigned long free_area_cache; } ;
struct file {int dummy; } ;
struct TYPE_2__ {struct mm_struct* mm; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (unsigned long) ;
 unsigned long FUNC_1 (unsigned long) ;
 scalar_t__ VAR_5 ;
 unsigned long VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned long VAR_9 ;
 TYPE_1__* VAR_10 ;
 struct vm_area_struct* FUNC_2 (struct mm_struct*,unsigned long) ;
 scalar_t__ FUNC_3 (struct mm_struct*,unsigned long,unsigned long) ;

unsigned long
FUNC_4 (struct file *VAR_11, unsigned long VAR_12, unsigned long VAR_13,
   unsigned long VAR_14, unsigned long VAR_15)
{
 long VAR_16 = (VAR_15 & VAR_3);
 unsigned long VAR_17, VAR_18 = VAR_4 - 1;
 struct mm_struct *VAR_19 = VAR_10->mm;
 struct vm_area_struct *VAR_20;

 if (VAR_13 > VAR_6)
  return -VAR_1;


 if (VAR_15 & VAR_2) {
  if (FUNC_3(VAR_19, VAR_12, VAR_13))
   return -VAR_0;
  return VAR_12;
 }





 if (!VAR_12)
  VAR_12 = VAR_19->free_area_cache;

 if (VAR_16 && (VAR_8 > 0xfffffffful))






  VAR_18 = VAR_7 - 1;

  full_search:
 VAR_17 = VAR_12 = (VAR_12 + VAR_18) & ~VAR_18;

 for (VAR_20 = FUNC_2(VAR_19, VAR_12); ; VAR_20 = VAR_20->vm_next) {

  if (VAR_8 - VAR_13 < VAR_12 || VAR_6 - VAR_13 < FUNC_1(VAR_12)) {
   if (VAR_17 != VAR_9) {

    VAR_12 = VAR_9;
    goto full_search;
   }
   return -VAR_1;
  }
  if (!VAR_20 || VAR_12 + VAR_13 <= VAR_20->vm_start) {

   VAR_19->free_area_cache = VAR_12 + VAR_13;
   return VAR_12;
  }
  VAR_12 = (VAR_20->vm_end + VAR_18) & ~VAR_18;
 }
}
