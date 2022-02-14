
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct il_rxon_cmd {int dummy; } ;
struct TYPE_9__ {void* bssid_addr; int flags; } ;
struct TYPE_6__ {int qos_active; } ;
struct il_priv {int beacon_enabled; void* bssid; scalar_t__ band; int mutex; TYPE_3__* ops; TYPE_4__ staging; int active; int timestamp; int lock; TYPE_1__ qos_data; } ;
struct TYPE_7__ {scalar_t__ enable_beacon; } ;
struct ieee80211_vif {scalar_t__ type; TYPE_2__ bss_conf; } ;
struct ieee80211_hw {struct il_priv* priv; } ;
struct ieee80211_bss_conf {TYPE_4__* bssid; int ibss_joined; scalar_t__ aid; int sync_tsf; scalar_t__ assoc; scalar_t__ use_cts_prot; scalar_t__ use_short_preamble; int qos; } ;
struct TYPE_8__ {int (* manage_ibss_station ) (struct il_priv*,struct ieee80211_vif*,int ) ;int (* config_ap ) (struct il_priv*) ;int (* post_associate ) (struct il_priv*) ;int (* set_rxon_chain ) (struct il_priv*) ;} ;


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
 int FUNC_0 (char*,...) ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_1 (char*,char*,TYPE_4__*) ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_2 (struct ieee80211_hw*,struct ieee80211_vif*) ;
 int FUNC_3 (struct il_priv*,struct ieee80211_vif*) ;
 int FUNC_4 (struct il_priv*) ;
 scalar_t__ FUNC_5 (struct il_priv*) ;
 int FUNC_6 (struct il_priv*) ;
 scalar_t__ FUNC_7 (struct il_priv*,int) ;
 int FUNC_8 (struct il_priv*) ;
 int FUNC_9 (struct il_priv*,struct ieee80211_vif*) ;
 int FUNC_10 (struct il_priv*) ;
 int FUNC_11 (void*,TYPE_4__*,int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,unsigned long) ;
 int FUNC_15 (int *,unsigned long) ;
 int FUNC_16 (struct il_priv*) ;
 int FUNC_17 (struct il_priv*) ;
 int FUNC_18 (struct il_priv*) ;
 int FUNC_19 (struct il_priv*,struct ieee80211_vif*,int ) ;

void
FUNC_20(struct ieee80211_hw *VAR_16, struct ieee80211_vif *VAR_17,
   struct ieee80211_bss_conf *VAR_18, u32 VAR_19)
{
 struct il_priv *VAR_20 = VAR_16->priv;
 int VAR_21;

 FUNC_12(&VAR_20->mutex);
 FUNC_0("enter: changes 0x%x\n", VAR_19);

 if (!FUNC_4(VAR_20)) {
  FUNC_0("leave - not alive\n");
  FUNC_13(&VAR_20->mutex);
  return;
 }

 if (VAR_19 & VAR_9) {
  unsigned long VAR_22;

  FUNC_14(&VAR_20->lock, VAR_22);
  VAR_20->qos_data.qos_active = VAR_18->qos;
  FUNC_10(VAR_20);
  FUNC_15(&VAR_20->lock, VAR_22);
 }

 if (VAR_19 & VAR_3) {

  if (VAR_17->bss_conf.enable_beacon)
   VAR_20->beacon_enabled = 1;
  else
   VAR_20->beacon_enabled = 0;
 }

 if (VAR_19 & VAR_4) {
  FUNC_0("BSSID %pM\n", VAR_18->bssid);






  if (FUNC_7(VAR_20, 100)) {
   FUNC_0("leave - scan abort failed\n");
   FUNC_13(&VAR_20->mutex);
   return;
  }


  FUNC_11(VAR_20->staging.bssid_addr, VAR_18->bssid, VAR_10);


  FUNC_11(VAR_20->bssid, VAR_18->bssid, VAR_10);
 }






 if (VAR_17->type == VAR_12 && (VAR_19 & VAR_2))
  FUNC_2(VAR_16, VAR_17);

 if (VAR_19 & VAR_6) {
  FUNC_0("ERP_PREAMBLE %d\n", VAR_18->use_short_preamble);
  if (VAR_18->use_short_preamble)
   VAR_20->staging.flags |= VAR_14;
  else
   VAR_20->staging.flags &= ~VAR_14;
 }

 if (VAR_19 & VAR_5) {
  FUNC_0("ERP_CTS %d\n", VAR_18->use_cts_prot);
  if (VAR_18->use_cts_prot && VAR_20->band != VAR_11)
   VAR_20->staging.flags |= VAR_15;
  else
   VAR_20->staging.flags &= ~VAR_15;
  if (VAR_18->use_cts_prot)
   VAR_20->staging.flags |= VAR_13;
  else
   VAR_20->staging.flags &= ~VAR_13;
 }

 if (VAR_19 & VAR_1) {
 }

 if (VAR_19 & VAR_7) {
  FUNC_3(VAR_20, VAR_17);

  if (VAR_20->ops->set_rxon_chain)
   VAR_20->ops->set_rxon_chain(VAR_20);
 }

 if (VAR_19 & VAR_0) {
  FUNC_0("ASSOC %d\n", VAR_18->assoc);
  if (VAR_18->assoc) {
   VAR_20->timestamp = VAR_18->sync_tsf;

   if (!FUNC_6(VAR_20))
    VAR_20->ops->post_associate(VAR_20);
  } else
   FUNC_9(VAR_20, VAR_17);
 }

 if (VAR_19 && FUNC_5(VAR_20) && VAR_18->aid) {
  FUNC_0("Changes (%#x) while associated\n", VAR_19);
  VAR_21 = FUNC_8(VAR_20);
  if (!VAR_21) {

   FUNC_11((void *)&VAR_20->active, &VAR_20->staging,
          sizeof(struct il_rxon_cmd));
  }
 }

 if (VAR_19 & VAR_3) {
  if (VAR_17->bss_conf.enable_beacon) {
   FUNC_11(VAR_20->staging.bssid_addr, VAR_18->bssid,
          VAR_10);
   FUNC_11(VAR_20->bssid, VAR_18->bssid, VAR_10);
   VAR_20->ops->config_ap(VAR_20);
  } else
   FUNC_9(VAR_20, VAR_17);
 }

 if (VAR_19 & VAR_8) {
  VAR_21 = VAR_20->ops->manage_ibss_station(VAR_20, VAR_17,
         VAR_18->ibss_joined);
  if (VAR_21)
   FUNC_1("failed to %s IBSS station %pM\n",
          VAR_18->ibss_joined ? "add" : "remove",
          VAR_18->bssid);
 }

 FUNC_0("leave\n");
 FUNC_13(&VAR_20->mutex);
}
