
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct page {int dummy; } ;
struct TYPE_3__ {unsigned long vdso_base; } ;
struct mm_struct {int mmap_sem; TYPE_1__ context; } ;
struct linux_binprm {int dummy; } ;
struct TYPE_4__ {struct mm_struct* mm; } ;


 scalar_t__ FUNC_0 (unsigned long) ;
 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__* VAR_6 ;
 int FUNC_1 (int *) ;
 unsigned long FUNC_2 (int *,int ,unsigned long,int ,int ) ;
 int FUNC_3 (struct mm_struct*,unsigned long,unsigned long,int,struct page**) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int *) ;
 struct page** VAR_7 ;
 unsigned long VAR_8 ;
 struct page** VAR_9 ;
 unsigned long VAR_10 ;
 int VAR_11 ;

int FUNC_6(struct linux_binprm *VAR_12, int VAR_13)
{
 struct mm_struct *VAR_14 = VAR_6->mm;
 struct page **VAR_15;
 unsigned long VAR_16;
 unsigned long VAR_17;
 int VAR_18;

 if (!VAR_11)
  return 0;



 if (!VAR_13)
  return 0;
 VAR_15 = VAR_7;
 VAR_16 = VAR_8;






 if (VAR_16 == 0)
  return 0;

 VAR_6->mm->context.vdso_base = 0;






 FUNC_1(&VAR_14->mmap_sem);
 VAR_17 = FUNC_2(((void*)0), 0, VAR_16 << VAR_0, 0, 0);
 if (FUNC_0(VAR_17)) {
  VAR_18 = VAR_17;
  goto out_up;
 }






 VAR_6->mm->context.vdso_base = VAR_17;
 VAR_18 = FUNC_3(VAR_14, VAR_17, VAR_16 << VAR_0,
         VAR_5|VAR_1|
         VAR_3|VAR_4|VAR_2,
         VAR_15);
 if (VAR_18)
  VAR_6->mm->context.vdso_base = 0;
out_up:
 FUNC_5(&VAR_14->mmap_sem);
 return VAR_18;
}
