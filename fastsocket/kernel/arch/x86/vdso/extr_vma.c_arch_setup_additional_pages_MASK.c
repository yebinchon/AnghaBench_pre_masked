
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * vdso; } ;
struct mm_struct {int mmap_sem; TYPE_1__ context; int start_stack; } ;
struct linux_binprm {int dummy; } ;
struct TYPE_4__ {struct mm_struct* mm; } ;


 scalar_t__ FUNC_0 (unsigned long) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* VAR_5 ;
 int FUNC_1 (int *) ;
 unsigned long FUNC_2 (int *,unsigned long,int ,int ,int ) ;
 int FUNC_3 (struct mm_struct*,unsigned long,int ,int,int ) ;
 int FUNC_4 (int *) ;
 unsigned long FUNC_5 (int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

int FUNC_6(struct linux_binprm *VAR_9, int VAR_10)
{
 struct mm_struct *VAR_11 = VAR_5->mm;
 unsigned long VAR_12;
 int VAR_13;

 if (!VAR_6)
  return 0;

 FUNC_1(&VAR_11->mmap_sem);
 VAR_12 = FUNC_5(VAR_11->start_stack, VAR_8);
 VAR_12 = FUNC_2(((void*)0), VAR_12, VAR_8, 0, 0);
 if (FUNC_0(VAR_12)) {
  VAR_13 = VAR_12;
  goto up_fail;
 }

 VAR_5->mm->context.vdso = (void *)VAR_12;

 VAR_13 = FUNC_3(VAR_11, VAR_12, VAR_8,
          VAR_4|VAR_0|
          VAR_2|VAR_3|VAR_1,
          VAR_7);
 if (VAR_13) {
  VAR_5->mm->context.vdso = ((void*)0);
  goto up_fail;
 }

up_fail:
 FUNC_4(&VAR_11->mmap_sem);
 return VAR_13;
}
