
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {int vm_flags; unsigned long vm_end; struct vm_area_struct* vm_next; } ;
struct TYPE_2__ {unsigned long exec_limit; } ;
struct mm_struct {struct vm_area_struct* mmap; TYPE_1__ context; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mm_struct*,unsigned long) ;

void FUNC_1(struct mm_struct *VAR_2, unsigned long VAR_3)
{
 struct vm_area_struct *VAR_4;
 unsigned long VAR_5 = VAR_0;

 if (VAR_3 == VAR_2->context.exec_limit) {
  for (VAR_4 = VAR_2->mmap; VAR_4; VAR_4 = VAR_4->vm_next)
   if ((VAR_4->vm_flags & VAR_1) && (VAR_4->vm_end > VAR_5))
    VAR_5 = VAR_4->vm_end;
  FUNC_0(VAR_2, VAR_5);
 }
}
