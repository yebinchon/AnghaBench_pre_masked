
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kioctx {int ctx_lock; } ;
struct TYPE_2__ {int task_list; } ;
struct kiocb {TYPE_1__ ki_wait; struct kioctx* ki_ctx; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct kiocb*) ;
 int FUNC_2 (struct kioctx*) ;
 int FUNC_3 (struct kiocb*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_7(struct kiocb *VAR_0)
{
  struct kioctx *VAR_1 = VAR_0->ki_ctx;
 unsigned long VAR_2;
 int VAR_3 = 0;






 FUNC_0((!FUNC_4(&VAR_0->ki_wait.task_list)));

 FUNC_5(&VAR_1->ctx_lock, VAR_2);


 if (!FUNC_3(VAR_0))
  VAR_3 = FUNC_1(VAR_0);
 FUNC_6(&VAR_1->ctx_lock, VAR_2);
 if (VAR_3)
  FUNC_2(VAR_1);
}
