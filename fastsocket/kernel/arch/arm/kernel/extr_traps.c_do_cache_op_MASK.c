
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {unsigned long vm_start; unsigned long vm_end; } ;
struct mm_struct {int mmap_sem; } ;
struct TYPE_2__ {struct mm_struct* active_mm; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int *) ;
 struct vm_area_struct* FUNC_1 (struct mm_struct*,unsigned long) ;
 int FUNC_2 (struct vm_area_struct*,unsigned long,unsigned long) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static inline void
FUNC_4(unsigned long VAR_1, unsigned long VAR_2, int VAR_3)
{
 struct mm_struct *VAR_4 = VAR_0->active_mm;
 struct vm_area_struct *VAR_5;

 if (VAR_2 < VAR_1 || VAR_3)
  return;

 FUNC_0(&VAR_4->mmap_sem);
 VAR_5 = FUNC_1(VAR_4, VAR_1);
 if (VAR_5 && VAR_5->vm_start < VAR_2) {
  if (VAR_1 < VAR_5->vm_start)
   VAR_1 = VAR_5->vm_start;
  if (VAR_2 > VAR_5->vm_end)
   VAR_2 = VAR_5->vm_end;

  FUNC_2(VAR_5, VAR_1, VAR_2);
 }
 FUNC_3(&VAR_4->mmap_sem);
}
