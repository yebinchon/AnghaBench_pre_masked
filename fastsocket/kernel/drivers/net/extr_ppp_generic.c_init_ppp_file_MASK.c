
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ppp_file {int kind; int rwait; int refcnt; int rq; int xq; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct ppp_file *VAR_0, int VAR_1)
{
 VAR_0->kind = VAR_1;
 FUNC_2(&VAR_0->xq);
 FUNC_2(&VAR_0->rq);
 FUNC_0(&VAR_0->refcnt, 1);
 FUNC_1(&VAR_0->rwait);
}
