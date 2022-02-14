
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct ds_context {struct task_struct* task; int ** this; scalar_t__ count; } ;


 int VAR_0 ;
 int FUNC_0 (struct task_struct*,int ) ;
 struct task_struct* VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct ds_context*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct task_struct*) ;

__attribute__((used)) static void FUNC_5(struct ds_context *VAR_3)
{
 struct task_struct *VAR_4;
 unsigned long VAR_5;

 if (!VAR_3)
  return;

 FUNC_2(&VAR_2, VAR_5);

 if (--VAR_3->count) {
  FUNC_3(&VAR_2, VAR_5);
  return;
 }

 *(VAR_3->this) = ((void*)0);

 VAR_4 = VAR_3->task;

 if (VAR_4)
  FUNC_0(VAR_4, VAR_0);
 FUNC_3(&VAR_2, VAR_5);


 if (VAR_4 && (VAR_4 != VAR_1))
  FUNC_4(VAR_4);

 FUNC_1(VAR_3);
}
