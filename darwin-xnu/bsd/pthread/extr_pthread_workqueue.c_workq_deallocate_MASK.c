
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct workqueue {int wq_refcnt; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct workqueue*) ;

__attribute__((used)) static void
FUNC_2(struct workqueue *VAR_0)
{
 if (FUNC_0(&VAR_0->wq_refcnt) == 0) {
  FUNC_1(VAR_0);
 }
}
