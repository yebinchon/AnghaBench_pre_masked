
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct sk_buff {int* data; scalar_t__ len; } ;
struct pci_dev {int dev; } ;
struct TYPE_3__ {unsigned int rx_bytes; unsigned int rx_packets; } ;
struct net_device {TYPE_1__ stats; } ;
struct e1000_rx_ring {unsigned int next_to_clean; unsigned int count; struct sk_buff* rx_skb_top; struct e1000_buffer* buffer_info; } ;
struct e1000_rx_desc {int status; int errors; int special; int csum; int length; } ;
struct e1000_hw {int dummy; } ;
struct e1000_buffer {int page; struct sk_buff* skb; scalar_t__ dma; int length; } ;
struct e1000_adapter {unsigned int total_rx_packets; unsigned int total_rx_bytes; int (* alloc_rx_buf ) (struct e1000_adapter*,struct e1000_rx_ring*,int) ;int stats_lock; int stats; struct pci_dev* pdev; struct net_device* netdev; struct e1000_hw hw; } ;
struct TYPE_4__ {int nr_frags; } ;


 int VAR_0 ;
 int FUNC_0 (struct e1000_rx_ring*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct e1000_rx_desc* FUNC_1 (struct e1000_rx_ring,unsigned int) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (struct e1000_hw*,int,int,int,int) ;
 int VAR_7 ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int *,scalar_t__,int ,int ) ;
 int VAR_8 ;
 int FUNC_5 (struct e1000_buffer*,struct sk_buff*,int) ;
 int FUNC_6 (struct e1000_adapter*,int,int ,struct sk_buff*) ;
 int FUNC_7 (struct e1000_adapter*,int,int,struct sk_buff*) ;
 int FUNC_8 (struct e1000_hw*,int *,int,int*) ;
 int FUNC_9 (int ,char*) ;
 int* FUNC_10 (int ,int ) ;
 int FUNC_11 (int*,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,int*,int) ;
 int FUNC_14 (struct e1000_rx_desc*) ;
 int FUNC_15 (struct sk_buff*,int ) ;
 int FUNC_16 (struct sk_buff*,scalar_t__) ;
 int FUNC_17 () ;
 struct sk_buff* VAR_9 ;
 int FUNC_18 (struct sk_buff*,int ,int ,int ,int) ;
 int FUNC_19 (struct sk_buff*,int) ;
 TYPE_2__* FUNC_20 (struct sk_buff*) ;
 int FUNC_21 (struct sk_buff*) ;
 int FUNC_22 (struct sk_buff*) ;
 int FUNC_23 (int *,unsigned long) ;
 int FUNC_24 (int *,unsigned long) ;
 int FUNC_25 (struct e1000_adapter*,struct e1000_rx_ring*,int) ;
 int FUNC_26 (struct e1000_adapter*,struct e1000_rx_ring*,int) ;
 scalar_t__ FUNC_27 (int) ;

