
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int mm; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,struct task_struct*) ;

int FUNC_2(struct task_struct *VAR_2)
{
 if (!VAR_1)
  return 0;






 if (FUNC_0(VAR_2->mm))
  return FUNC_1(VAR_0, VAR_2);

 return 0;
}
