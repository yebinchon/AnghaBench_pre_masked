
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {struct io_context* io_context; } ;
struct io_context {int cgroup_changed; } ;
struct cgroup {int dummy; } ;


 int FUNC_0 (struct task_struct*) ;
 int FUNC_1 (struct task_struct*) ;

__attribute__((used)) static void FUNC_2(struct cgroup *VAR_0, struct task_struct *VAR_1)
{
 struct io_context *VAR_2;

 FUNC_0(VAR_1);
 VAR_2 = VAR_1->io_context;
 if (VAR_2)
  VAR_2->cgroup_changed = 1;
 FUNC_1(VAR_1);
}
