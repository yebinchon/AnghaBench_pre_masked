
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tx_errors; } ;
struct qeth_card {TYPE_1__ stats; } ;
struct net_device {struct qeth_card* ml_priv; } ;


 int FUNC_0 (int ,int,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct qeth_card*) ;

void FUNC_2(struct net_device *VAR_1)
{
 struct qeth_card *VAR_2;

 FUNC_0(VAR_0, 4, "txtimeo");
 VAR_2 = VAR_1->ml_priv;
 VAR_2->stats.tx_errors++;
 FUNC_1(VAR_2);
}
