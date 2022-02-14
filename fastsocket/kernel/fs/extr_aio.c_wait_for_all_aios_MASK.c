
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct kioctx {int ctx_lock; int wait; scalar_t__ reqs_active; } ;


 int FUNC_0 (int ,struct task_struct*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct task_struct*,int ) ;
 int FUNC_2 (int *,int *) ;
 struct task_struct* VAR_2 ;
 int FUNC_3 () ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (struct task_struct*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_8(struct kioctx *VAR_4)
{
 struct task_struct *VAR_5 = VAR_2;
 FUNC_0(VAR_3, VAR_5);

 FUNC_6(&VAR_4->ctx_lock);
 if (!VAR_4->reqs_active)
  goto out;

 FUNC_2(&VAR_4->wait, &VAR_3);
 FUNC_5(VAR_5, VAR_1);
 while (VAR_4->reqs_active) {
  FUNC_7(&VAR_4->ctx_lock);
  FUNC_3();
  FUNC_5(VAR_5, VAR_1);
  FUNC_6(&VAR_4->ctx_lock);
 }
 FUNC_1(VAR_5, VAR_0);
 FUNC_4(&VAR_4->wait, &VAR_3);

out:
 FUNC_7(&VAR_4->ctx_lock);
}
