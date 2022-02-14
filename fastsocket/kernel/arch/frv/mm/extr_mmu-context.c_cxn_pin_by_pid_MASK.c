
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {struct mm_struct* mm; } ;
struct mm_struct {int context; int mm_users; } ;
typedef scalar_t__ pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 struct task_struct* FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct mm_struct*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct task_struct*) ;
 int FUNC_9 (struct task_struct*) ;
 int VAR_4 ;

int FUNC_10(pid_t VAR_5)
{
 struct task_struct *VAR_6;
 struct mm_struct *VAR_7 = ((void*)0);
 int VAR_8;


 if (VAR_5 == 0) {
  VAR_3 = -1;
  return 0;
 }

 VAR_8 = -VAR_1;


 FUNC_4(&VAR_4);
 VAR_6 = FUNC_1(VAR_5);
 if (VAR_6) {
  VAR_8 = -VAR_0;

  FUNC_8(VAR_6);
  if (VAR_6->mm) {
   VAR_7 = VAR_6->mm;
   FUNC_0(&VAR_7->mm_users);
   VAR_8 = 0;
  }
  FUNC_9(VAR_6);
 }
 FUNC_5(&VAR_4);

 if (VAR_8 < 0)
  return VAR_8;


 FUNC_6(&VAR_2);
 VAR_3 = FUNC_2(&VAR_7->context);
 FUNC_7(&VAR_2);

 FUNC_3(VAR_7);
 return 0;
}
