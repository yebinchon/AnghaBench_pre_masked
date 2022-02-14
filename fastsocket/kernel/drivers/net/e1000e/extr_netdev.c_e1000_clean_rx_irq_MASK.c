
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


struct TYPE_10__ {int status_error; int vlan; int length; } ;
struct TYPE_7__ {int csum; } ;
struct TYPE_8__ {TYPE_1__ csum_ip; } ;
struct TYPE_9__ {TYPE_2__ hi_dword; } ;
struct TYPE_11__ {TYPE_4__ upper; TYPE_3__ lower; } ;
union e1000_rx_desc_extended {TYPE_5__ wb; } ;
typedef int u32 ;
struct sk_buff {union e1000_rx_desc_extended* data; } ;
struct pci_dev {int dev; } ;
struct TYPE_12__ {unsigned int rx_bytes; unsigned int rx_packets; } ;
struct net_device {TYPE_6__ stats; } ;
struct e1000_ring {unsigned int next_to_clean; unsigned int count; struct e1000_buffer* buffer_info; struct e1000_adapter* adapter; } ;
struct e1000_hw {int dummy; } ;
struct e1000_buffer {struct sk_buff* skb; scalar_t__ dma; } ;
struct e1000_adapter {int flags2; unsigned int total_rx_bytes; unsigned int total_rx_packets; int (* alloc_rx_buf ) (struct e1000_ring*,int,int ) ;int rx_buffer_len; struct e1000_hw hw; struct pci_dev* pdev; struct net_device* netdev; } ;


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
 int FUNC_2 (int *,scalar_t__,int ,int ) ;
 int FUNC_3 (struct e1000_ring*) ;
 int FUNC_4 (struct e1000_adapter*,struct net_device*,struct sk_buff*,int,int ) ;
 int FUNC_5 (struct e1000_adapter*,int,int,struct sk_buff*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 struct sk_buff* FUNC_9 (struct net_device*,int) ;
 int FUNC_10 (union e1000_rx_desc_extended*) ;
 int FUNC_11 () ;
 int FUNC_12 (struct sk_buff*,int ,union e1000_rx_desc_extended*,int ) ;
 int FUNC_13 (struct sk_buff*,int) ;
 int FUNC_14 (struct e1000_ring*,int,int ) ;
 int FUNC_15 (struct e1000_ring*,int,int ) ;
 scalar_t__ FUNC_16 (int) ;

__attribute__((used)) static bool FUNC_17(struct e1000_ring *VAR_10, int *VAR_11,
          int VAR_12)
{
 struct e1000_adapter *VAR_13 = VAR_10->adapter;
 struct net_device *VAR_14 = VAR_13->netdev;
 struct pci_dev *VAR_15 = VAR_13->pdev;
 struct e1000_hw *VAR_16 = &VAR_13->hw;
 union e1000_rx_desc_extended *VAR_17, *VAR_18;
 struct e1000_buffer *VAR_19, *VAR_20;
 u32 VAR_21, VAR_22;
 unsigned int VAR_23;
 int VAR_24 = 0;
 bool VAR_25 = 0;
 unsigned int VAR_26 = 0, VAR_27 = 0;

 VAR_23 = VAR_10->next_to_clean;
 VAR_17 = FUNC_0(*VAR_10, VAR_23);
 VAR_22 = FUNC_8(VAR_17->wb.upper.status_error);
 VAR_19 = &VAR_10->buffer_info[VAR_23];

 while (VAR_22 & VAR_2) {
  struct sk_buff *VAR_28;

  if (*VAR_11 >= VAR_12)
   break;
  (*VAR_11)++;
  FUNC_11();

  VAR_28 = VAR_19->skb;
  VAR_19->skb = ((void*)0);

  FUNC_10(VAR_28->data - VAR_8);

  VAR_23++;
  if (VAR_23 == VAR_10->count)
   VAR_23 = 0;
  VAR_18 = FUNC_0(*VAR_10, VAR_23);
  FUNC_10(VAR_18);

  VAR_20 = &VAR_10->buffer_info[VAR_23];

  VAR_25 = 1;
  VAR_24++;
  FUNC_2(&VAR_15->dev, VAR_19->dma,
     VAR_13->rx_buffer_len, VAR_0);
  VAR_19->dma = 0;

  VAR_21 = FUNC_7(VAR_17->wb.upper.length);







  if (FUNC_16(!(VAR_22 & VAR_3)))
   VAR_13->flags2 |= VAR_6;

  if (VAR_13->flags2 & VAR_6) {

   FUNC_6("Receive packet consumed multiple buffers\n");

   VAR_19->skb = VAR_28;
   if (VAR_22 & VAR_3)
    VAR_13->flags2 &= ~VAR_6;
   goto next_desc;
  }

  if (VAR_22 & VAR_1) {

   VAR_19->skb = VAR_28;
   goto next_desc;
  }


  if (!(VAR_13->flags2 & VAR_5))
   VAR_21 -= 4;

  VAR_26 += VAR_21;
  VAR_27++;





  if (VAR_21 < VAR_9) {
   struct sk_buff *VAR_29 =
       FUNC_9(VAR_14, VAR_21);
   if (VAR_29) {
    FUNC_12(VAR_29,
              -VAR_8,
              (VAR_28->data -
        VAR_8),
              (VAR_21 +
        VAR_8));

    VAR_19->skb = VAR_28;
    VAR_28 = VAR_29;
   }

  }

  FUNC_13(VAR_28, VAR_21);


  FUNC_5(VAR_13, VAR_22,
      FUNC_7(VAR_17->wb.lower.hi_dword.
           csum_ip.csum), VAR_28);

  FUNC_4(VAR_13, VAR_14, VAR_28, VAR_22,
      VAR_17->wb.upper.vlan);

next_desc:
  VAR_17->wb.upper.status_error &= FUNC_1(~0xFF);


  if (VAR_24 >= VAR_4) {
   VAR_13->alloc_rx_buf(VAR_10, VAR_24,
           VAR_7);
   VAR_24 = 0;
  }


  VAR_17 = VAR_18;
  VAR_19 = VAR_20;

  VAR_22 = FUNC_8(VAR_17->wb.upper.status_error);
 }
 VAR_10->next_to_clean = VAR_23;

 VAR_24 = FUNC_3(VAR_10);
 if (VAR_24)
  VAR_13->alloc_rx_buf(VAR_10, VAR_24, VAR_7);

 VAR_13->total_rx_bytes += VAR_26;
 VAR_13->total_rx_packets += VAR_27;
 VAR_14->stats.rx_bytes += VAR_26;
 VAR_14->stats.rx_packets += VAR_27;
 return VAR_25;
}
