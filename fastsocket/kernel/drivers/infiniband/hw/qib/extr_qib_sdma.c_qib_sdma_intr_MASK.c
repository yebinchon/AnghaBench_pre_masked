
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qib_pportdata {int sdma_lock; } ;


 int FUNC_0 (struct qib_pportdata*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

void FUNC_3(struct qib_pportdata *VAR_0)
{
 unsigned long VAR_1;

 FUNC_1(&VAR_0->sdma_lock, VAR_1);

 FUNC_0(VAR_0);

 FUNC_2(&VAR_0->sdma_lock, VAR_1);
}
