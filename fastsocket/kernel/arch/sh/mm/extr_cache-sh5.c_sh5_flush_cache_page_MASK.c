
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_flags; } ;
struct flusher_data {unsigned long addr1; unsigned long addr2; struct vm_area_struct* vma; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (struct vm_area_struct*,unsigned long) ;

__attribute__((used)) static void FUNC_2(void *VAR_2)
{
 struct flusher_data *VAR_3 = VAR_2;
 struct vm_area_struct *VAR_4;
 unsigned long VAR_5, VAR_6;

 VAR_4 = VAR_3->vma;
 VAR_5 = VAR_3->addr1;
 VAR_6 = VAR_3->addr2;

 FUNC_0(VAR_6 << VAR_0);

 if (VAR_4->vm_flags & VAR_1)
  FUNC_1(VAR_4, VAR_5);
}
