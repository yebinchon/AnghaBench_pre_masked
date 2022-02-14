
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct user_context {int dummy; } ;
struct TYPE_2__ {struct user_context* user; } ;
struct task_struct {TYPE_1__ thread; } ;


 int VAR_0 ;

__attribute__((used)) static inline long FUNC_0(struct task_struct *VAR_1, int VAR_2)
{
 struct user_context *VAR_3 = VAR_1->thread.user;

 if (VAR_2 < 0 || VAR_2 >= VAR_0)
  return 0;

 return ((unsigned long *) VAR_3)[VAR_2];
}
