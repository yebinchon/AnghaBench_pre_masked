
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


struct TYPE_12__ {int status_error; int vlan; int length0; } ;
struct TYPE_13__ {int header_status; int * length; } ;
struct TYPE_8__ {int csum; } ;
struct TYPE_9__ {TYPE_1__ csum_ip; } ;
struct TYPE_10__ {TYPE_2__ hi_dword; } ;
struct TYPE_14__ {TYPE_5__ middle; TYPE_6__ upper; TYPE_3__ lower; } ;
union e1000_rx_desc_packet_split {TYPE_7__ wb; } ;
typedef int u8 ;
typedef int u32 ;
struct sk_buff {int data_len; scalar_t__ len; int truesize; union e1000_rx_desc_packet_split* data; } ;
struct pci_dev {int dev; } ;
struct TYPE_11__ {unsigned int rx_bytes; unsigned int rx_packets; } ;
struct net_device {TYPE_4__ stats; } ;
struct e1000_ring {unsigned int next_to_clean; unsigned int count; struct e1000_buffer* buffer_info; struct e1000_adapter* adapter; } ;
struct e1000_ps_page {int * page; scalar_t__ dma; } ;
struct e1000_hw {int dummy; } ;
struct e1000_buffer {struct sk_buff* skb; struct e1000_ps_page* ps_pages; scalar_t__ dma; } ;
struct e1000_adapter {int rx_ps_bsize0; int flags2; unsigned int total_rx_bytes; unsigned int total_rx_packets; int (* alloc_rx_buf ) (struct e1000_ring*,int,int ) ;int rx_hdr_split; struct pci_dev* pdev; struct net_device* netdev; struct e1000_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 union e1000_rx_desc_packet_split* FUNC_0 (struct e1000_ring,unsigned int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 union e1000_rx_desc_packet_split* VAR_10 ;
 scalar_t__ VAR_11 ;
 unsigned int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int *,scalar_t__,scalar_t__,int ) ;
 int FUNC_5 (int *,scalar_t__,scalar_t__,int ) ;
 int FUNC_6 (int *,scalar_t__,scalar_t__,int ) ;
 int FUNC_7 (int *,scalar_t__,int,int ) ;
 int FUNC_8 (struct e1000_ring*) ;
 int FUNC_9 (struct e1000_adapter*,struct net_device*,struct sk_buff*,int,int ) ;
 int FUNC_10 (struct e1000_adapter*,int,int,struct sk_buff*) ;
 int FUNC_11 (char*) ;
 int * FUNC_12 (int *,int ) ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ,int *,int) ;
 int FUNC_17 (union e1000_rx_desc_packet_split*) ;
 int FUNC_18 (struct sk_buff*,scalar_t__) ;
 int FUNC_19 () ;
 int FUNC_20 (struct sk_buff*,unsigned int,int *,int ,int) ;
 int FUNC_21 (struct sk_buff*,int) ;
 int FUNC_22 (struct sk_buff*) ;
 int FUNC_23 (struct e1000_ring*,int,int ) ;
 int FUNC_24 (struct e1000_ring*,int,int ) ;

