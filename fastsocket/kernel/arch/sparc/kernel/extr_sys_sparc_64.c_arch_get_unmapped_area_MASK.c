
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
 unsigned long VAR_8 ;
 int VAR_9 ;
 unsigned long VAR_10 ;
 unsigned long VAR_11 ;
 TYPE_1__* VAR_12 ;
 struct vm_area_struct* FUNC_2 (struct mm_struct*,unsigned long) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int) ;

unsigned long FUNC_6(struct file *VAR_13, unsigned long VAR_14, unsigned long VAR_15, unsigned long VAR_16, unsigned long VAR_17)
{
 struct mm_struct *VAR_18 = VAR_12->mm;
 struct vm_area_struct * VAR_19;
 unsigned long VAR_20 = VAR_7;
 unsigned long VAR_21;
 int VAR_22;

 if (VAR_17 & VAR_2) {



  if ((VAR_17 & VAR_3) &&
      ((VAR_14 - (VAR_16 << VAR_4)) & (VAR_5 - 1)))
   return -VAR_0;
  return VAR_14;
 }

 if (FUNC_4(VAR_9))
  VAR_20 = VAR_6;
 if (FUNC_5(VAR_15 > VAR_20 || VAR_15 >= VAR_11))
  return -VAR_1;

 VAR_22 = 0;
 if (VAR_13 || (VAR_17 & VAR_3))
  VAR_22 = 1;

 if (VAR_14) {
  if (VAR_22)
   VAR_14 = FUNC_0(VAR_14, VAR_16);
  else
   VAR_14 = FUNC_1(VAR_14);

  VAR_19 = FUNC_2(VAR_18, VAR_14);
  if (VAR_20 - VAR_15 >= VAR_14 &&
      (!VAR_19 || VAR_14 + VAR_15 <= VAR_19->vm_start))
   return VAR_14;
 }

 if (VAR_15 > VAR_18->cached_hole_size) {
         VAR_21 = VAR_14 = VAR_18->free_area_cache;
 } else {
         VAR_21 = VAR_14 = VAR_8;
         VAR_18->cached_hole_size = 0;
 }

 VAR_20 -= VAR_15;

full_search:
 if (VAR_22)
  VAR_14 = FUNC_0(VAR_14, VAR_16);
 else
  VAR_14 = FUNC_1(VAR_14);

 for (VAR_19 = FUNC_2(VAR_18, VAR_14); ; VAR_19 = VAR_19->vm_next) {

  if (VAR_14 < VAR_11 &&
      (VAR_14 + VAR_15) >= VAR_11) {
   VAR_14 = VAR_10;
   VAR_19 = FUNC_2(VAR_18, VAR_10);
  }
  if (FUNC_5(VAR_20 < VAR_14)) {
   if (VAR_21 != VAR_8) {
    VAR_21 = VAR_14 = VAR_8;
    VAR_18->cached_hole_size = 0;
    goto full_search;
   }
   return -VAR_1;
  }
  if (FUNC_3(!VAR_19 || VAR_14 + VAR_15 <= VAR_19->vm_start)) {



   VAR_18->free_area_cache = VAR_14 + VAR_15;
   return VAR_14;
  }
  if (VAR_14 + VAR_18->cached_hole_size < VAR_19->vm_start)
          VAR_18->cached_hole_size = VAR_19->vm_start - VAR_14;

  VAR_14 = VAR_19->vm_end;
  if (VAR_22)
   VAR_14 = FUNC_0(VAR_14, VAR_16);
 }
}
