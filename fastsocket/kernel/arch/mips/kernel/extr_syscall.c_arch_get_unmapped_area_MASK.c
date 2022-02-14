
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {unsigned long vm_start; unsigned long vm_end; struct vm_area_struct* vm_next; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int mm; } ;


 unsigned long FUNC_0 (unsigned long,unsigned long) ;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long FUNC_1 (unsigned long) ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 TYPE_1__* VAR_7 ;
 struct vm_area_struct* FUNC_2 (int ,unsigned long) ;
 unsigned long VAR_8 ;

unsigned long FUNC_3(struct file *VAR_9, unsigned long VAR_10,
 unsigned long VAR_11, unsigned long VAR_12, unsigned long VAR_13)
{
 struct vm_area_struct * VAR_14;
 int VAR_15;
 unsigned long VAR_16;

 VAR_16 = VAR_5;

 if (VAR_11 > VAR_16)
  return -VAR_1;

 if (VAR_13 & VAR_2) {

  if (VAR_16 - VAR_11 < VAR_10)
   return -VAR_0;





  if ((VAR_13 & VAR_3) &&
      ((VAR_10 - (VAR_12 << VAR_4)) & VAR_8))
   return -VAR_0;
  return VAR_10;
 }

 VAR_15 = 0;
 if (VAR_9 || (VAR_13 & VAR_3))
  VAR_15 = 1;
 if (VAR_10) {
  if (VAR_15)
   VAR_10 = FUNC_0(VAR_10, VAR_12);
  else
   VAR_10 = FUNC_1(VAR_10);
  VAR_14 = FUNC_2(VAR_7->mm, VAR_10);
  if (VAR_16 - VAR_11 >= VAR_10 &&
      (!VAR_14 || VAR_10 + VAR_11 <= VAR_14->vm_start))
   return VAR_10;
 }
 VAR_10 = VAR_6;
 if (VAR_15)
  VAR_10 = FUNC_0(VAR_10, VAR_12);
 else
  VAR_10 = FUNC_1(VAR_10);

 for (VAR_14 = FUNC_2(VAR_7->mm, VAR_10); ; VAR_14 = VAR_14->vm_next) {

  if (VAR_16 - VAR_11 < VAR_10)
   return -VAR_1;
  if (!VAR_14 || VAR_10 + VAR_11 <= VAR_14->vm_start)
   return VAR_10;
  VAR_10 = VAR_14->vm_end;
  if (VAR_15)
   VAR_10 = FUNC_0(VAR_10, VAR_12);
 }
}
