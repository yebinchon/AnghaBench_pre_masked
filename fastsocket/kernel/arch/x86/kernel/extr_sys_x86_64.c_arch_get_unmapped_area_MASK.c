
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {unsigned long vm_start; unsigned long vm_end; struct vm_area_struct* vm_next; } ;
struct mm_struct {unsigned long cached_hole_size; unsigned long free_area_cache; } ;
struct file {int dummy; } ;
struct TYPE_2__ {struct mm_struct* mm; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long FUNC_0 (unsigned long) ;
 int VAR_3 ;
 unsigned long FUNC_1 (unsigned long,struct file*,int ) ;
 TYPE_1__* VAR_4 ;
 int FUNC_2 (unsigned long,unsigned long*,unsigned long*) ;
 struct vm_area_struct* FUNC_3 (struct mm_struct*,unsigned long) ;
 scalar_t__ FUNC_4 (int) ;
 unsigned long VAR_5 ;
 unsigned int VAR_6 ;
 scalar_t__ FUNC_5 (int ) ;

unsigned long
FUNC_6(struct file *VAR_7, unsigned long VAR_8,
  unsigned long VAR_9, unsigned long VAR_10, unsigned long VAR_11)
{
 struct mm_struct *VAR_12 = VAR_4->mm;
 struct vm_area_struct *VAR_13;
 unsigned long VAR_14;
 unsigned long VAR_15, VAR_16;
 unsigned int VAR_17 = VAR_6;

 if (VAR_11 & VAR_2)
  return VAR_8;

 FUNC_2(VAR_11, &VAR_15, &VAR_16);

 if (VAR_9 > VAR_16)
  return -VAR_0;

 if (VAR_8) {
  VAR_8 = FUNC_0(VAR_8);
  VAR_13 = FUNC_3(VAR_12, VAR_8);
  if (VAR_16 - VAR_9 >= VAR_8 &&
      (!VAR_13 || VAR_8 + VAR_9 <= VAR_13->vm_start) &&
      (VAR_8 >= VAR_5))
   return VAR_8;
 }
 if (((VAR_11 & VAR_1) || FUNC_5(VAR_3))) {
  if (!VAR_17 && VAR_9 <= VAR_12->cached_hole_size)
   VAR_12->cached_hole_size = 0;
  VAR_12->free_area_cache = VAR_15;
 }
 VAR_8 = VAR_12->free_area_cache;
 if (VAR_8 < VAR_15)
  VAR_8 = VAR_15;
 VAR_14 = VAR_8;

full_search:

 VAR_8 = FUNC_1(VAR_8, VAR_7, 0);

 for (VAR_13 = FUNC_3(VAR_12, VAR_8); ; VAR_13 = VAR_13->vm_next) {

  if (VAR_16 - VAR_9 < VAR_8) {




   if (VAR_14 != VAR_15) {
    VAR_14 = VAR_8 = VAR_15;
    if (FUNC_4(!VAR_17))
     VAR_12->cached_hole_size = 0;
    goto full_search;
   }
   return -VAR_0;
  }
  if (!VAR_13 || VAR_8 + VAR_9 <= VAR_13->vm_start) {



   VAR_12->free_area_cache = VAR_8 + VAR_9;
   return VAR_8;
  }
  if (!VAR_17 &&
    VAR_8 + VAR_12->cached_hole_size < VAR_13->vm_start)
   VAR_12->cached_hole_size = VAR_13->vm_start - VAR_8;

  VAR_8 = VAR_13->vm_end;
  VAR_8 = FUNC_1(VAR_8, VAR_7, 0);
 }
}
