
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread_info {struct task_struct* task; } ;
struct task_struct {int dummy; } ;
struct mutex {struct thread_info* owner; } ;


 int FUNC_0 (struct mutex*) ;

__attribute__((used)) static bool FUNC_1(struct mutex *VAR_0, struct task_struct *VAR_1)
{
 if (!FUNC_0(VAR_0))
  return 0;
 return 0;
}
