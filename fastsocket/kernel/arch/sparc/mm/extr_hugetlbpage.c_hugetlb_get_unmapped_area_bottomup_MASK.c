
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {unsigned long vm_start; unsigned long vm_end; struct vm_area_struct* vm_next; } ;
struct mm_struct {unsigned long cached_hole_size; unsigned long free_area_cache; } ;
struct file {int dummy; } ;
struct TYPE_2__ {struct mm_struct* mm; } ;


 unsigned long FUNC_0 (unsigned long,int ) ;
 unsigned long VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 TYPE_1__* VAR_8 ;
 struct vm_area_struct* FUNC_1 (struct mm_struct*,unsigned long) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static unsigned long FUNC_5(struct file *VAR_9,
       unsigned long VAR_10,
       unsigned long VAR_11,
       unsigned long VAR_12,
       unsigned long VAR_13)
{
 struct mm_struct *VAR_14 = VAR_8->mm;
 struct vm_area_struct * VAR_15;
 unsigned long VAR_16 = VAR_3;
 unsigned long VAR_17;

 if (FUNC_3(VAR_5))
  VAR_16 = VAR_2;
 if (FUNC_4(VAR_11 >= VAR_7))
  return -VAR_0;

 if (VAR_11 > VAR_14->cached_hole_size) {
         VAR_17 = VAR_10 = VAR_14->free_area_cache;
 } else {
         VAR_17 = VAR_10 = VAR_4;
         VAR_14->cached_hole_size = 0;
 }

 VAR_16 -= VAR_11;

full_search:
 VAR_10 = FUNC_0(VAR_10, VAR_1);

 for (VAR_15 = FUNC_1(VAR_14, VAR_10); ; VAR_15 = VAR_15->vm_next) {

  if (VAR_10 < VAR_7 &&
      (VAR_10 + VAR_11) >= VAR_7) {
   VAR_10 = VAR_6;
   VAR_15 = FUNC_1(VAR_14, VAR_6);
  }
  if (FUNC_4(VAR_16 < VAR_10)) {
   if (VAR_17 != VAR_4) {
    VAR_17 = VAR_10 = VAR_4;
    VAR_14->cached_hole_size = 0;
    goto full_search;
   }
   return -VAR_0;
  }
  if (FUNC_2(!VAR_15 || VAR_10 + VAR_11 <= VAR_15->vm_start)) {



   VAR_14->free_area_cache = VAR_10 + VAR_11;
   return VAR_10;
  }
  if (VAR_10 + VAR_14->cached_hole_size < VAR_15->vm_start)
          VAR_14->cached_hole_size = VAR_15->vm_start - VAR_10;

  VAR_10 = FUNC_0(VAR_15->vm_end, VAR_1);
 }
}
