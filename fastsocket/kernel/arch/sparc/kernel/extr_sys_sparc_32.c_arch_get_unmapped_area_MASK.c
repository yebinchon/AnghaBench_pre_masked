
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {unsigned long vm_start; unsigned long vm_end; struct vm_area_struct* vm_next; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int mm; } ;


 scalar_t__ VAR_0 ;
 unsigned long FUNC_0 (unsigned long) ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long FUNC_1 (unsigned long) ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 int VAR_8 ;
 unsigned long VAR_9 ;
 unsigned long VAR_10 ;
 TYPE_1__* VAR_11 ;
 struct vm_area_struct* FUNC_2 (int ,unsigned long) ;

unsigned long FUNC_3(struct file *VAR_12, unsigned long VAR_13, unsigned long VAR_14, unsigned long VAR_15, unsigned long VAR_16)
{
 struct vm_area_struct * VAR_17;

 if (VAR_16 & VAR_3) {



  if ((VAR_16 & VAR_4) &&
      ((VAR_13 - (VAR_15 << VAR_6)) & (VAR_8 - 1)))
   return -VAR_1;
  return VAR_13;
 }


 if (VAR_14 > VAR_9 - VAR_7)
  return -VAR_2;
 if (VAR_0 && VAR_14 > 0x20000000)
  return -VAR_2;
 if (!VAR_13)
  VAR_13 = VAR_10;

 if (VAR_16 & VAR_4)
  VAR_13 = FUNC_0(VAR_13);
 else
  VAR_13 = FUNC_1(VAR_13);

 for (VAR_17 = FUNC_2(VAR_11->mm, VAR_13); ; VAR_17 = VAR_17->vm_next) {

  if (VAR_0 && VAR_13 < 0xe0000000 && 0x20000000 - VAR_14 < VAR_13) {
   VAR_13 = VAR_5;
   VAR_17 = FUNC_2(VAR_11->mm, VAR_5);
  }
  if (VAR_9 - VAR_7 - VAR_14 < VAR_13)
   return -VAR_2;
  if (!VAR_17 || VAR_13 + VAR_14 <= VAR_17->vm_start)
   return VAR_13;
  VAR_13 = VAR_17->vm_end;
  if (VAR_16 & VAR_4)
   VAR_13 = FUNC_0(VAR_13);
 }
}