__attribute__((used)) static bool FUNC_28(struct e1000_adapter *VAR_10,
         struct e1000_rx_ring *VAR_11,
         int *VAR_12, int VAR_13)
{
 struct e1000_hw *VAR_14 = &VAR_10->hw;
 struct net_device *VAR_15 = VAR_10->netdev;
 struct pci_dev *VAR_16 = VAR_10->pdev;
 struct e1000_rx_desc *VAR_17, *VAR_18;
 struct e1000_buffer *VAR_19, *VAR_20;
 unsigned long VAR_21;
 u32 VAR_22;
 unsigned int VAR_23;
 int VAR_24 = 0;
 bool VAR_25 = 0;
 unsigned int VAR_26=0, VAR_27=0;

 VAR_23 = VAR_11->next_to_clean;
 VAR_17 = FUNC_1(*VAR_11, VAR_23);
 VAR_19 = &VAR_11->buffer_info[VAR_23];

 while (VAR_17->status & VAR_2) {
  struct sk_buff *VAR_28;
  u8 VAR_29;

  if (*VAR_12 >= VAR_13)
   break;
  (*VAR_12)++;
  FUNC_17();

  VAR_29 = VAR_17->status;
  VAR_28 = VAR_19->skb;
  VAR_19->skb = ((void*)0);

  if (++VAR_23 == VAR_11->count) VAR_23 = 0;
  VAR_18 = FUNC_1(*VAR_11, VAR_23);
  FUNC_14(VAR_18);

  VAR_20 = &VAR_11->buffer_info[VAR_23];

  VAR_25 = 1;
  VAR_24++;
  FUNC_4(&VAR_16->dev, VAR_19->dma,
          VAR_19->length, VAR_0);
  VAR_19->dma = 0;

  VAR_22 = FUNC_12(VAR_17->length);


  if (FUNC_27((VAR_29 & VAR_3) &&
      (VAR_17->errors & VAR_1))) {
   u8 VAR_30 = *(VAR_28->data + VAR_22 - 1);
   if (FUNC_2(VAR_14, VAR_29, VAR_17->errors, VAR_22,
           VAR_30)) {
    FUNC_23(&VAR_10->stats_lock,
                      VAR_21);
    FUNC_8(VAR_14, &VAR_10->stats,
                           VAR_22, VAR_28->data);
    FUNC_24(&VAR_10->stats_lock,
                           VAR_21);
    VAR_22--;
   } else {

    VAR_19->skb = VAR_28;


    if (VAR_11->rx_skb_top)
     FUNC_3(VAR_11->rx_skb_top);
    VAR_11->rx_skb_top = ((void*)0);
    goto next_desc;
   }
  }


  if (!(VAR_29 & VAR_3)) {

   if (!VAR_11->rx_skb_top) {

    VAR_11->rx_skb_top = VAR_28;
    FUNC_18(VAR_11->rx_skb_top, 0, VAR_19->page,
                       0, VAR_22);
   } else {

    FUNC_18(VAR_11->rx_skb_top,
        FUNC_20(VAR_11->rx_skb_top)->nr_frags,
        VAR_19->page, 0, VAR_22);

    VAR_19->skb = VAR_28;
   }
   FUNC_5(VAR_19, VAR_11->rx_skb_top, VAR_22);
   goto next_desc;
  } else {
   if (VAR_11->rx_skb_top) {

    FUNC_18(VAR_11->rx_skb_top,
        FUNC_20(VAR_11->rx_skb_top)->nr_frags,
        VAR_19->page, 0, VAR_22);


    VAR_19->skb = VAR_28;
    VAR_28 = VAR_11->rx_skb_top;
    VAR_11->rx_skb_top = ((void*)0);
    FUNC_5(VAR_19, VAR_28, VAR_22);
   } else {


    if (VAR_22 <= VAR_7 &&
        FUNC_22(VAR_28) >= VAR_22) {
     u8 *VAR_31;
     VAR_31 = FUNC_10(VAR_19->page,
                         VAR_6);
     FUNC_13(FUNC_21(VAR_28), VAR_31, VAR_22);
     FUNC_11(VAR_31,
                   VAR_6);


     FUNC_19(VAR_28, VAR_22);
    } else {
     FUNC_18(VAR_28, 0,
                        VAR_19->page, 0,
                               VAR_22);
     FUNC_5(VAR_19, VAR_28,
                        VAR_22);
    }
   }
  }


  FUNC_7(VAR_10,
                    (u32)(VAR_29) |
                    ((u32)(VAR_17->errors) << 24),
                    FUNC_12(VAR_17->csum), VAR_28);

  FUNC_16(VAR_28, VAR_28->len - 4);


  VAR_26 += VAR_28->len;
  VAR_27++;


  if (!FUNC_15(VAR_28, VAR_5)) {
   FUNC_9(VAR_8, "pskb_may_pull failed.\n");
   FUNC_3(VAR_28);
   goto next_desc;
  }

  FUNC_6(VAR_10, VAR_29, VAR_17->special, VAR_28);

next_desc:
  VAR_17->status = 0;


  if (FUNC_27(VAR_24 >= VAR_4)) {
   VAR_10->alloc_rx_buf(VAR_10, VAR_11, VAR_24);
   VAR_24 = 0;
  }


  VAR_17 = VAR_18;
  VAR_19 = VAR_20;
 }
 VAR_11->next_to_clean = VAR_23;

 VAR_24 = FUNC_0(VAR_11);
 if (VAR_24)
  VAR_10->alloc_rx_buf(VAR_10, VAR_11, VAR_24);

 VAR_10->total_rx_packets += VAR_27;
 VAR_10->total_rx_bytes += VAR_26;
 VAR_15->stats.rx_bytes += VAR_26;
 VAR_15->stats.rx_packets += VAR_27;
 return VAR_25;
}
