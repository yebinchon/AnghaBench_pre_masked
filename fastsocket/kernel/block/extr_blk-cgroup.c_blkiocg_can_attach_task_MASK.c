
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {struct io_context* io_context; } ;
struct io_context {int nr_tasks; } ;
struct cgroup {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct task_struct*) ;
 int FUNC_2 (struct task_struct*) ;

__attribute__((used)) static int FUNC_3(struct cgroup *VAR_1, struct task_struct *VAR_2)
{
 struct io_context *VAR_3;
 int VAR_4 = 0;


 FUNC_1(VAR_2);
 VAR_3 = VAR_2->io_context;
 if (VAR_3 && FUNC_0(&VAR_3->nr_tasks) > 1)
  VAR_4 = -VAR_0;
 FUNC_2(VAR_2);

 return VAR_4;
}
