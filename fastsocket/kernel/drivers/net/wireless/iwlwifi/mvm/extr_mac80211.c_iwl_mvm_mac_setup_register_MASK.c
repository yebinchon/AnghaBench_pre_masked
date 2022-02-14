
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_9__ ;
typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_13__ ;
typedef struct TYPE_16__ TYPE_12__ ;
typedef struct TYPE_15__ TYPE_11__ ;
typedef struct TYPE_14__ TYPE_10__ ;


struct iwl_mvm_vif {int dummy; } ;
struct iwl_mvm_sta {int dummy; } ;
struct iwl_mvm_phy_ctxt {int dummy; } ;
struct iwl_mvm {struct ieee80211_hw* hw; TYPE_9__* trans; TYPE_7__* fw; int rts_threshold; TYPE_4__* nvm_data; TYPE_1__* addresses; } ;
struct ieee80211_hw {int flags; char* rate_control_algorithm; int sta_data_size; int vif_data_size; int chanctx_data_size; TYPE_11__* wiphy; int max_listen_interval; int offchannel_tx_hw_queue; int queues; } ;
struct TYPE_26__ {int dev; TYPE_8__* ops; int hw_id; } ;
struct TYPE_25__ {scalar_t__ d3_resume; scalar_t__ d3_suspend; } ;
struct TYPE_19__ {int flags; int max_probe_length; } ;
struct TYPE_24__ {TYPE_6__* img; TYPE_2__ ucode_capa; } ;
struct TYPE_23__ {TYPE_5__* sec; } ;
struct TYPE_22__ {scalar_t__ len; } ;
struct TYPE_21__ {int n_hw_addrs; TYPE_3__* bands; int * hw_addr; } ;
struct TYPE_20__ {scalar_t__ n_channels; } ;
struct TYPE_18__ {int * addr; } ;
struct TYPE_17__ {scalar_t__ power_scheme; } ;
struct TYPE_16__ {int sw_crypto; } ;
struct TYPE_14__ {int flags; int * tcp; int pattern_max_len; int pattern_min_len; int n_patterns; } ;
struct TYPE_15__ {int flags; int max_remain_on_channel_duration; int n_addresses; int max_scan_ie_len; int features; TYPE_10__ wowlan; int hw_version; TYPE_3__** bands; int max_scan_ssids; TYPE_1__* addresses; int interface_modes; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 size_t VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (struct iwl_mvm*) ;
 int FUNC_4 (struct iwl_mvm*) ;
 int VAR_39 ;
 TYPE_13__ VAR_40 ;
 TYPE_12__ VAR_41 ;
 int FUNC_5 (int *,int *,int ) ;
 int FUNC_6 (int ,int) ;

int FUNC_7(struct iwl_mvm *VAR_42)
{
 struct ieee80211_hw *VAR_43 = VAR_42->hw;
 int VAR_44, VAR_45, VAR_46;


 VAR_43->flags = VAR_7 |
      VAR_8 |
      VAR_6 |
      VAR_5 |
      VAR_12 |
      VAR_10 |
      VAR_9 |
      VAR_3 |
      VAR_11;

 VAR_43->queues = VAR_15;
 VAR_43->offchannel_tx_hw_queue = VAR_17;
 VAR_43->rate_control_algorithm = "iwl-mvm-rs";






 if (VAR_42->fw->ucode_capa.flags & VAR_19 &&
     !VAR_41.sw_crypto)
  VAR_43->flags |= VAR_4;

 VAR_43->sta_data_size = sizeof(struct iwl_mvm_sta);
 VAR_43->vif_data_size = sizeof(struct iwl_mvm_vif);
 VAR_43->chanctx_data_size = sizeof(struct iwl_mvm_phy_ctxt);

 VAR_43->wiphy->interface_modes = FUNC_0(VAR_26);

 VAR_43->wiphy->flags |= VAR_28 |
       VAR_29 |
       VAR_30;

 VAR_43->wiphy->max_remain_on_channel_duration = 10000;
 VAR_43->max_listen_interval = VAR_14;


 FUNC_5(VAR_42->addresses[0].addr, VAR_42->nvm_data->hw_addr, VAR_0);
 VAR_43->wiphy->addresses = VAR_42->addresses;
 VAR_43->wiphy->n_addresses = 1;


 VAR_44 = (VAR_42->nvm_data->n_hw_addrs > 1) ?
  FUNC_6(VAR_16, VAR_42->nvm_data->n_hw_addrs) : 1;

 for (VAR_46 = 1; VAR_46 < VAR_44; VAR_46++) {
  FUNC_5(VAR_42->addresses[VAR_46].addr, VAR_42->addresses[VAR_46-1].addr,
         VAR_0);
  VAR_42->addresses[VAR_46].addr[5]++;
  VAR_43->wiphy->n_addresses++;
 }


 VAR_43->wiphy->max_scan_ie_len =
  VAR_42->fw->ucode_capa.max_probe_length - 24 - 34;
 VAR_43->wiphy->max_scan_ssids = VAR_27;

 if (VAR_42->nvm_data->bands[VAR_1].n_channels)
  VAR_43->wiphy->bands[VAR_1] =
   &VAR_42->nvm_data->bands[VAR_1];
 if (VAR_42->nvm_data->bands[VAR_2].n_channels)
  VAR_43->wiphy->bands[VAR_2] =
   &VAR_42->nvm_data->bands[VAR_2];

 VAR_43->wiphy->hw_version = VAR_42->trans->hw_id;

 if (VAR_40.power_scheme != VAR_18)
  VAR_43->wiphy->flags |= VAR_31;
 else
  VAR_43->wiphy->flags &= ~VAR_31;

 VAR_43->wiphy->features |= VAR_24 |
          VAR_25;

 VAR_42->rts_threshold = VAR_13;
 VAR_45 = FUNC_4(VAR_42);
 if (VAR_45)
  return VAR_45;

 VAR_45 = FUNC_2(VAR_42->hw);
 if (VAR_45)
  FUNC_3(VAR_42);

 return VAR_45;
}
