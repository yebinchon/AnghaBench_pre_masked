
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kioctx {int run_list; int ctx_lock; } ;
struct kiocb {int ki_run_list; struct kioctx* ki_ctx; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static inline int FUNC_3(struct kiocb *VAR_0)
{
 struct kioctx *VAR_1 = VAR_0->ki_ctx;

 FUNC_0(&VAR_1->ctx_lock);

 if (FUNC_2(&VAR_0->ki_run_list)) {
  FUNC_1(&VAR_0->ki_run_list,
   &VAR_1->run_list);
  return 1;
 }
 return 0;
}
