
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct workqueue {int wq_refcnt; } ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct workqueue*) ;

void
FUNC_3(struct workqueue *VAR_0)
{
 if (FUNC_0(FUNC_1(&VAR_0->wq_refcnt) == 0)) {
  FUNC_2(VAR_0);
 }
}
