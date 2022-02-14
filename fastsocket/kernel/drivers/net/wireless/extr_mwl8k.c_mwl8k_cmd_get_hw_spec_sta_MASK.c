
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mwl8k_priv {int cookie_dma; int ap_macids_supported; int sta_macids_supported; int hw_rev; int fw_rev; int num_mcaddrs; TYPE_2__* txq; TYPE_1__* rxq; } ;
struct TYPE_6__ {void* length; void* code; } ;
struct mwl8k_cmd_get_hw_spec_sta {int caps; int hw_rev; int fw_rev; int num_mcaddrs; int perm_addr; TYPE_3__ header; void* total_rxd; void* num_tx_desc_per_queue; void** tx_queue_ptrs; void* num_tx_queues; void* rx_queue_ptr; void* ps_cookie; } ;
struct ieee80211_hw {struct mwl8k_priv* priv; } ;
struct TYPE_5__ {int txd_dma; } ;
struct TYPE_4__ {int rxd_dma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ieee80211_hw*,int ) ;
 void* FUNC_1 (int) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (struct mwl8k_cmd_get_hw_spec_sta*) ;
 struct mwl8k_cmd_get_hw_spec_sta* FUNC_4 (int,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int,int) ;
 int FUNC_8 (struct ieee80211_hw*,TYPE_3__*) ;
 int FUNC_9 (struct ieee80211_hw*,int ) ;
 int FUNC_10 (struct mwl8k_priv*) ;

__attribute__((used)) static int FUNC_11(struct ieee80211_hw *VAR_5)
{
 struct mwl8k_priv *VAR_6 = VAR_5->priv;
 struct mwl8k_cmd_get_hw_spec_sta *VAR_7;
 int VAR_8;
 int VAR_9;

 VAR_7 = FUNC_4(sizeof(*VAR_7), VAR_1);
 if (VAR_7 == ((void*)0))
  return -VAR_0;

 VAR_7->header.code = FUNC_1(VAR_2);
 VAR_7->header.length = FUNC_1(sizeof(*VAR_7));

 FUNC_7(VAR_7->perm_addr, 0xff, sizeof(VAR_7->perm_addr));
 VAR_7->ps_cookie = FUNC_2(VAR_6->cookie_dma);
 VAR_7->rx_queue_ptr = FUNC_2(VAR_6->rxq[0].rxd_dma);
 VAR_7->num_tx_queues = FUNC_2(FUNC_10(VAR_6));
 for (VAR_9 = 0; VAR_9 < FUNC_10(VAR_6); VAR_9++)
  VAR_7->tx_queue_ptrs[VAR_9] = FUNC_2(VAR_6->txq[VAR_9].txd_dma);
 VAR_7->num_tx_desc_per_queue = FUNC_2(VAR_4);
 VAR_7->total_rxd = FUNC_2(VAR_3);

 VAR_8 = FUNC_8(VAR_5, &VAR_7->header);

 if (!VAR_8) {
  FUNC_0(VAR_5, VAR_7->perm_addr);
  VAR_6->num_mcaddrs = FUNC_5(VAR_7->num_mcaddrs);
  VAR_6->fw_rev = FUNC_6(VAR_7->fw_rev);
  VAR_6->hw_rev = VAR_7->hw_rev;
  FUNC_9(VAR_5, FUNC_6(VAR_7->caps));
  VAR_6->ap_macids_supported = 0x00000000;
  VAR_6->sta_macids_supported = 0x00000001;
 }

 FUNC_3(VAR_7);
 return VAR_8;
}
