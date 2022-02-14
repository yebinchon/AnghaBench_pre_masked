
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct qlcnic_skb_frag {unsigned long long dma; int length; } ;
struct qlcnic_host_tx_ring {size_t sw_consumer; int * hw_consumer; int num_desc; struct qlcnic_cmd_buffer* cmd_buf_arr; } ;
struct qlcnic_cmd_buffer {int frag_count; int * skb; struct qlcnic_skb_frag* frag_array; } ;
struct TYPE_2__ {int xmit_on; int xmitfinished; } ;
struct qlcnic_adapter {int tx_clean_lock; scalar_t__ tx_timeo_cnt; TYPE_1__ stats; struct net_device* netdev; struct pci_dev* pdev; } ;
struct pci_dev {int dummy; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 size_t FUNC_1 (size_t,int ) ;
 size_t FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct pci_dev*,unsigned long long,int ,int ) ;
 int FUNC_8 (struct pci_dev*,unsigned long long,int ,int ) ;
 scalar_t__ FUNC_9 (struct qlcnic_host_tx_ring*) ;
 int FUNC_10 () ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13(struct qlcnic_adapter *VAR_2,
       struct qlcnic_host_tx_ring *VAR_3,
       int VAR_4)
{
 u32 VAR_5, VAR_6;
 int VAR_7, VAR_8, VAR_9 = 0;
 struct qlcnic_cmd_buffer *VAR_10;
 struct pci_dev *VAR_11 = VAR_2->pdev;
 struct net_device *VAR_12 = VAR_2->netdev;
 struct qlcnic_skb_frag *VAR_13;

 if (!FUNC_11(&VAR_2->tx_clean_lock))
  return 1;

 VAR_5 = VAR_3->sw_consumer;
 VAR_6 = FUNC_2(*(VAR_3->hw_consumer));

 while (VAR_5 != VAR_6) {
  VAR_10 = &VAR_3->cmd_buf_arr[VAR_5];
  if (VAR_10->skb) {
   VAR_13 = &VAR_10->frag_array[0];
   FUNC_8(VAR_11, VAR_13->dma, VAR_13->length,
      VAR_0);
   VAR_13->dma = 0ULL;
   for (VAR_7 = 1; VAR_7 < VAR_10->frag_count; VAR_7++) {
    VAR_13++;
    FUNC_7(VAR_11, VAR_13->dma, VAR_13->length,
            VAR_0);
    VAR_13->dma = 0ULL;
   }
   VAR_2->stats.xmitfinished++;
   FUNC_0(VAR_10->skb);
   VAR_10->skb = ((void*)0);
  }

  VAR_5 = FUNC_1(VAR_5, VAR_3->num_desc);
  if (++VAR_9 >= VAR_4)
   break;
 }

 if (VAR_9 && FUNC_5(VAR_12)) {
  VAR_3->sw_consumer = VAR_5;
  FUNC_10();
  if (FUNC_4(VAR_12) && FUNC_3(VAR_12)) {
   if (FUNC_9(VAR_3) > VAR_1) {
    FUNC_6(VAR_12);
    VAR_2->stats.xmit_on++;
   }
  }
  VAR_2->tx_timeo_cnt = 0;
 }
 VAR_6 = FUNC_2(*(VAR_3->hw_consumer));
 VAR_8 = (VAR_5 == VAR_6);
 FUNC_12(&VAR_2->tx_clean_lock);

 return VAR_8;
}
