
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {struct vm_area_struct* vm_next; int vm_end; int vm_start; } ;
struct mm_struct {struct vm_area_struct* mmap; } ;
struct TYPE_2__ {struct mm_struct* mm; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct mm_struct*,int ,int ,int) ;

void FUNC_1(void)
{
 struct mm_struct *VAR_1 = VAR_0->mm;
 struct vm_area_struct *VAR_2 = VAR_1->mmap;

 while (VAR_2 != ((void*)0)) {
  FUNC_0(VAR_1, VAR_2->vm_start, VAR_2->vm_end, 1);
  VAR_2 = VAR_2->vm_next;
 }
}
