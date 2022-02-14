
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mwl8k_priv {int cookie_dma; TYPE_2__* txq; TYPE_1__* rxq; } ;
struct TYPE_6__ {void* length; void* code; } ;
struct mwl8k_cmd_set_hw_spec {TYPE_3__ header; void* total_rxd; void* num_tx_desc_per_queue; void* flags; void** tx_queue_ptrs; void* num_tx_queues; void* rx_queue_ptr; void* ps_cookie; } ;
struct ieee80211_hw {struct mwl8k_priv* priv; } ;
struct TYPE_5__ {int txd_dma; } ;
struct TYPE_4__ {int rxd_dma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* FUNC_0 (int) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (struct mwl8k_cmd_set_hw_spec*) ;
 struct mwl8k_cmd_set_hw_spec* FUNC_3 (int,int ) ;
 int FUNC_4 (struct ieee80211_hw*,TYPE_3__*) ;
 int FUNC_5 (struct mwl8k_priv*) ;

__attribute__((used)) static int FUNC_6(struct ieee80211_hw *VAR_10)
{
 struct mwl8k_priv *VAR_11 = VAR_10->priv;
 struct mwl8k_cmd_set_hw_spec *VAR_12;
 int VAR_13;
 int VAR_14;

 VAR_12 = FUNC_3(sizeof(*VAR_12), VAR_1);
 if (VAR_12 == ((void*)0))
  return -VAR_0;

 VAR_12->header.code = FUNC_0(VAR_2);
 VAR_12->header.length = FUNC_0(sizeof(*VAR_12));

 VAR_12->ps_cookie = FUNC_1(VAR_11->cookie_dma);
 VAR_12->rx_queue_ptr = FUNC_1(VAR_11->rxq[0].rxd_dma);
 VAR_12->num_tx_queues = FUNC_1(FUNC_5(VAR_11));







 for (VAR_14 = 0; VAR_14 < FUNC_5(VAR_11); VAR_14++) {
  int VAR_15 = FUNC_5(VAR_11) - 1 - VAR_14;
  VAR_12->tx_queue_ptrs[VAR_14] = FUNC_1(VAR_11->txq[VAR_15].txd_dma);
 }

 VAR_12->flags = FUNC_1(VAR_8 |
     VAR_7 |
     VAR_6 |
     VAR_4 |
     VAR_5);
 VAR_12->num_tx_desc_per_queue = FUNC_1(VAR_9);
 VAR_12->total_rxd = FUNC_1(VAR_3);

 VAR_13 = FUNC_4(VAR_10, &VAR_12->header);
 FUNC_2(VAR_12);

 return VAR_13;
}
