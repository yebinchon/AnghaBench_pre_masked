
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef union ixgbe_adv_rx_desc {int dummy; } ixgbe_adv_rx_desc ;
typedef scalar_t__ u16 ;
struct sk_buff {scalar_t__ len; } ;
struct TYPE_5__ {unsigned int packets; unsigned int bytes; } ;
struct ixgbe_ring {TYPE_2__ stats; TYPE_1__* netdev; int next_to_clean; } ;
struct TYPE_6__ {unsigned int total_packets; unsigned int total_bytes; } ;
struct ixgbe_q_vector {TYPE_3__ rx; struct ixgbe_adapter* adapter; } ;
struct ixgbe_adapter {int dummy; } ;
struct fcoe_hdr {int dummy; } ;
struct fcoe_crc_eof {int dummy; } ;
struct fc_frame_header {int dummy; } ;
struct TYPE_4__ {int mtu; } ;


 scalar_t__ FUNC_0 (int,unsigned int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 union ixgbe_adv_rx_desc* FUNC_1 (struct ixgbe_ring*,int ) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct ixgbe_ring*,scalar_t__) ;
 scalar_t__ FUNC_4 (struct ixgbe_ring*,union ixgbe_adv_rx_desc*,struct sk_buff*) ;
 scalar_t__ FUNC_5 (struct ixgbe_ring*) ;
 int FUNC_6 (struct ixgbe_adapter*,union ixgbe_adv_rx_desc*,struct sk_buff*) ;
 struct sk_buff* FUNC_7 (struct ixgbe_ring*,union ixgbe_adv_rx_desc*) ;
 scalar_t__ FUNC_8 (struct ixgbe_ring*,union ixgbe_adv_rx_desc*,struct sk_buff*) ;
 int FUNC_9 (struct ixgbe_ring*,union ixgbe_adv_rx_desc*,struct sk_buff*) ;
 scalar_t__ FUNC_10 (struct ixgbe_ring*,union ixgbe_adv_rx_desc*) ;
 int FUNC_11 (struct ixgbe_q_vector*,struct sk_buff*,union ixgbe_adv_rx_desc*) ;
 int FUNC_12 (union ixgbe_adv_rx_desc*,int ) ;
 scalar_t__ FUNC_13 (int) ;
 int FUNC_14 () ;

__attribute__((used)) static bool FUNC_15(struct ixgbe_q_vector *VAR_2,
          struct ixgbe_ring *VAR_3,
          const int VAR_4)
{
 unsigned int VAR_5 = 0, VAR_6 = 0;





 u16 VAR_7 = FUNC_5(VAR_3);

 do {
  union ixgbe_adv_rx_desc *VAR_8;
  struct sk_buff *VAR_9;


  if (VAR_7 >= VAR_1) {
   FUNC_3(VAR_3, VAR_7);
   VAR_7 = 0;
  }

  VAR_8 = FUNC_1(VAR_3, VAR_3->next_to_clean);

  if (!FUNC_12(VAR_8, VAR_0))
   break;






  FUNC_14();


  VAR_9 = FUNC_7(VAR_3, VAR_8);


  if (!VAR_9)
   break;

  VAR_7++;


  if (FUNC_8(VAR_3, VAR_8, VAR_9))
   continue;


  if (FUNC_4(VAR_3, VAR_8, VAR_9))
   continue;


  VAR_5 += VAR_9->len;


  FUNC_9(VAR_3, VAR_8, VAR_9);
  FUNC_11(VAR_2, VAR_9, VAR_8);


  VAR_6++;
 } while (FUNC_13(VAR_6 < VAR_4));

 VAR_3->stats.packets += VAR_6;
 VAR_3->stats.bytes += VAR_5;
 VAR_2->rx.total_packets += VAR_6;
 VAR_2->rx.total_bytes += VAR_5;

 if (VAR_7)
  FUNC_3(VAR_3, VAR_7);

 return (VAR_6 < VAR_4);
}
