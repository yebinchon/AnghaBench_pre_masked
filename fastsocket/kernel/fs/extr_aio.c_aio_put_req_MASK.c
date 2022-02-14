
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kioctx {int ctx_lock; } ;
struct kiocb {struct kioctx* ki_ctx; } ;


 int FUNC_0 (struct kioctx*,struct kiocb*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct kiocb *VAR_0)
{
 struct kioctx *VAR_1 = VAR_0->ki_ctx;
 int VAR_2;
 FUNC_1(&VAR_1->ctx_lock);
 VAR_2 = FUNC_0(VAR_1, VAR_0);
 FUNC_2(&VAR_1->ctx_lock);
 return VAR_2;
}
