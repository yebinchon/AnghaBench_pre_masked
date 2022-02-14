
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union e1000_adv_rx_desc {int dummy; } e1000_adv_rx_desc ;
struct sk_buff {int protocol; } ;
struct igb_ring {int netdev; int queue_index; } ;


 int FUNC_0 (struct sk_buff*,int ) ;
 int FUNC_1 (struct igb_ring*,union e1000_adv_rx_desc*,struct sk_buff*) ;
 int FUNC_2 (struct igb_ring*,union e1000_adv_rx_desc*,struct sk_buff*) ;
 int FUNC_3 (struct igb_ring*,union e1000_adv_rx_desc*,struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*,int ) ;

__attribute__((used)) static void FUNC_5(struct igb_ring *VAR_0,
       union e1000_adv_rx_desc *VAR_1,
       struct sk_buff *VAR_2)
{
 FUNC_3(VAR_0, VAR_1, VAR_2);

 FUNC_2(VAR_0, VAR_1, VAR_2);

 FUNC_1(VAR_0, VAR_1, VAR_2);

 FUNC_4(VAR_2, VAR_0->queue_index);

 VAR_2->protocol = FUNC_0(VAR_2, VAR_0->netdev);
}
