
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct iwl_vif_priv {struct iwl_rxon_context* ctx; } ;
struct TYPE_5__ {TYPE_1__* ac; } ;
struct TYPE_6__ {TYPE_2__ def_qos_parm; } ;
struct iwl_rxon_context {TYPE_3__ qos_data; } ;
struct iwl_priv {int mutex; } ;
struct ieee80211_vif {scalar_t__ drv_priv; } ;
struct ieee80211_tx_queue_params {int cw_min; int cw_max; int txop; int aifs; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_4__ {scalar_t__ reserved1; void* edca_txop; int aifsn; void* cw_max; void* cw_min; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct iwl_priv*,char*,...) ;
 struct iwl_priv* FUNC_1 (struct ieee80211_hw*) ;
 scalar_t__ FUNC_2 (int) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (struct iwl_priv*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct ieee80211_hw *VAR_3,
         struct ieee80211_vif *VAR_4, u16 VAR_5,
         const struct ieee80211_tx_queue_params *VAR_6)
{
 struct iwl_priv *VAR_7 = FUNC_1(VAR_3);
 struct iwl_vif_priv *VAR_8 = (void *)VAR_4->drv_priv;
 struct iwl_rxon_context *VAR_9 = VAR_8->ctx;
 int VAR_10;

 if (FUNC_2(!VAR_9))
  return -VAR_1;

 FUNC_0(VAR_7, "enter\n");

 if (!FUNC_4(VAR_7)) {
  FUNC_0(VAR_7, "leave - RF not ready\n");
  return -VAR_2;
 }

 if (VAR_5 >= VAR_0) {
  FUNC_0(VAR_7, "leave - queue >= AC_NUM %d\n", VAR_5);
  return 0;
 }

 VAR_10 = VAR_0 - 1 - VAR_5;

 FUNC_5(&VAR_7->mutex);

 VAR_9->qos_data.def_qos_parm.ac[VAR_10].cw_min =
  FUNC_3(VAR_6->cw_min);
 VAR_9->qos_data.def_qos_parm.ac[VAR_10].cw_max =
  FUNC_3(VAR_6->cw_max);
 VAR_9->qos_data.def_qos_parm.ac[VAR_10].aifsn = VAR_6->aifs;
 VAR_9->qos_data.def_qos_parm.ac[VAR_10].edca_txop =
   FUNC_3((VAR_6->txop * 32));

 VAR_9->qos_data.def_qos_parm.ac[VAR_10].reserved1 = 0;

 FUNC_6(&VAR_7->mutex);

 FUNC_0(VAR_7, "leave\n");
 return 0;
}
