
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int work; } ;
struct kioctx {int rcu_head; int * mm; TYPE_1__ wq; int reqs_active; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct kioctx*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,struct kioctx*) ;

__attribute__((used)) static void FUNC_7(struct kioctx *VAR_1)
{
 FUNC_0(VAR_1->reqs_active);

 FUNC_3(&VAR_1->wq);
 FUNC_4(&VAR_1->wq.work);
 FUNC_1(VAR_1);
 FUNC_5(VAR_1->mm);
 VAR_1->mm = ((void*)0);
 FUNC_6("__put_ioctx: freeing %p\n", VAR_1);
 FUNC_2(&VAR_1->rcu_head, VAR_0);
}
