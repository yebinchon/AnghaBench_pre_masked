
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int vlan; } ;
struct TYPE_6__ {TYPE_1__ upper; } ;
union e1000_adv_rx_desc {TYPE_2__ wb; } ;
typedef scalar_t__ u16 ;
struct sk_buff {scalar_t__ len; } ;
struct TYPE_7__ {unsigned int packets; unsigned int bytes; } ;
struct igb_ring {TYPE_3__ rx_stats; struct sk_buff* skb; int flags; int next_to_clean; } ;
struct TYPE_8__ {unsigned int total_packets; unsigned int total_bytes; struct igb_ring* ring; } ;
struct igb_q_vector {TYPE_4__ rx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 union e1000_adv_rx_desc* FUNC_0 (struct igb_ring*,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct igb_ring*,scalar_t__) ;
 scalar_t__ FUNC_3 (struct igb_ring*,union e1000_adv_rx_desc*,struct sk_buff*) ;
 scalar_t__ FUNC_4 (struct igb_ring*) ;
 struct sk_buff* FUNC_5 (struct igb_ring*,union e1000_adv_rx_desc*,struct sk_buff*) ;
 scalar_t__ FUNC_6 (struct igb_ring*,union e1000_adv_rx_desc*) ;
 int FUNC_7 (struct igb_ring*,union e1000_adv_rx_desc*,struct sk_buff*) ;
 int FUNC_8 (struct igb_q_vector*,struct sk_buff*,scalar_t__) ;
 scalar_t__ FUNC_9 (union e1000_adv_rx_desc*,int ) ;
 scalar_t__ FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int) ;
 scalar_t__ FUNC_12 (int ,int *) ;

__attribute__((used)) static bool FUNC_13(struct igb_q_vector *VAR_4, const int VAR_5)
{
 struct igb_ring *VAR_6 = VAR_4->rx.ring;
 struct sk_buff *VAR_7 = VAR_6->skb;
 unsigned int VAR_8 = 0, VAR_9 = 0;
 u16 VAR_10 = 0;
 u16 VAR_11 = FUNC_4(VAR_6);

 do {
  union e1000_adv_rx_desc *VAR_12;


  if (VAR_11 >= VAR_3) {
   FUNC_2(VAR_6, VAR_11);
   VAR_11 = 0;
  }

  VAR_12 = FUNC_0(VAR_6, VAR_6->next_to_clean);

  if (!FUNC_9(VAR_12, VAR_1))
   break;


  VAR_7 = FUNC_5(VAR_6, VAR_12, VAR_7);


  if (!VAR_7)
   break;

  VAR_11++;


  if (FUNC_6(VAR_6, VAR_12))
   continue;


  if (FUNC_3(VAR_6, VAR_12, VAR_7)) {
   VAR_7 = ((void*)0);
   continue;
  }


  VAR_8 += VAR_7->len;


  FUNC_7(VAR_6, VAR_12, VAR_7);

  if (FUNC_9(VAR_12, VAR_0) &&
      FUNC_12(VAR_2, &VAR_6->flags))
   VAR_10 = FUNC_1(VAR_12->wb.upper.vlan);
  else
   VAR_10 = FUNC_10(VAR_12->wb.upper.vlan);

  FUNC_8(VAR_4, VAR_7, VAR_10);


  VAR_7 = ((void*)0);


  VAR_9++;
 } while (FUNC_11(VAR_9 < VAR_5));


 VAR_6->skb = VAR_7;

 VAR_6->rx_stats.packets += VAR_9;
 VAR_6->rx_stats.bytes += VAR_8;
 VAR_4->rx.total_packets += VAR_9;
 VAR_4->rx.total_bytes += VAR_8;

 if (VAR_11)
  FUNC_2(VAR_6, VAR_11);

 return (VAR_9 < VAR_5);
}
