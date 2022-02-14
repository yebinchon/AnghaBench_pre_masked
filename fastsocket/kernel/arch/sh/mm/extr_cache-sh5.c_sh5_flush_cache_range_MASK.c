
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_mm; } ;
struct flusher_data {unsigned long addr1; unsigned long addr2; struct vm_area_struct* vma; } ;


 int FUNC_0 (int ,unsigned long,unsigned long) ;
 int FUNC_1 (int ,unsigned long,unsigned long) ;

__attribute__((used)) static void FUNC_2(void *VAR_0)
{
 struct flusher_data *VAR_1 = VAR_0;
 struct vm_area_struct *VAR_2;
 unsigned long VAR_3, VAR_4;

 VAR_2 = VAR_1->vma;
 VAR_3 = VAR_1->addr1;
 VAR_4 = VAR_1->addr2;

 FUNC_0(VAR_2->vm_mm, VAR_3, VAR_4);
 FUNC_1(VAR_2->vm_mm, VAR_3, VAR_4);
}