__attribute__((used)) static bool FUNC_25(struct e1000_ring *VAR_14, int *VAR_15,
      int VAR_16)
{
 struct e1000_adapter *VAR_17 = VAR_14->adapter;
 struct e1000_hw *VAR_18 = &VAR_17->hw;
 union e1000_rx_desc_packet_split *VAR_19, *VAR_20;
 struct net_device *VAR_21 = VAR_17->netdev;
 struct pci_dev *VAR_22 = VAR_17->pdev;
 struct e1000_buffer *VAR_23, *VAR_24;
 struct e1000_ps_page *VAR_25;
 struct sk_buff *VAR_26;
 unsigned int VAR_27, VAR_28;
 u32 VAR_29, VAR_30;
 int VAR_31 = 0;
 bool VAR_32 = 0;
 unsigned int VAR_33 = 0, VAR_34 = 0;

 VAR_27 = VAR_14->next_to_clean;
 VAR_19 = FUNC_0(*VAR_14, VAR_27);
 VAR_30 = FUNC_15(VAR_19->wb.middle.status_error);
 VAR_23 = &VAR_14->buffer_info[VAR_27];

 while (VAR_30 & VAR_3) {
  if (*VAR_15 >= VAR_16)
   break;
  (*VAR_15)++;
  VAR_26 = VAR_23->skb;
  FUNC_19();


  FUNC_17(VAR_26->data - VAR_10);

  VAR_27++;
  if (VAR_27 == VAR_14->count)
   VAR_27 = 0;
  VAR_20 = FUNC_0(*VAR_14, VAR_27);
  FUNC_17(VAR_20);

  VAR_24 = &VAR_14->buffer_info[VAR_27];

  VAR_32 = 1;
  VAR_31++;
  FUNC_7(&VAR_22->dev, VAR_23->dma,
     VAR_17->rx_ps_bsize0, VAR_0);
  VAR_23->dma = 0;


  if (!(VAR_30 & VAR_4))
   VAR_17->flags2 |= VAR_7;

  if (VAR_17->flags2 & VAR_7) {
   FUNC_11("Packet Split buffers didn't pick up the full packet\n");
   FUNC_3(VAR_26);
   if (VAR_30 & VAR_4)
    VAR_17->flags2 &= ~VAR_7;
   goto next_desc;
  }

  if (VAR_30 & VAR_1) {
   FUNC_3(VAR_26);
   goto next_desc;
  }

  VAR_29 = FUNC_14(VAR_19->wb.middle.length0);

  if (!VAR_29) {
   FUNC_11("Last part of the packet spanning multiple descriptors\n");
   FUNC_3(VAR_26);
   goto next_desc;
  }


  FUNC_21(VAR_26, VAR_29);

  {



   int VAR_35 = FUNC_14(VAR_19->wb.upper.length[0]);






   if (VAR_35 && (VAR_35 <= VAR_13) &&
       ((VAR_29 + VAR_35) <= VAR_17->rx_ps_bsize0)) {
    u8 *VAR_36;

    VAR_25 = &VAR_23->ps_pages[0];





    FUNC_4(&VAR_22->dev,
       VAR_25->dma,
       VAR_11,
       VAR_0);
    VAR_36 = FUNC_12(VAR_25->page,
          VAR_9);
    FUNC_16(FUNC_22(VAR_26), VAR_36, VAR_35);
    FUNC_13(VAR_36, VAR_9);
    FUNC_5(&VAR_22->dev,
          VAR_25->dma,
          VAR_11,
          VAR_0);


    if (!(VAR_17->flags2 & VAR_6))
     VAR_35 -= 4;

    FUNC_21(VAR_26, VAR_35);
    goto copydone;
   }
  }

  for (VAR_28 = 0; VAR_28 < VAR_12; VAR_28++) {
   VAR_29 = FUNC_14(VAR_19->wb.upper.length[VAR_28]);
   if (!VAR_29)
    break;

   VAR_25 = &VAR_23->ps_pages[VAR_28];
   FUNC_6(&VAR_22->dev, VAR_25->dma, VAR_11,
           VAR_0);
   VAR_25->dma = 0;
   FUNC_20(VAR_26, VAR_28, VAR_25->page, 0, VAR_29);
   VAR_25->page = ((void*)0);
   VAR_26->len += VAR_29;
   VAR_26->data_len += VAR_29;
   VAR_26->truesize += VAR_11;
  }




  if (!(VAR_17->flags2 & VAR_6))
   FUNC_18(VAR_26, VAR_26->len - 4);

copydone:
  VAR_33 += VAR_26->len;
  VAR_34++;

  FUNC_10(VAR_17, VAR_30, FUNC_14(
   VAR_19->wb.lower.hi_dword.csum_ip.csum), VAR_26);

  if (VAR_19->wb.upper.header_status &
      FUNC_1(VAR_2))
   VAR_17->rx_hdr_split++;

  FUNC_9(VAR_17, VAR_21, VAR_26, VAR_30,
      VAR_19->wb.middle.vlan);

next_desc:
  VAR_19->wb.middle.status_error &= FUNC_2(~0xFF);
  VAR_23->skb = ((void*)0);


  if (VAR_31 >= VAR_5) {
   VAR_17->alloc_rx_buf(VAR_14, VAR_31,
           VAR_8);
   VAR_31 = 0;
  }


  VAR_19 = VAR_20;
  VAR_23 = VAR_24;

  VAR_30 = FUNC_15(VAR_19->wb.middle.status_error);
 }
 VAR_14->next_to_clean = VAR_27;

 VAR_31 = FUNC_8(VAR_14);
 if (VAR_31)
  VAR_17->alloc_rx_buf(VAR_14, VAR_31, VAR_8);

 VAR_17->total_rx_bytes += VAR_33;
 VAR_17->total_rx_packets += VAR_34;
 VAR_21->stats.rx_bytes += VAR_33;
 VAR_21->stats.rx_packets += VAR_34;
 return VAR_32;
}
