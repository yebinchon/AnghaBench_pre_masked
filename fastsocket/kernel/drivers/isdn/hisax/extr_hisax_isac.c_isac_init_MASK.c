
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int debug; int printdebug; struct isac* userdata; int state; int * fsm; } ;
struct isac {int timer; TYPE_1__ l1m; int * tx_skb; } ;


 int FUNC_0 (TYPE_1__*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_1(struct isac *VAR_3)
{
 VAR_3->tx_skb = ((void*)0);
 VAR_3->l1m.fsm = &VAR_1;
 VAR_3->l1m.state = VAR_0;



 VAR_3->l1m.debug = 0;

 VAR_3->l1m.userdata = VAR_3;
 VAR_3->l1m.printdebug = VAR_2;
 FUNC_0(&VAR_3->l1m, &VAR_3->timer);
}
