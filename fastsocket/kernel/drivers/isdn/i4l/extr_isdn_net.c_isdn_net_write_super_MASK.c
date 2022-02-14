
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_5__ {int xmit_lock; int super_tx_queue; int tqueue; } ;
typedef TYPE_1__ isdn_net_local ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,struct sk_buff*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,struct sk_buff*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(isdn_net_local *VAR_0, struct sk_buff *VAR_1)
{
 if (FUNC_0()) {


  FUNC_4(&VAR_0->super_tx_queue, VAR_1);
  FUNC_3(&VAR_0->tqueue);
  return;
 }

 FUNC_5(&VAR_0->xmit_lock);
 if (!FUNC_1(VAR_0)) {
  FUNC_2(VAR_0, VAR_1);
 } else {
  FUNC_4(&VAR_0->super_tx_queue, VAR_1);
 }
 FUNC_6(&VAR_0->xmit_lock);
}
