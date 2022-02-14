
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ixgbe_adapter {TYPE_1__* netdev; int * ptp_clock; int * ptp_tx_skb; int ptp_tx_work; int flags2; int state; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (struct ixgbe_adapter*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int *) ;

void FUNC_6(struct ixgbe_adapter *VAR_2)
{

 if (!FUNC_5(VAR_1, &VAR_2->state))
  return;


 VAR_2->flags2 &= ~VAR_0;
 FUNC_3(VAR_2);

 FUNC_0(&VAR_2->ptp_tx_work);
 if (VAR_2->ptp_tx_skb) {
  FUNC_1(VAR_2->ptp_tx_skb);
  VAR_2->ptp_tx_skb = ((void*)0);
 }

 if (VAR_2->ptp_clock) {
  FUNC_4(VAR_2->ptp_clock);
  VAR_2->ptp_clock = ((void*)0);
  FUNC_2("removed PHC on %s\n",
      VAR_2->netdev->name);
 }
}
