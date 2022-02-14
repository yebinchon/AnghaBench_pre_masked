
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct waitq_set {int wqset_q; } ;
typedef int kern_return_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct waitq_set*) ;
 int FUNC_3 (struct waitq_set*) ;
 int FUNC_4 (struct waitq_set*) ;

kern_return_t FUNC_5(struct waitq_set *VAR_0)
{
 FUNC_0(FUNC_4(VAR_0));
 FUNC_0(!FUNC_1(&VAR_0->wqset_q));

 FUNC_2(VAR_0);
 return FUNC_3(VAR_0);

}
