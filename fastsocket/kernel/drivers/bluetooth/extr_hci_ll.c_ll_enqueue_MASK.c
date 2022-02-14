
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct ll_struct {int hcill_state; int hcill_lock; int tx_wait_q; int txq; } ;
struct hci_uart {struct ll_struct* priv; } ;
struct TYPE_2__ {int pkt_type; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,...) ;



 int VAR_0 ;
 TYPE_1__* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int ,int *,int) ;
 int FUNC_5 (int ,struct hci_uart*) ;
 int FUNC_6 (struct sk_buff*,int) ;
 int FUNC_7 (int *,struct sk_buff*) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_10(struct hci_uart *VAR_1, struct sk_buff *VAR_2)
{
 unsigned long VAR_3 = 0;
 struct ll_struct *VAR_4 = VAR_1->priv;

 FUNC_0("hu %p skb %p", VAR_1, VAR_2);


 FUNC_4(FUNC_6(VAR_2, 1), &FUNC_2(VAR_2)->pkt_type, 1);


 FUNC_8(&VAR_4->hcill_lock, VAR_3);


 switch (VAR_4->hcill_state) {
 case 128:
  FUNC_0("device awake, sending normally");
  FUNC_7(&VAR_4->txq, VAR_2);
  break;
 case 130:
  FUNC_0("device asleep, waking up and queueing packet");

  FUNC_7(&VAR_4->tx_wait_q, VAR_2);

  if (FUNC_5(VAR_0, VAR_1) < 0) {
   FUNC_1("cannot wake up device");
   break;
  }
  VAR_4->hcill_state = 129;
  break;
 case 129:
  FUNC_0("device waking up, queueing packet");

  FUNC_7(&VAR_4->tx_wait_q, VAR_2);
  break;
 default:
  FUNC_1("illegal hcill state: %ld (losing packet)", VAR_4->hcill_state);
  FUNC_3(VAR_2);
  break;
 }

 FUNC_9(&VAR_4->hcill_lock, VAR_3);

 return 0;
}
