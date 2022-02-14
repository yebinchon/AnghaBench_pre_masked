
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int status_error; int vlan; int length; } ;
struct TYPE_8__ {int csum; } ;
struct TYPE_9__ {TYPE_1__ csum_ip; } ;
struct TYPE_10__ {TYPE_2__ hi_dword; } ;
struct TYPE_12__ {TYPE_4__ upper; TYPE_3__ lower; } ;
union e1000_rx_desc_extended {TYPE_5__ wb; } ;
typedef int u8 ;
typedef int u32 ;
struct sk_buff {scalar_t__ len; } ;
struct pci_dev {int dev; } ;
struct TYPE_13__ {unsigned int rx_bytes; unsigned int rx_packets; } ;
struct net_device {TYPE_6__ stats; } ;
struct e1000_ring {unsigned int next_to_clean; unsigned int count; struct sk_buff* rx_skb_top; struct e1000_buffer* buffer_info; struct e1000_adapter* adapter; } ;
struct e1000_buffer {int page; struct sk_buff* skb; scalar_t__ dma; } ;
struct e1000_adapter {unsigned int total_rx_bytes; unsigned int total_rx_packets; int (* alloc_rx_buf ) (struct e1000_ring*,int,int ) ;struct pci_dev* pdev; struct net_device* netdev; } ;
struct TYPE_14__ {int nr_frags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 union e1000_rx_desc_extended* FUNC_0 (struct e1000_ring,unsigned int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int *,scalar_t__,int ,int ) ;
 int FUNC_4 (struct e1000_buffer*,struct sk_buff*,int) ;
 int FUNC_5 (struct e1000_ring*) ;
 int FUNC_6 (struct e1000_adapter*,struct net_device*,struct sk_buff*,int,int ) ;
 int FUNC_7 (struct e1000_adapter*,int,int,struct sk_buff*) ;
 int FUNC_8 (char*) ;
 int * FUNC_9 (int ,int ) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,int *,int) ;
 int FUNC_14 (union e1000_rx_desc_extended*) ;
 int FUNC_15 (struct sk_buff*,int ) ;
 int FUNC_16 () ;
 struct sk_buff* VAR_10 ;
 int FUNC_17 (struct sk_buff*,int ,int ,int ,int) ;
 int FUNC_18 (struct sk_buff*,int) ;
 TYPE_7__* FUNC_19 (struct sk_buff*) ;
 int FUNC_20 (struct sk_buff*) ;
 int FUNC_21 (struct sk_buff*) ;
 int FUNC_22 (struct e1000_ring*,int,int ) ;
 int FUNC_23 (struct e1000_ring*,int,int ) ;
 scalar_t__ FUNC_24 (int) ;

