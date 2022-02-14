
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_rxon_cmd {int dev_type; int channel; int air_propagation; int ofdm_ht_single_stream_basic_rates; int ofdm_ht_dual_stream_basic_rates; int ofdm_ht_triple_stream_basic_rates; int assoc_id; int flags; int filter_flags; int wlap_bssid_addr; int node_addr; int bssid_addr; } ;
struct iwl_rxon_context {struct iwl_rxon_cmd active; struct iwl_rxon_cmd staging; } ;
struct iwl_priv {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct iwl_rxon_context*) ;

__attribute__((used)) static int FUNC_4(struct iwl_priv *VAR_2,
      struct iwl_rxon_context *VAR_3)
{
 const struct iwl_rxon_cmd *VAR_4 = &VAR_3->staging;
 const struct iwl_rxon_cmd *VAR_5 = &VAR_3->active;
 if ((!FUNC_3(VAR_3))) { FUNC_0(VAR_2, "need full RXON - " "!iwl_is_associated_ctx(ctx)" "\n"); return 1; };
 if ((!FUNC_2(VAR_4->bssid_addr, VAR_5->bssid_addr))) { FUNC_0(VAR_2, "need full RXON - " "!ether_addr_equal(staging->bssid_addr, active->bssid_addr)" "\n"); return 1; };
 if ((!FUNC_2(VAR_4->node_addr, VAR_5->node_addr))) { FUNC_0(VAR_2, "need full RXON - " "!ether_addr_equal(staging->node_addr, active->node_addr)" "\n"); return 1; };
 if ((!FUNC_2(VAR_4->wlap_bssid_addr, VAR_5->wlap_bssid_addr))) { FUNC_0(VAR_2, "need full RXON - " "!ether_addr_equal(staging->wlap_bssid_addr, active->wlap_bssid_addr)" "\n"); return 1; };

 if ((VAR_4->dev_type) != (VAR_5->dev_type)) { FUNC_0(VAR_2, "need full RXON - " "staging->dev_type" " != " "active->dev_type" " - %d != %d\n", (VAR_4->dev_type), (VAR_5->dev_type)); return 1; };
 if ((VAR_4->channel) != (VAR_5->channel)) { FUNC_0(VAR_2, "need full RXON - " "staging->channel" " != " "active->channel" " - %d != %d\n", (VAR_4->channel), (VAR_5->channel)); return 1; };
 if ((VAR_4->air_propagation) != (VAR_5->air_propagation)) { FUNC_0(VAR_2, "need full RXON - " "staging->air_propagation" " != " "active->air_propagation" " - %d != %d\n", (VAR_4->air_propagation), (VAR_5->air_propagation)); return 1; };
 if ((VAR_4->ofdm_ht_single_stream_basic_rates) != (VAR_5->ofdm_ht_single_stream_basic_rates)) { FUNC_0(VAR_2, "need full RXON - " "staging->ofdm_ht_single_stream_basic_rates" " != " "active->ofdm_ht_single_stream_basic_rates" " - %d != %d\n", (VAR_4->ofdm_ht_single_stream_basic_rates), (VAR_5->ofdm_ht_single_stream_basic_rates)); return 1; };

 if ((VAR_4->ofdm_ht_dual_stream_basic_rates) != (VAR_5->ofdm_ht_dual_stream_basic_rates)) { FUNC_0(VAR_2, "need full RXON - " "staging->ofdm_ht_dual_stream_basic_rates" " != " "active->ofdm_ht_dual_stream_basic_rates" " - %d != %d\n", (VAR_4->ofdm_ht_dual_stream_basic_rates), (VAR_5->ofdm_ht_dual_stream_basic_rates)); return 1; };

 if ((VAR_4->ofdm_ht_triple_stream_basic_rates) != (VAR_5->ofdm_ht_triple_stream_basic_rates)) { FUNC_0(VAR_2, "need full RXON - " "staging->ofdm_ht_triple_stream_basic_rates" " != " "active->ofdm_ht_triple_stream_basic_rates" " - %d != %d\n", (VAR_4->ofdm_ht_triple_stream_basic_rates), (VAR_5->ofdm_ht_triple_stream_basic_rates)); return 1; };

 if ((VAR_4->assoc_id) != (VAR_5->assoc_id)) { FUNC_0(VAR_2, "need full RXON - " "staging->assoc_id" " != " "active->assoc_id" " - %d != %d\n", (VAR_4->assoc_id), (VAR_5->assoc_id)); return 1; };






 if ((VAR_4->flags & VAR_1) != (VAR_5->flags & VAR_1)) { FUNC_0(VAR_2, "need full RXON - " "staging->flags & RXON_FLG_BAND_24G_MSK" " != " "active->flags & RXON_FLG_BAND_24G_MSK" " - %d != %d\n", (VAR_4->flags & VAR_1), (VAR_5->flags & VAR_1)); return 1; };



 if ((VAR_4->filter_flags & VAR_0) != (VAR_5->filter_flags & VAR_0)) { FUNC_0(VAR_2, "need full RXON - " "staging->filter_flags & RXON_FILTER_ASSOC_MSK" " != " "active->filter_flags & RXON_FILTER_ASSOC_MSK" " - %d != %d\n", (VAR_4->filter_flags & VAR_0), (VAR_5->filter_flags & VAR_0)); return 1; };





 return 0;
}
