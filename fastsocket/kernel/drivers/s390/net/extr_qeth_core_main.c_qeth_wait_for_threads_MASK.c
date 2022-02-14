
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qeth_card {int wait_q; } ;


 scalar_t__ FUNC_0 (struct qeth_card*) ;
 scalar_t__ FUNC_1 (struct qeth_card*,unsigned long) ;
 int FUNC_2 (int ,int) ;

int FUNC_3(struct qeth_card *VAR_0, unsigned long VAR_1)
{
 if (FUNC_0(VAR_0))
  return 0;
 return FUNC_2(VAR_0->wait_q,
   FUNC_1(VAR_0, VAR_1) == 0);
}
