
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {unsigned long vm_pgoff; unsigned long vm_start; unsigned long vm_flags; unsigned long vm_end; } ;
typedef unsigned long pgoff_t ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 scalar_t__ FUNC_0 (unsigned long) ;

__attribute__((used)) static unsigned long FUNC_1(struct vm_area_struct *VAR_4,
    struct vm_area_struct *VAR_5,
    unsigned long VAR_6, pgoff_t VAR_7)
{
 unsigned long VAR_8 = ((VAR_7 - VAR_4->vm_pgoff) << VAR_0) +
    VAR_4->vm_start;
 unsigned long VAR_9 = VAR_8 & VAR_1;
 unsigned long VAR_10 = VAR_9 + VAR_2;


 unsigned long VAR_11 = VAR_5->vm_flags & ~VAR_3;
 unsigned long VAR_12 = VAR_4->vm_flags & ~VAR_3;





 if (FUNC_0(VAR_6) != FUNC_0(VAR_8) ||
     VAR_11 != VAR_12 ||
     VAR_9 < VAR_4->vm_start || VAR_4->vm_end < VAR_10)
  return 0;

 return VAR_8;
}
