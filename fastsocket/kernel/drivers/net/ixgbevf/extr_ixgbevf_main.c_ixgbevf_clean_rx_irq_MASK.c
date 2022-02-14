
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ status_error; int length; } ;
struct TYPE_8__ {TYPE_1__ upper; } ;
union ixgbe_adv_rx_desc {TYPE_2__ wb; } ;
typedef int u32 ;
struct sk_buff {int protocol; scalar_t__ len; struct sk_buff* next; union ixgbe_adv_rx_desc* data; } ;
struct pci_dev {int dev; } ;
struct ixgbevf_rx_buffer {struct sk_buff* skb; scalar_t__ dma; } ;
struct ixgbevf_ring {unsigned int next_to_clean; unsigned int count; unsigned int total_packets; unsigned int total_bytes; struct ixgbevf_rx_buffer* rx_buffer_info; int netdev; int rx_buf_len; } ;
struct TYPE_11__ {unsigned int total_packets; unsigned int total_bytes; } ;
struct ixgbevf_q_vector {TYPE_5__ rx; struct ixgbevf_adapter* adapter; } ;
struct ixgbevf_adapter {TYPE_4__* netdev; int non_eop_descs; struct pci_dev* pdev; } ;
struct TYPE_12__ {struct sk_buff* prev; } ;
struct TYPE_9__ {unsigned int rx_bytes; unsigned int rx_packets; } ;
struct TYPE_10__ {TYPE_3__ stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 union ixgbe_adv_rx_desc* FUNC_0 (struct ixgbevf_ring*,unsigned int) ;
 TYPE_6__* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct ixgbevf_ring*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 union ixgbe_adv_rx_desc* VAR_6 ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (int *,scalar_t__,int ,int ) ;
 int FUNC_6 (struct sk_buff*,int ) ;
 int FUNC_7 (struct ixgbevf_adapter*,struct ixgbevf_ring*,int) ;
 int FUNC_8 (struct ixgbevf_q_vector*,struct sk_buff*,int,union ixgbe_adv_rx_desc*) ;
 int FUNC_9 (struct ixgbevf_adapter*,struct ixgbevf_ring*,int,struct sk_buff*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (union ixgbe_adv_rx_desc*) ;
 int FUNC_13 () ;
 int FUNC_14 (struct sk_buff*) ;
 int FUNC_15 (struct sk_buff*,int) ;
 int FUNC_16 (struct sk_buff*,int) ;
 scalar_t__ FUNC_17 (int) ;

__attribute__((used)) static bool FUNC_18(struct ixgbevf_q_vector *VAR_7,
     struct ixgbevf_ring *VAR_8,
     int VAR_9)
{
 struct ixgbevf_adapter *VAR_10 = VAR_7->adapter;
 struct pci_dev *VAR_11 = VAR_10->pdev;
 union ixgbe_adv_rx_desc *VAR_12, *VAR_13;
 struct ixgbevf_rx_buffer *VAR_14, *VAR_15;
 struct sk_buff *VAR_16;
 unsigned int VAR_17;
 u32 VAR_18, VAR_19;
 int VAR_20 = 0;
 unsigned int VAR_21 = 0, VAR_22 = 0;

 VAR_17 = VAR_8->next_to_clean;
 VAR_12 = FUNC_0(VAR_8, VAR_17);
 VAR_19 = FUNC_11(VAR_12->wb.upper.status_error);
 VAR_14 = &VAR_8->rx_buffer_info[VAR_17];

 while (VAR_19 & VAR_3) {
  if (!VAR_9)
   break;
  VAR_9--;

  FUNC_13();
  VAR_18 = FUNC_10(VAR_12->wb.upper.length);
  VAR_16 = VAR_14->skb;
  FUNC_12(VAR_16->data - VAR_6);
  VAR_14->skb = ((void*)0);

  if (VAR_14->dma) {
   FUNC_5(&VAR_11->dev, VAR_14->dma,
      VAR_8->rx_buf_len,
      VAR_0);
   VAR_14->dma = 0;
   FUNC_16(VAR_16, VAR_18);
  }

  VAR_17++;
  if (VAR_17 == VAR_8->count)
   VAR_17 = 0;

  VAR_13 = FUNC_0(VAR_8, VAR_17);
  FUNC_12(VAR_13);
  VAR_20++;

  VAR_15 = &VAR_8->rx_buffer_info[VAR_17];

  if (!(VAR_19 & VAR_4)) {
   VAR_16->next = VAR_15->skb;
   FUNC_1(VAR_16->next)->prev = VAR_16;
   VAR_10->non_eop_descs++;
   goto next_desc;
  }


  if (FUNC_1(VAR_16)->prev) {
   do {
    struct sk_buff *VAR_23 = VAR_16;
    VAR_16 = FUNC_1(VAR_16)->prev;
    FUNC_3(VAR_23);
   } while (VAR_16);
   goto next_desc;
  }


  if (FUNC_17(VAR_19 & VAR_2)) {
   FUNC_4(VAR_16);
   goto next_desc;
  }

  FUNC_9(VAR_10, VAR_8, VAR_19, VAR_16);


  VAR_21 += VAR_16->len;
  VAR_22++;





  if (VAR_19 & VAR_5) {
   u32 VAR_24 = FUNC_14(VAR_16);
   if (VAR_24 < 14)
    FUNC_15(VAR_16, VAR_24);
  }
  VAR_16->protocol = FUNC_6(VAR_16, VAR_8->netdev);

  FUNC_8(VAR_7, VAR_16, VAR_19, VAR_12);

next_desc:
  VAR_12->wb.upper.status_error = 0;


  if (VAR_20 >= VAR_1) {
   FUNC_7(VAR_10, VAR_8,
       VAR_20);
   VAR_20 = 0;
  }


  VAR_12 = VAR_13;
  VAR_14 = &VAR_8->rx_buffer_info[VAR_17];

  VAR_19 = FUNC_11(VAR_12->wb.upper.status_error);
 }

 VAR_8->next_to_clean = VAR_17;
 VAR_20 = FUNC_2(VAR_8);

 if (VAR_20)
  FUNC_7(VAR_10, VAR_8, VAR_20);

 VAR_8->total_packets += VAR_22;
 VAR_8->total_bytes += VAR_21;
 VAR_10->netdev->stats.rx_bytes += VAR_21;
 VAR_10->netdev->stats.rx_packets += VAR_22;
 VAR_7->rx.total_packets += VAR_22;
 VAR_7->rx.total_bytes += VAR_21;

 return !!VAR_9;
}
