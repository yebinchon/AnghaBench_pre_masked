
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {unsigned long vm_start; unsigned long vm_end; struct vm_area_struct* vm_next; } ;
struct TYPE_2__ {int mm; } ;


 unsigned long VAR_0 ;
 TYPE_1__* VAR_1 ;
 struct vm_area_struct* FUNC_0 (int ,unsigned long) ;

__attribute__((used)) static unsigned long
FUNC_1(unsigned long VAR_2, unsigned long VAR_3,
           unsigned long VAR_4)
{
 struct vm_area_struct *VAR_5 = FUNC_0(VAR_1->mm, VAR_2);

 while (1) {

  if (VAR_4 - VAR_3 < VAR_2)
   return -VAR_0;
  if (!VAR_5 || VAR_2 + VAR_3 <= VAR_5->vm_start)
   return VAR_2;
  VAR_2 = VAR_5->vm_end;
  VAR_5 = VAR_5->vm_next;
 }
}
