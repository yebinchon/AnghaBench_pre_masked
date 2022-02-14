
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mwl8k_rx_queue {scalar_t__ rxd_dma; int * rxd; int * buf; scalar_t__ tail; scalar_t__ head; scalar_t__ rxd_count; } ;
struct mwl8k_priv {TYPE_1__* rxd_ops; int pdev; struct mwl8k_rx_queue* rxq; } ;
struct ieee80211_hw {int wiphy; struct mwl8k_priv* priv; } ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_2__ {int rxd_size; int (* rxd_init ) (void*,scalar_t__) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int,int,int ) ;
 int FUNC_1 (int *,int ,int) ;
 int * FUNC_2 (int ,int,scalar_t__*) ;
 int FUNC_3 (int ,int,int *,scalar_t__) ;
 int FUNC_4 (void*,scalar_t__) ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static int FUNC_6(struct ieee80211_hw *VAR_3, int VAR_4)
{
 struct mwl8k_priv *VAR_5 = VAR_3->priv;
 struct mwl8k_rx_queue *VAR_6 = VAR_5->rxq + VAR_4;
 int VAR_7;
 int VAR_8;

 VAR_6->rxd_count = 0;
 VAR_6->head = 0;
 VAR_6->tail = 0;

 VAR_7 = VAR_2 * VAR_5->rxd_ops->rxd_size;

 VAR_6->rxd = FUNC_2(VAR_5->pdev, VAR_7, &VAR_6->rxd_dma);
 if (VAR_6->rxd == ((void*)0)) {
  FUNC_5(VAR_3->wiphy, "failed to alloc RX descriptors\n");
  return -VAR_0;
 }
 FUNC_1(VAR_6->rxd, 0, VAR_7);

 VAR_6->buf = FUNC_0(VAR_2, sizeof(*VAR_6->buf), VAR_1);
 if (VAR_6->buf == ((void*)0)) {
  FUNC_3(VAR_5->pdev, VAR_7, VAR_6->rxd, VAR_6->rxd_dma);
  return -VAR_0;
 }

 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
  int VAR_9;
  void *VAR_10;
  int VAR_11;
  dma_addr_t VAR_12;

  VAR_9 = VAR_5->rxd_ops->rxd_size;
  VAR_10 = VAR_6->rxd + (VAR_8 * VAR_5->rxd_ops->rxd_size);

  VAR_11 = VAR_8 + 1;
  if (VAR_11 == VAR_2)
   VAR_11 = 0;
  VAR_12 = VAR_6->rxd_dma + (VAR_11 * VAR_9);

  VAR_5->rxd_ops->rxd_init(VAR_10, VAR_12);
 }

 return 0;
}
