
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


struct spider_net_hw_descr {int dmac_cmd_status; scalar_t__ data_status; scalar_t__ next_descr_addr; int buf_size; int buf_addr; } ;
struct spider_net_descr_chain {scalar_t__ head; int lock; TYPE_2__* tail; } ;
struct spider_net_descr {scalar_t__ next; int bus_addr; TYPE_4__* prev; struct sk_buff* skb; struct spider_net_hw_descr* hwdescr; } ;
struct TYPE_7__ {int tx_iommu_map_error; } ;
struct spider_net_card {TYPE_5__* netdev; int pdev; struct spider_net_descr_chain tx_chain; TYPE_1__ spider_stats; } ;
struct sk_buff {scalar_t__ ip_summed; int len; int data; } ;
typedef int dma_addr_t ;
struct TYPE_12__ {int protocol; } ;
struct TYPE_11__ {int trans_start; int dev; } ;
struct TYPE_10__ {TYPE_3__* hwdescr; } ;
struct TYPE_9__ {int next_descr_addr; } ;
struct TYPE_8__ {scalar_t__ prev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,char*,int ,int ) ;
 TYPE_6__* FUNC_1 (struct sk_buff*) ;
 int VAR_7 ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 (struct spider_net_card*) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,int ,int ) ;
 int FUNC_6 (int ,int ,int ,int ) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 () ;

__attribute__((used)) static int
FUNC_10(struct spider_net_card *VAR_8,
       struct sk_buff *VAR_9)
{
 struct spider_net_descr_chain *VAR_10 = &VAR_8->tx_chain;
 struct spider_net_descr *VAR_11;
 struct spider_net_hw_descr *VAR_12;
 dma_addr_t VAR_13;
 unsigned long VAR_14;

 VAR_13 = FUNC_5(VAR_8->pdev, VAR_9->data, VAR_9->len, VAR_2);
 if (FUNC_4(VAR_8->pdev, VAR_13)) {
  if (FUNC_3(VAR_8) && FUNC_2())
   FUNC_0(&VAR_8->netdev->dev, "could not iommu-map packet (%p, %i). "
      "Dropping packet\n", VAR_9->data, VAR_9->len);
  VAR_8->spider_stats.tx_iommu_map_error++;
  return -VAR_1;
 }

 FUNC_7(&VAR_10->lock, VAR_14);
 VAR_11 = VAR_8->tx_chain.head;
 if (VAR_11->next == VAR_10->tail->prev) {
  FUNC_8(&VAR_10->lock, VAR_14);
  FUNC_6(VAR_8->pdev, VAR_13, VAR_9->len, VAR_2);
  return -VAR_1;
 }
 VAR_12 = VAR_11->hwdescr;
 VAR_10->head = VAR_11->next;

 VAR_11->skb = VAR_9;
 VAR_12->buf_addr = VAR_13;
 VAR_12->buf_size = VAR_9->len;
 VAR_12->next_descr_addr = 0;
 VAR_12->data_status = 0;

 VAR_12->dmac_cmd_status =
   VAR_3 | VAR_5;
 FUNC_8(&VAR_10->lock, VAR_14);

 if (VAR_9->ip_summed == VAR_0)
  switch (FUNC_1(VAR_9)->protocol) {
  case 129:
   VAR_12->dmac_cmd_status |= VAR_4;
   break;
  case 128:
   VAR_12->dmac_cmd_status |= VAR_6;
   break;
  }


 FUNC_9();
 VAR_11->prev->hwdescr->next_descr_addr = VAR_11->bus_addr;

 VAR_8->netdev->trans_start = VAR_7;
 return 0;
}
