
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef size_t u32 ;
struct sk_buff {scalar_t__ len; scalar_t__ data; } ;
struct qlcnic_skb_frag {int dma; int length; } ;
struct qlcnic_host_tx_ring {size_t num_desc; size_t producer; struct qlcnic_cmd_buffer* cmd_buf_arr; struct cmd_desc_type0* desc_head; } ;
struct qlcnic_cmd_buffer {int frag_count; struct qlcnic_skb_frag* frag_array; struct sk_buff* skb; } ;
struct TYPE_5__ {int txdropped; int xmitcalled; int txbytes; int tx_dma_map_error; int xmit_off; } ;
struct qlcnic_adapter {int flags; TYPE_2__ stats; scalar_t__ mac_learn; int portnum; struct pci_dev* pdev; int mac_addr; int state; struct qlcnic_host_tx_ring* tx_ring; } ;
struct pci_dev {int dummy; } ;
struct net_device {int dummy; } ;
struct ethhdr {int h_source; } ;
struct cmd_desc_type0 {void* addr_buffer4; void* addr_buffer3; void* addr_buffer2; void* addr_buffer1; int * buffer_length; } ;
typedef int netdev_tx_t ;
struct TYPE_6__ {int nr_frags; TYPE_1__* frags; } ;
struct TYPE_4__ {scalar_t__ size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct sk_buff*,int) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (struct sk_buff*) ;
 void* FUNC_5 (size_t,size_t) ;
 struct qlcnic_adapter* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (struct pci_dev*,struct sk_buff*,struct qlcnic_cmd_buffer*) ;
 int FUNC_11 (struct qlcnic_adapter*,struct cmd_desc_type0*,struct sk_buff*) ;
 int FUNC_12 (struct cmd_desc_type0*,int,scalar_t__) ;
 int FUNC_13 (struct cmd_desc_type0*,int ) ;
 scalar_t__ FUNC_14 (struct qlcnic_host_tx_ring*) ;
 int FUNC_15 (struct qlcnic_adapter*,struct cmd_desc_type0*,struct sk_buff*) ;
 int FUNC_16 (struct pci_dev*,struct sk_buff*,struct qlcnic_cmd_buffer*) ;
 int FUNC_17 (struct qlcnic_host_tx_ring*) ;
 int FUNC_18 (struct sk_buff*) ;
 TYPE_3__* FUNC_19 (struct sk_buff*) ;
 int FUNC_20 () ;
 int FUNC_21 (int ,int *) ;
 scalar_t__ FUNC_22 (int) ;

netdev_tx_t FUNC_23(struct sk_buff *VAR_6, struct net_device *VAR_7)
{
 struct qlcnic_adapter *VAR_8 = FUNC_6(VAR_7);
 struct qlcnic_host_tx_ring *VAR_9 = VAR_8->tx_ring;
 struct qlcnic_cmd_buffer *VAR_10;
 struct qlcnic_skb_frag *VAR_11;
 struct cmd_desc_type0 *VAR_12, *VAR_13;
 struct pci_dev *VAR_14;
 struct ethhdr *VAR_15;
 int VAR_16, VAR_17, VAR_18, VAR_19 = 0;
 u32 VAR_20, VAR_21;

 VAR_21 = VAR_9->num_desc;

 if (!FUNC_21(VAR_5, &VAR_8->state)) {
  FUNC_8(VAR_7);
  return VAR_0;
 }

 if (VAR_8->flags & VAR_2) {
  VAR_15 = (struct ethhdr *)VAR_6->data;
  if (FUNC_1(VAR_15->h_source, VAR_8->mac_addr))
   goto drop_packet;
 }

 VAR_18 = FUNC_19(VAR_6)->nr_frags + 1;



 if (!FUNC_18(VAR_6) && VAR_18 > VAR_3) {

  for (VAR_16 = 0; VAR_16 < (VAR_18 - VAR_3); VAR_16++)
   VAR_19 += FUNC_19(VAR_6)->frags[VAR_16].size;

  if (!FUNC_0(VAR_6, VAR_19))
   goto drop_packet;

  VAR_18 = 1 + FUNC_19(VAR_6)->nr_frags;
 }

 if (FUNC_22(FUNC_14(VAR_9) <= VAR_4)) {
  FUNC_8(VAR_7);
  if (FUNC_14(VAR_9) > VAR_4) {
   FUNC_7(VAR_7);
  } else {
   VAR_8->stats.xmit_off++;
   return VAR_0;
  }
 }

 VAR_20 = VAR_9->producer;
 VAR_10 = &VAR_9->cmd_buf_arr[VAR_20];
 VAR_14 = VAR_8->pdev;
 VAR_13 = &VAR_9->desc_head[VAR_20];
 VAR_12 = &VAR_9->desc_head[VAR_20];
 FUNC_9((u64 *)VAR_12);

 if (FUNC_10(VAR_14, VAR_6, VAR_10)) {
  VAR_8->stats.tx_dma_map_error++;
  goto drop_packet;
 }

 VAR_10->skb = VAR_6;
 VAR_10->frag_count = VAR_18;

 FUNC_12(VAR_13, VAR_18, VAR_6->len);
 FUNC_13(VAR_13, VAR_8->portnum);

 for (VAR_16 = 0; VAR_16 < VAR_18; VAR_16++) {
  VAR_17 = VAR_16 % 4;

  if ((VAR_17 == 0) && (VAR_16 > 0)) {

   VAR_20 = FUNC_5(VAR_20, VAR_21);
   VAR_12 = &VAR_9->desc_head[VAR_20];
   FUNC_9((u64 *)VAR_12);
   VAR_9->cmd_buf_arr[VAR_20].skb = ((void*)0);
  }

  VAR_11 = &VAR_10->frag_array[VAR_16];
  VAR_12->buffer_length[VAR_17] = FUNC_2(VAR_11->length);
  switch (VAR_17) {
  case 0:
   VAR_12->addr_buffer1 = FUNC_3(VAR_11->dma);
   break;
  case 1:
   VAR_12->addr_buffer2 = FUNC_3(VAR_11->dma);
   break;
  case 2:
   VAR_12->addr_buffer3 = FUNC_3(VAR_11->dma);
   break;
  case 3:
   VAR_12->addr_buffer4 = FUNC_3(VAR_11->dma);
   break;
  }
 }

 VAR_9->producer = FUNC_5(VAR_20, VAR_21);
 FUNC_20();

 if (FUNC_22(FUNC_15(VAR_8, VAR_13, VAR_6)))
  goto unwind_buff;

 if (VAR_8->mac_learn)
  FUNC_11(VAR_8, VAR_13, VAR_6);

 VAR_8->stats.txbytes += VAR_6->len;
 VAR_8->stats.xmitcalled++;

 FUNC_17(VAR_9);

 return VAR_1;

unwind_buff:
 FUNC_16(VAR_14, VAR_6, VAR_10);
drop_packet:
 VAR_8->stats.txdropped++;
 FUNC_4(VAR_6);
 return VAR_1;
}
