
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int gen; void* addr; } ;
union Vmxnet3_GenericDesc {void** dword; TYPE_2__ txd; } ;
typedef int u32 ;
struct TYPE_8__ {int gen; int next2fill; union Vmxnet3_GenericDesc* base; } ;
struct TYPE_6__ {scalar_t__ basePA; } ;
struct vmxnet3_tx_queue {TYPE_3__ tx_ring; struct vmxnet3_tx_buf_info* buf_info; TYPE_1__ data_ring; } ;
struct vmxnet3_tx_ctx {int copy_size; union Vmxnet3_GenericDesc* sop_txd; union Vmxnet3_GenericDesc* eop_txd; } ;
struct vmxnet3_tx_buf_info {int len; int sop_idx; struct sk_buff* skb; scalar_t__ dma_addr; int map_type; } ;
struct vmxnet3_adapter {int netdev; TYPE_5__* pdev; } ;
struct skb_frag_struct {int dummy; } ;
struct sk_buff {scalar_t__ data; } ;
struct pci_dev {int dummy; } ;
struct Vmxnet3_TxDataDesc {int dummy; } ;
struct TYPE_10__ {int dev; } ;
struct TYPE_9__ {int nr_frags; struct skb_frag_struct* frags; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_1 (int) ;
 void* FUNC_2 (scalar_t__) ;
 void* FUNC_3 (void*) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (int ,char*,int,int ,void*,void*) ;
 scalar_t__ FUNC_6 (TYPE_5__*,scalar_t__,int,int ) ;
 scalar_t__ FUNC_7 (int *,struct skb_frag_struct const*,unsigned long,int,int ) ;
 int FUNC_8 (struct skb_frag_struct const*) ;
 int FUNC_9 (struct sk_buff*) ;
 TYPE_4__* FUNC_10 (struct sk_buff*) ;
 int FUNC_11 (TYPE_3__*) ;

__attribute__((used)) static void
FUNC_12(struct sk_buff *VAR_7, struct vmxnet3_tx_ctx *VAR_8,
  struct vmxnet3_tx_queue *VAR_9, struct pci_dev *VAR_10,
  struct vmxnet3_adapter *VAR_11)
{
 u32 VAR_12, VAR_13;
 unsigned long VAR_14;
 int VAR_15;
 union Vmxnet3_GenericDesc *VAR_16;
 struct vmxnet3_tx_buf_info *VAR_17 = ((void*)0);

 FUNC_0(VAR_8->copy_size > FUNC_9(VAR_7));


 VAR_12 = (VAR_9->tx_ring.gen ^ 0x1) << VAR_6;

 VAR_8->sop_txd = VAR_9->tx_ring.base + VAR_9->tx_ring.next2fill;
 VAR_16 = VAR_8->sop_txd;


 if (VAR_8->copy_size) {
  VAR_8->sop_txd->txd.addr = FUNC_2(VAR_9->data_ring.basePA +
     VAR_9->tx_ring.next2fill *
     sizeof(struct Vmxnet3_TxDataDesc));
  VAR_8->sop_txd->dword[2] = FUNC_1(VAR_12 | VAR_8->copy_size);
  VAR_8->sop_txd->dword[3] = 0;

  VAR_17 = VAR_9->buf_info + VAR_9->tx_ring.next2fill;
  VAR_17->map_type = VAR_2;

  FUNC_5(VAR_11->netdev,
   "txd[%u]: 0x%Lx 0x%x 0x%x\n",
   VAR_9->tx_ring.next2fill,
   FUNC_4(VAR_8->sop_txd->txd.addr),
   VAR_8->sop_txd->dword[2], VAR_8->sop_txd->dword[3]);
  FUNC_11(&VAR_9->tx_ring);


  VAR_12 = VAR_9->tx_ring.gen << VAR_6;
 }


 VAR_13 = FUNC_9(VAR_7) - VAR_8->copy_size;
 VAR_14 = VAR_8->copy_size;
 while (VAR_13) {
  u32 VAR_18;

  if (VAR_13 < VAR_5) {
   VAR_18 = VAR_13;
   VAR_12 |= VAR_13;
  } else {
   VAR_18 = VAR_5;

  }

  VAR_17 = VAR_9->buf_info + VAR_9->tx_ring.next2fill;
  VAR_17->map_type = VAR_4;
  VAR_17->dma_addr = FUNC_6(VAR_11->pdev,
    VAR_7->data + VAR_14, VAR_18,
    VAR_1);

  VAR_17->len = VAR_18;

  VAR_16 = VAR_9->tx_ring.base + VAR_9->tx_ring.next2fill;
  FUNC_0(VAR_16->txd.gen == VAR_9->tx_ring.gen);

  VAR_16->txd.addr = FUNC_2(VAR_17->dma_addr);
  VAR_16->dword[2] = FUNC_1(VAR_12);
  VAR_16->dword[3] = 0;

  FUNC_5(VAR_11->netdev,
   "txd[%u]: 0x%Lx 0x%x 0x%x\n",
   VAR_9->tx_ring.next2fill, FUNC_4(VAR_16->txd.addr),
   FUNC_3(VAR_16->dword[2]), VAR_16->dword[3]);
  FUNC_11(&VAR_9->tx_ring);
  VAR_12 = VAR_9->tx_ring.gen << VAR_6;

  VAR_13 -= VAR_18;
  VAR_14 += VAR_18;
 }

 for (VAR_15 = 0; VAR_15 < FUNC_10(VAR_7)->nr_frags; VAR_15++) {
  const struct skb_frag_struct *VAR_19 = &FUNC_10(VAR_7)->frags[VAR_15];
  u32 VAR_20;

  VAR_14 = 0;
  VAR_13 = FUNC_8(VAR_19);
  while (VAR_13) {
   VAR_17 = VAR_9->buf_info + VAR_9->tx_ring.next2fill;
   if (VAR_13 < VAR_5) {
    VAR_20 = VAR_13;
    VAR_12 |= VAR_13;
   } else {
    VAR_20 = VAR_5;

   }
   VAR_17->map_type = VAR_3;
   VAR_17->dma_addr = FUNC_7(&VAR_11->pdev->dev, VAR_19,
        VAR_14, VAR_20,
        VAR_0);

   VAR_17->len = VAR_20;

   VAR_16 = VAR_9->tx_ring.base + VAR_9->tx_ring.next2fill;
   FUNC_0(VAR_16->txd.gen == VAR_9->tx_ring.gen);

   VAR_16->txd.addr = FUNC_2(VAR_17->dma_addr);
   VAR_16->dword[2] = FUNC_1(VAR_12);
   VAR_16->dword[3] = 0;

   FUNC_5(VAR_11->netdev,
    "txd[%u]: 0x%llu %u %u\n",
    VAR_9->tx_ring.next2fill, FUNC_4(VAR_16->txd.addr),
    FUNC_3(VAR_16->dword[2]), VAR_16->dword[3]);
   FUNC_11(&VAR_9->tx_ring);
   VAR_12 = VAR_9->tx_ring.gen << VAR_6;

   VAR_13 -= VAR_20;
   VAR_14 += VAR_20;
  }
 }

 VAR_8->eop_txd = VAR_16;


 VAR_17->skb = VAR_7;
 VAR_17->sop_idx = VAR_8->sop_txd - VAR_9->tx_ring.base;
}
