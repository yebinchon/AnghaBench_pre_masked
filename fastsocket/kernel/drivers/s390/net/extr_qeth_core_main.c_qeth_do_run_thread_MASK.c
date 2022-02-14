
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qeth_card {int wait_q; } ;


 int FUNC_0 (struct qeth_card*,unsigned long) ;
 int FUNC_1 (int ,int) ;

int FUNC_2(struct qeth_card *VAR_0, unsigned long VAR_1)
{
 int VAR_2 = 0;

 FUNC_1(VAR_0->wait_q,
     (VAR_2 = FUNC_0(VAR_0, VAR_1)) >= 0);
 return VAR_2;
}
