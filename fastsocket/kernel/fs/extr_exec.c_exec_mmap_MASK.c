
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {struct mm_struct* mm; TYPE_1__* signal; struct mm_struct* active_mm; } ;
struct mm_struct {int mmap_sem; int oom_disable_count; int core_state; } ;
struct TYPE_2__ {scalar_t__ oom_score_adj; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct mm_struct*,struct mm_struct*) ;
 int FUNC_2 (struct mm_struct*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct task_struct* VAR_2 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct task_struct*,struct mm_struct*) ;
 int FUNC_7 (struct mm_struct*) ;
 int FUNC_8 (struct mm_struct*) ;
 int FUNC_9 (struct mm_struct*) ;
 int FUNC_10 (struct task_struct*) ;
 int FUNC_11 (struct task_struct*) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static int FUNC_14(struct mm_struct *VAR_3)
{
 struct task_struct *VAR_4;
 struct mm_struct * VAR_5, *VAR_6;


 VAR_4 = VAR_2;
 VAR_5 = VAR_2->mm;
 FUNC_6(VAR_4, VAR_5);

 if (VAR_5) {






  FUNC_5(&VAR_5->mmap_sem);
  if (FUNC_12(VAR_5->core_state)) {
   FUNC_13(&VAR_5->mmap_sem);
   return -VAR_0;
  }
 }
 FUNC_10(VAR_4);
 VAR_6 = VAR_4->active_mm;
 VAR_4->mm = VAR_3;
 VAR_4->active_mm = VAR_3;
 FUNC_1(VAR_6, VAR_3);
 if (VAR_5 && VAR_4->signal->oom_score_adj == VAR_1) {
  FUNC_3(&VAR_5->oom_disable_count);
  FUNC_4(&VAR_4->mm->oom_disable_count);
 }
 FUNC_11(VAR_4);
 FUNC_2(VAR_3);
 if (VAR_5) {
  FUNC_13(&VAR_5->mmap_sem);
  FUNC_0(VAR_6 != VAR_5);
  FUNC_7(VAR_5);
  FUNC_9(VAR_5);
  return 0;
 }
 FUNC_8(VAR_6);
 return 0;
}
