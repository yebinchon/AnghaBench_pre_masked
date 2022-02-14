
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_13__ {int flags; } ;
struct TYPE_16__ {TYPE_5__ general_params; } ;
struct TYPE_14__ {TYPE_8__ lq; } ;
struct iwl_station_priv {TYPE_6__ lq_sta; } ;
struct TYPE_12__ {int use_rts_for_aggregation; } ;
struct iwl_priv {int mutex; TYPE_4__ hw_params; int agg_tids_count; TYPE_3__* trans; TYPE_1__* nvm_data; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_sta {int addr; scalar_t__ drv_priv; } ;
struct ieee80211_hw {int dummy; } ;
typedef enum ieee80211_ampdu_mlme_action { ____Placeholder_ieee80211_ampdu_mlme_action } ieee80211_ampdu_mlme_action ;
struct TYPE_15__ {int disable_11n; } ;
struct TYPE_11__ {TYPE_2__* ops; } ;
struct TYPE_10__ {int txq_enable; } ;
struct TYPE_9__ {int sku_cap_11n_enable; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;







 int FUNC_0 (struct iwl_priv*,char*,...) ;
 int FUNC_1 (struct iwl_priv*,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 struct iwl_priv* FUNC_2 (struct ieee80211_hw*) ;
 int VAR_5 ;
 int FUNC_3 (struct ieee80211_vif*) ;
 int FUNC_4 (struct iwl_priv*,int ,TYPE_8__*,int ,int) ;
 int FUNC_5 (struct iwl_priv*,struct ieee80211_sta*,int ,int ) ;
 int FUNC_6 (struct iwl_priv*,struct ieee80211_sta*,int ) ;
 int FUNC_7 (struct iwl_priv*,struct ieee80211_vif*,struct ieee80211_sta*,int ) ;
 int FUNC_8 (struct iwl_priv*,struct ieee80211_vif*,struct ieee80211_sta*,int ,int ) ;
 int FUNC_9 (struct iwl_priv*,struct ieee80211_vif*,struct ieee80211_sta*,int ,int *) ;
 int FUNC_10 (struct iwl_priv*,struct ieee80211_vif*,struct ieee80211_sta*,int ) ;
 TYPE_7__ VAR_6 ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13(struct ieee80211_hw *VAR_7,
       struct ieee80211_vif *VAR_8,
       enum ieee80211_ampdu_mlme_action VAR_9,
       struct ieee80211_sta *VAR_10, u16 VAR_11, u16 *VAR_12,
       u8 VAR_13)
{
 struct iwl_priv *VAR_14 = FUNC_2(VAR_7);
 int VAR_15 = -VAR_2;
 struct iwl_station_priv *VAR_16 = (void *) VAR_10->drv_priv;

 FUNC_0(VAR_14, "A-MPDU action on addr %pM tid %d\n",
       VAR_10->addr, VAR_11);

 if (!(VAR_14->nvm_data->sku_cap_11n_enable))
  return -VAR_1;

 FUNC_1(VAR_14, "enter\n");
 FUNC_11(&VAR_14->mutex);

 switch (VAR_9) {
 case 134:
  if (VAR_6.disable_11n & VAR_3)
   break;
  FUNC_0(VAR_14, "start Rx\n");
  VAR_15 = FUNC_5(VAR_14, VAR_10, VAR_11, *VAR_12);
  break;
 case 133:
  FUNC_0(VAR_14, "stop Rx\n");
  VAR_15 = FUNC_6(VAR_14, VAR_10, VAR_11);
  break;
 case 131:
  if (!VAR_14->trans->ops->txq_enable)
   break;
  if (VAR_6.disable_11n & VAR_4)
   break;
  FUNC_0(VAR_14, "start Tx\n");
  VAR_15 = FUNC_9(VAR_14, VAR_8, VAR_10, VAR_11, VAR_12);
  break;
 case 129:
 case 128:
  FUNC_0(VAR_14, "Flush Tx\n");
  VAR_15 = FUNC_7(VAR_14, VAR_8, VAR_10, VAR_11);
  break;
 case 130:
  FUNC_0(VAR_14, "stop Tx\n");
  VAR_15 = FUNC_10(VAR_14, VAR_8, VAR_10, VAR_11);
  if ((VAR_15 == 0) && (VAR_14->agg_tids_count > 0)) {
   VAR_14->agg_tids_count--;
   FUNC_0(VAR_14, "priv->agg_tids_count = %u\n",
         VAR_14->agg_tids_count);
  }
  if (!VAR_14->agg_tids_count &&
      VAR_14->hw_params.use_rts_for_aggregation) {



   VAR_16->lq_sta.lq.general_params.flags &=
    ~VAR_5;
   FUNC_4(VAR_14, FUNC_3(VAR_8),
     &VAR_16->lq_sta.lq, VAR_0, 0);
  }
  break;
 case 132:
  VAR_15 = FUNC_8(VAR_14, VAR_8, VAR_10, VAR_11, VAR_13);
  break;
 }
 FUNC_12(&VAR_14->mutex);
 FUNC_1(VAR_14, "leave\n");
 return VAR_15;
}
