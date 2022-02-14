
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {unsigned long vm_start; unsigned long vm_end; struct vm_area_struct* vm_next; } ;
struct mm_struct {unsigned long cached_hole_size; unsigned long free_area_cache; } ;
struct file {int dummy; } ;
struct TYPE_2__ {struct mm_struct* mm; } ;


 unsigned long FUNC_0 (unsigned long,unsigned long) ;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long FUNC_1 (unsigned long) ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 TYPE_1__* VAR_8 ;
 struct vm_area_struct* FUNC_2 (struct mm_struct*,unsigned long) ;
 unsigned int FUNC_3 () ;
 unsigned int FUNC_4 () ;

unsigned long
FUNC_5(struct file *VAR_9, unsigned long VAR_10,
  unsigned long VAR_11, unsigned long VAR_12, unsigned long VAR_13)
{
 struct mm_struct *VAR_14 = VAR_8->mm;
 struct vm_area_struct *VAR_15;
 unsigned long VAR_16;
 if (VAR_13 & VAR_2) {
  if (0 && VAR_13 & VAR_3 &&
      (VAR_10 - (VAR_12 << VAR_4)) & (VAR_5 - 1))
   return -VAR_0;
  return VAR_10;
 }

 if (VAR_11 > VAR_6)
  return -VAR_1;

 if (VAR_10) {
  if (0)
   VAR_10 = FUNC_0(VAR_10, VAR_12);
  else
   VAR_10 = FUNC_1(VAR_10);

  VAR_15 = FUNC_2(VAR_14, VAR_10);
  if (VAR_6 - VAR_11 >= VAR_10 &&
      (!VAR_15 || VAR_10 + VAR_11 <= VAR_15->vm_start))
   return VAR_10;
 }
 if (VAR_11 > VAR_14->cached_hole_size) {
         VAR_16 = VAR_10 = VAR_14->free_area_cache;
 } else {
         VAR_16 = VAR_10 = VAR_7;
         VAR_14->cached_hole_size = 0;
 }

full_search:
 if (0)
  VAR_10 = FUNC_0(VAR_10, VAR_12);
 else
  VAR_10 = FUNC_1(VAR_10);

 for (VAR_15 = FUNC_2(VAR_14, VAR_10); ; VAR_15 = VAR_15->vm_next) {

  if (VAR_6 - VAR_11 < VAR_10) {




   if (VAR_16 != VAR_7) {
    VAR_16 = VAR_10 = VAR_7;
    VAR_14->cached_hole_size = 0;
    goto full_search;
   }
   return -VAR_1;
  }
  if (!VAR_15 || VAR_10 + VAR_11 <= VAR_15->vm_start) {



   VAR_14->free_area_cache = VAR_10 + VAR_11;
   return VAR_10;
  }
  if (VAR_10 + VAR_14->cached_hole_size < VAR_15->vm_start)
          VAR_14->cached_hole_size = VAR_15->vm_start - VAR_10;
  VAR_10 = VAR_15->vm_end;
  if (0)
   VAR_10 = FUNC_0(VAR_10, VAR_12);
 }
}
