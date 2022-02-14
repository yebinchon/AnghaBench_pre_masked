
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vm_area_struct {int vm_start; int vm_flags; int vm_page_prot; void* vm_end; TYPE_2__* vm_mm; int anon_vma_chain; } ;
struct TYPE_4__ {int rbs_bot; } ;
struct TYPE_6__ {int personality; TYPE_2__* mm; TYPE_1__ thread; } ;
struct TYPE_5__ {int mmap_sem; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int) ;
 TYPE_3__* VAR_13 ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (TYPE_2__*,struct vm_area_struct*) ;
 int FUNC_5 (int ,struct vm_area_struct*) ;
 struct vm_area_struct* FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int VAR_14 ;
 int FUNC_9 (int) ;

void
FUNC_10 (void)
{
 struct vm_area_struct *VAR_15;

 FUNC_3();






 VAR_15 = FUNC_6(VAR_14, VAR_0);
 if (VAR_15) {
  FUNC_0(&VAR_15->anon_vma_chain);
  VAR_15->vm_mm = VAR_13->mm;
  VAR_15->vm_start = VAR_13->thread.rbs_bot & VAR_2;
  VAR_15->vm_end = VAR_15->vm_start + VAR_4;
  VAR_15->vm_flags = VAR_6|VAR_7|VAR_5;
  VAR_15->vm_page_prot = FUNC_9(VAR_15->vm_flags);
  FUNC_2(&VAR_13->mm->mmap_sem);
  if (FUNC_4(VAR_13->mm, VAR_15)) {
   FUNC_8(&VAR_13->mm->mmap_sem);
   FUNC_5(VAR_14, VAR_15);
   return;
  }
  FUNC_8(&VAR_13->mm->mmap_sem);
 }


 if (!(VAR_13->personality & VAR_1)) {
  VAR_15 = FUNC_6(VAR_14, VAR_0);
  if (VAR_15) {
   FUNC_0(&VAR_15->anon_vma_chain);
   VAR_15->vm_mm = VAR_13->mm;
   VAR_15->vm_end = VAR_4;
   VAR_15->vm_page_prot = FUNC_1(FUNC_7(VAR_3) | VAR_12);
   VAR_15->vm_flags = VAR_10 | VAR_9 | VAR_8 | VAR_11;
   FUNC_2(&VAR_13->mm->mmap_sem);
   if (FUNC_4(VAR_13->mm, VAR_15)) {
    FUNC_8(&VAR_13->mm->mmap_sem);
    FUNC_5(VAR_14, VAR_15);
    return;
   }
   FUNC_8(&VAR_13->mm->mmap_sem);
  }
 }
}
