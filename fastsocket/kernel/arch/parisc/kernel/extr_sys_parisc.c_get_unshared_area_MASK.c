
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {unsigned long vm_start; unsigned long vm_end; struct vm_area_struct* vm_next; } ;
struct TYPE_2__ {int mm; } ;


 unsigned long VAR_0 ;
 unsigned long FUNC_0 (unsigned long) ;
 unsigned long VAR_1 ;
 TYPE_1__* VAR_2 ;
 struct vm_area_struct* FUNC_1 (int ,unsigned long) ;

__attribute__((used)) static unsigned long FUNC_2(unsigned long VAR_3, unsigned long VAR_4)
{
 struct vm_area_struct *VAR_5;

 VAR_3 = FUNC_0(VAR_3);

 for (VAR_5 = FUNC_1(VAR_2->mm, VAR_3); ; VAR_5 = VAR_5->vm_next) {

  if (VAR_1 - VAR_4 < VAR_3)
   return -VAR_0;
  if (!VAR_5 || VAR_3 + VAR_4 <= VAR_5->vm_start)
   return VAR_3;
  VAR_3 = VAR_5->vm_end;
 }
}
