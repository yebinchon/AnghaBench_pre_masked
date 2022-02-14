
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {struct vm_area_struct* vm_next; int vm_end; int vm_start; } ;
struct mm_struct {struct vm_area_struct* mmap; } ;


 int FUNC_0 (struct mm_struct*,int ,int ,int ) ;

void FUNC_1(struct mm_struct *VAR_0)
{
 struct vm_area_struct *VAR_1 = VAR_0->mmap;

 while (VAR_1 != ((void*)0)) {
  FUNC_0(VAR_0, VAR_1->vm_start, VAR_1->vm_end, 0);
  VAR_1 = VAR_1->vm_next;
 }
}
