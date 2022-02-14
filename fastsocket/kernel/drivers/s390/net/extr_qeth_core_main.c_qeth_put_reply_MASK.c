
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qeth_reply {int refcnt; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct qeth_reply*) ;

__attribute__((used)) static void FUNC_4(struct qeth_reply *VAR_0)
{
 FUNC_0(FUNC_2(&VAR_0->refcnt) <= 0);
 if (FUNC_1(&VAR_0->refcnt))
  FUNC_3(VAR_0);
}
