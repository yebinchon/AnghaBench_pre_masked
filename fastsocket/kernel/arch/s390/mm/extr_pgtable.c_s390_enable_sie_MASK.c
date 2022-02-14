
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {struct mm_struct* active_mm; struct mm_struct* mm; } ;
struct TYPE_2__ {int alloc_pgste; scalar_t__ has_pgste; } ;
struct mm_struct {int ioctx_list; int mm_users; TYPE_1__ context; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;
 struct task_struct* VAR_3 ;
 struct mm_struct* FUNC_2 (struct task_struct*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct mm_struct*) ;
 int FUNC_5 (struct mm_struct*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (struct task_struct*) ;
 int FUNC_10 (struct task_struct*) ;
 int FUNC_11 (struct mm_struct*,struct task_struct*) ;
 scalar_t__ VAR_4 ;

int FUNC_12(void)
{
 struct task_struct *VAR_5 = VAR_3;
 struct mm_struct *VAR_6, *VAR_7;


 if (VAR_4 == VAR_2)
  return -VAR_0;


 if (VAR_5->mm->context.has_pgste)
  return 0;


 FUNC_9(VAR_5);
 if (!VAR_5->mm || FUNC_0(&VAR_5->mm->mm_users) > 1 ||



     VAR_5->mm != VAR_5->active_mm) {
  FUNC_10(VAR_5);
  return -VAR_0;
 }
 FUNC_10(VAR_5);


 VAR_5->mm->context.alloc_pgste = 1;
 VAR_6 = FUNC_2(VAR_5);
 VAR_5->mm->context.alloc_pgste = 0;
 if (!VAR_6)
  return -VAR_1;


 FUNC_9(VAR_5);
 if (!VAR_5->mm || FUNC_0(&VAR_5->mm->mm_users) > 1 ||



     VAR_5->mm != VAR_5->active_mm) {
  FUNC_5(VAR_6);
  FUNC_10(VAR_5);
  return -VAR_0;
 }


 VAR_7 = VAR_5->mm;
 VAR_5->mm = VAR_5->active_mm = VAR_6;
 FUNC_6();
 FUNC_11(VAR_6, VAR_5);
 FUNC_1(FUNC_8(), FUNC_4(VAR_6));
 FUNC_7();
 FUNC_10(VAR_5);
 FUNC_5(VAR_7);
 return 0;
}
