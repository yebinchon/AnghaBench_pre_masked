
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user_regset {int dummy; } ;
struct task_struct {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct task_struct*,struct user_regset const*,int ,int ,int *,int *) ;
 int FUNC_1 (struct task_struct*) ;
 scalar_t__ FUNC_2 (struct task_struct*,int ) ;

__attribute__((used)) static int
FUNC_3(struct task_struct *VAR_2,
   const struct user_regset *VAR_3,
   int VAR_4)
{
 if (FUNC_2(VAR_2, VAR_0))
  return 0;
 FUNC_1(VAR_2);
 return FUNC_0(VAR_1, VAR_2, VAR_3, 0, 0,
  ((void*)0), ((void*)0));
}
