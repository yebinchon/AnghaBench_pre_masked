
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_flags; unsigned long vm_start; unsigned long vm_end; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(struct vm_area_struct *VAR_3, unsigned long VAR_4)
{
 unsigned long VAR_5 = VAR_4 & VAR_0;
 unsigned long VAR_6 = VAR_5 + VAR_1;




 if (VAR_3->vm_flags & VAR_2 &&
     VAR_3->vm_start <= VAR_5 && VAR_6 <= VAR_3->vm_end)
  return 1;
 return 0;
}
