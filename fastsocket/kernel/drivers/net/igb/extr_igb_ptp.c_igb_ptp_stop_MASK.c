
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int type; } ;
struct TYPE_8__ {TYPE_3__ mac; } ;
struct igb_adapter {int flags; TYPE_2__* netdev; TYPE_1__* pdev; scalar_t__ ptp_clock; int * ptp_tx_skb; int ptp_tx_work; int ptp_overflow_work; TYPE_4__ hw; } ;
struct TYPE_6__ {int name; } ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int *) ;






 int FUNC_4 (scalar_t__) ;

void FUNC_5(struct igb_adapter *VAR_1)
{
 switch (VAR_1->hw.mac.type) {
 case 133:
 case 132:
 case 128:
 case 129:
  FUNC_0(&VAR_1->ptp_overflow_work);
  break;
 case 131:
 case 130:

  break;
 default:
  return;
 }

 FUNC_1(&VAR_1->ptp_tx_work);
 if (VAR_1->ptp_tx_skb) {
  FUNC_3(VAR_1->ptp_tx_skb);
  VAR_1->ptp_tx_skb = ((void*)0);
 }

 if (VAR_1->ptp_clock) {
  FUNC_4(VAR_1->ptp_clock);
  FUNC_2(&VAR_1->pdev->dev, "removed PHC on %s\n",
    VAR_1->netdev->name);
  VAR_1->flags &= ~VAR_0;
 }
}
