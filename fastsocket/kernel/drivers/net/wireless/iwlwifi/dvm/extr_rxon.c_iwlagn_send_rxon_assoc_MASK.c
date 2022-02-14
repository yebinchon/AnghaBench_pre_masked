
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_rxon_cmd {scalar_t__ flags; scalar_t__ filter_flags; scalar_t__ cck_basic_rates; scalar_t__ ofdm_ht_single_stream_basic_rates; scalar_t__ ofdm_ht_dual_stream_basic_rates; scalar_t__ ofdm_ht_triple_stream_basic_rates; scalar_t__ acquisition_data; scalar_t__ rx_chain; scalar_t__ ofdm_basic_rates; } ;
struct iwl_rxon_context {int rxon_assoc_cmd; struct iwl_rxon_cmd staging; struct iwl_rxon_cmd active; } ;
struct iwl_rxon_assoc_cmd {scalar_t__ flags; scalar_t__ filter_flags; scalar_t__ ofdm_basic_rates; scalar_t__ cck_basic_rates; scalar_t__ ofdm_ht_single_stream_basic_rates; scalar_t__ ofdm_ht_dual_stream_basic_rates; scalar_t__ rx_chain_select_flags; scalar_t__ ofdm_ht_triple_stream_basic_rates; scalar_t__ acquisition_data; scalar_t__ reserved3; scalar_t__ reserved2; scalar_t__ reserved1; } ;
struct iwl_priv {int dummy; } ;
typedef int rxon_assoc ;


 int VAR_0 ;
 int FUNC_0 (struct iwl_priv*,char*) ;
 int FUNC_1 (struct iwl_priv*,int ,int ,int,struct iwl_rxon_assoc_cmd*) ;

__attribute__((used)) static int FUNC_2(struct iwl_priv *VAR_1,
      struct iwl_rxon_context *VAR_2)
{
 int VAR_3 = 0;
 struct iwl_rxon_assoc_cmd VAR_4;
 const struct iwl_rxon_cmd *VAR_5 = &VAR_2->staging;
 const struct iwl_rxon_cmd *VAR_6 = &VAR_2->active;

 if ((VAR_5->flags == VAR_6->flags) &&
     (VAR_5->filter_flags == VAR_6->filter_flags) &&
     (VAR_5->cck_basic_rates == VAR_6->cck_basic_rates) &&
     (VAR_5->ofdm_ht_single_stream_basic_rates ==
      VAR_6->ofdm_ht_single_stream_basic_rates) &&
     (VAR_5->ofdm_ht_dual_stream_basic_rates ==
      VAR_6->ofdm_ht_dual_stream_basic_rates) &&
     (VAR_5->ofdm_ht_triple_stream_basic_rates ==
      VAR_6->ofdm_ht_triple_stream_basic_rates) &&
     (VAR_5->acquisition_data == VAR_6->acquisition_data) &&
     (VAR_5->rx_chain == VAR_6->rx_chain) &&
     (VAR_5->ofdm_basic_rates == VAR_6->ofdm_basic_rates)) {
  FUNC_0(VAR_1, "Using current RXON_ASSOC.  Not resending.\n");
  return 0;
 }

 VAR_4.flags = VAR_2->staging.flags;
 VAR_4.filter_flags = VAR_2->staging.filter_flags;
 VAR_4.ofdm_basic_rates = VAR_2->staging.ofdm_basic_rates;
 VAR_4.cck_basic_rates = VAR_2->staging.cck_basic_rates;
 VAR_4.reserved1 = 0;
 VAR_4.reserved2 = 0;
 VAR_4.reserved3 = 0;
 VAR_4.ofdm_ht_single_stream_basic_rates =
     VAR_2->staging.ofdm_ht_single_stream_basic_rates;
 VAR_4.ofdm_ht_dual_stream_basic_rates =
     VAR_2->staging.ofdm_ht_dual_stream_basic_rates;
 VAR_4.rx_chain_select_flags = VAR_2->staging.rx_chain;
 VAR_4.ofdm_ht_triple_stream_basic_rates =
   VAR_2->staging.ofdm_ht_triple_stream_basic_rates;
 VAR_4.acquisition_data = VAR_2->staging.acquisition_data;

 VAR_3 = FUNC_1(VAR_1, VAR_2->rxon_assoc_cmd,
    VAR_0, sizeof(VAR_4), &VAR_4);
 return VAR_3;
}
