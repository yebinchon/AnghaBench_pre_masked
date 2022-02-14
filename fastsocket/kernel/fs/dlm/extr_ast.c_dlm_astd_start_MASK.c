
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct task_struct*) ;
 int FUNC_2 (struct task_struct*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct task_struct* VAR_3 ;
 int VAR_4 ;
 struct task_struct* FUNC_3 (int ,int *,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(void)
{
 struct task_struct *VAR_5;
 int VAR_6 = 0;

 FUNC_0(&VAR_0);
 FUNC_5(&VAR_1);
 FUNC_4(&VAR_2);

 VAR_5 = FUNC_3(VAR_4, ((void*)0), "dlm_astd");
 if (FUNC_1(VAR_5))
  VAR_6 = FUNC_2(VAR_5);
 else
  VAR_3 = VAR_5;
 return VAR_6;
}