__attribute__((used)) static bool FUNC_25(struct e1000_ring *VAR_11, int *VAR_12,
         int VAR_13)
{
 struct e1000_adapter *VAR_14 = VAR_11->adapter;
 struct net_device *VAR_15 = VAR_14->netdev;
 struct pci_dev *VAR_16 = VAR_14->pdev;
 union e1000_rx_desc_extended *VAR_17, *VAR_18;
 struct e1000_buffer *VAR_19, *VAR_20;
 u32 VAR_21, VAR_22;
 unsigned int VAR_23;
 int VAR_24 = 0;
 bool VAR_25 = 0;
 unsigned int VAR_26 = 0, VAR_27 = 0;

 VAR_23 = VAR_11->next_to_clean;
 VAR_17 = FUNC_0(*VAR_11, VAR_23);
 VAR_22 = FUNC_12(VAR_17->wb.upper.status_error);
 VAR_19 = &VAR_11->buffer_info[VAR_23];

 while (VAR_22 & VAR_2) {
  struct sk_buff *VAR_28;

  if (*VAR_12 >= VAR_13)
   break;
  (*VAR_12)++;
  FUNC_16();

  VAR_28 = VAR_19->skb;
  VAR_19->skb = ((void*)0);

  ++VAR_23;
  if (VAR_23 == VAR_11->count)
   VAR_23 = 0;
  VAR_18 = FUNC_0(*VAR_11, VAR_23);
  FUNC_14(VAR_18);

  VAR_20 = &VAR_11->buffer_info[VAR_23];

  VAR_25 = 1;
  VAR_24++;
  FUNC_3(&VAR_16->dev, VAR_19->dma, VAR_8,
          VAR_0);
  VAR_19->dma = 0;

  VAR_21 = FUNC_11(VAR_17->wb.upper.length);


  if (FUNC_24((VAR_22 & VAR_3) &&
        (VAR_22 & VAR_1))) {

   VAR_19->skb = VAR_28;

   if (VAR_11->rx_skb_top)
    FUNC_2(VAR_11->rx_skb_top);
   VAR_11->rx_skb_top = ((void*)0);
   goto next_desc;
  }

  if (!(VAR_22 & VAR_3)) {

   if (!(VAR_11->rx_skb_top)) {

    (VAR_11->rx_skb_top) = VAR_28;
    FUNC_17((VAR_11->rx_skb_top), 0, VAR_19->page,
         0, VAR_21);
   } else {

    FUNC_17((VAR_11->rx_skb_top),
        FUNC_19((VAR_11->rx_skb_top))->nr_frags,
        VAR_19->page, 0, VAR_21);

    VAR_19->skb = VAR_28;
   }
   FUNC_4(VAR_19, (VAR_11->rx_skb_top), VAR_21);
   goto next_desc;
  } else {
   if ((VAR_11->rx_skb_top)) {

    FUNC_17((VAR_11->rx_skb_top),
        FUNC_19((VAR_11->rx_skb_top))->nr_frags,
        VAR_19->page, 0, VAR_21);



    VAR_19->skb = VAR_28;
    VAR_28 = (VAR_11->rx_skb_top);
    (VAR_11->rx_skb_top) = ((void*)0);
    FUNC_4(VAR_19, VAR_28, VAR_21);
   } else {



    if (VAR_21 <= VAR_9 &&
        FUNC_21(VAR_28) >= VAR_21) {
     u8 *VAR_29;
     VAR_29 = FUNC_9(VAR_19->page,
                        VAR_7);
     FUNC_13(FUNC_20(VAR_28), VAR_29,
            VAR_21);
     FUNC_10(VAR_29,
                   VAR_7);



     FUNC_18(VAR_28, VAR_21);
    } else {
     FUNC_17(VAR_28, 0,
          VAR_19->page, 0,
          VAR_21);
     FUNC_4(VAR_19, VAR_28,
          VAR_21);
    }
   }
  }


  FUNC_7(VAR_14, VAR_22,
      FUNC_11(VAR_17->wb.lower.hi_dword.
           csum_ip.csum), VAR_28);


  VAR_26 += VAR_28->len;
  VAR_27++;


  if (!FUNC_15(VAR_28, VAR_5)) {
   FUNC_8("pskb_may_pull failed.\n");
   FUNC_2(VAR_28);
   goto next_desc;
  }

  FUNC_6(VAR_14, VAR_15, VAR_28, VAR_22,
      VAR_17->wb.upper.vlan);

next_desc:
  VAR_17->wb.upper.status_error &= FUNC_1(~0xFF);


  if (FUNC_24(VAR_24 >= VAR_4)) {
   VAR_14->alloc_rx_buf(VAR_11, VAR_24,
           VAR_6);
   VAR_24 = 0;
  }


  VAR_17 = VAR_18;
  VAR_19 = VAR_20;

  VAR_22 = FUNC_12(VAR_17->wb.upper.status_error);
 }
 VAR_11->next_to_clean = VAR_23;

 VAR_24 = FUNC_5(VAR_11);
 if (VAR_24)
  VAR_14->alloc_rx_buf(VAR_11, VAR_24, VAR_6);

 VAR_14->total_rx_bytes += VAR_26;
 VAR_14->total_rx_packets += VAR_27;
 VAR_15->stats.rx_bytes += VAR_26;
 VAR_15->stats.rx_packets += VAR_27;
 return VAR_25;
}
