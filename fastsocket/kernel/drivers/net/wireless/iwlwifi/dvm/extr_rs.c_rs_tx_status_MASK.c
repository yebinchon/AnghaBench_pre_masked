
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {scalar_t__ data; } ;
struct iwl_station_priv {struct iwl_rxon_context* ctx; } ;
struct iwl_scale_tbl_info {int is_SGI; int is_ht40; int is_dup; int ant_type; int lq_type; } ;
struct iwl_rxon_context {int dummy; } ;
struct iwl_priv {scalar_t__ band; scalar_t__ tm_fixed_rate; TYPE_2__* cfg; } ;
struct iwl_op_mode {int dummy; } ;
struct iwl_link_quality_cmd {TYPE_3__* rs_table; } ;
struct iwl_lq_sta {scalar_t__ missed_rate_counter; size_t active_tbl; int total_success; int total_failed; int last_rate_n_flags; scalar_t__ dbg_fixed_rate; scalar_t__ stay_in_tbl; struct iwl_scale_tbl_info* lq_info; struct iwl_link_quality_cmd lq; int drv; } ;
struct TYPE_10__ {int antenna; int ampdu_len; int ampdu_ack_len; TYPE_4__* rates; } ;
struct ieee80211_tx_info {int flags; TYPE_5__ status; } ;
struct ieee80211_supported_band {size_t band; } ;
struct ieee80211_sta {scalar_t__* supp_rates; scalar_t__ drv_priv; } ;
struct ieee80211_hdr {int frame_control; } ;
typedef enum mac80211_rate_control_flags { ____Placeholder_mac80211_rate_control_flags } mac80211_rate_control_flags ;
struct TYPE_9__ {int flags; int idx; int count; } ;
struct TYPE_8__ {int rate_n_flags; } ;
struct TYPE_7__ {TYPE_1__* bt_params; } ;
struct TYPE_6__ {scalar_t__ advanced_bt_coexist; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct iwl_priv*,char*,...) ;
 int FUNC_2 (struct iwl_priv*,char*) ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 struct iwl_priv* FUNC_3 (struct iwl_op_mode*) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct iwl_priv*,struct iwl_rxon_context*,struct iwl_link_quality_cmd*,int ,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (struct iwl_priv*,struct iwl_rxon_context*,struct iwl_lq_sta*) ;
 int FUNC_9 (struct iwl_scale_tbl_info*,int,int,int) ;
 int FUNC_10 (int,scalar_t__,struct iwl_scale_tbl_info*,int*) ;
 int FUNC_11 (struct iwl_priv*,struct iwl_lq_sta*) ;
 int FUNC_12 (struct iwl_priv*,struct sk_buff*,struct ieee80211_sta*,struct iwl_lq_sta*) ;
 int FUNC_13 (struct iwl_lq_sta*,int) ;
 scalar_t__ FUNC_14 (struct iwl_scale_tbl_info*,struct iwl_scale_tbl_info*) ;

__attribute__((used)) static void FUNC_15(void *VAR_18, struct ieee80211_supported_band *VAR_19,
    struct ieee80211_sta *VAR_20, void *VAR_21,
    struct sk_buff *VAR_22)
{
 int VAR_23;
 int VAR_24;
 int VAR_25, VAR_26, VAR_27;
 struct iwl_lq_sta *VAR_28 = VAR_21;
 struct iwl_link_quality_cmd *VAR_29;
 struct ieee80211_hdr *VAR_30 = (struct ieee80211_hdr *)VAR_22->data;
 struct iwl_op_mode *VAR_31 = (struct iwl_op_mode *)VAR_18;
 struct iwl_priv *VAR_32 = FUNC_3(VAR_31);
 struct ieee80211_tx_info *VAR_33 = FUNC_0(VAR_22);
 enum mac80211_rate_control_flags VAR_34;
 u32 VAR_35;
 struct iwl_scale_tbl_info VAR_36;
 struct iwl_scale_tbl_info *VAR_37, *VAR_38, *VAR_39;
 struct iwl_station_priv *VAR_40 = (void *)VAR_20->drv_priv;
 struct iwl_rxon_context *VAR_41 = VAR_40->ctx;

 FUNC_2(VAR_32, "get frame ack response, update rate scale window\n");


 if (!VAR_28) {
  FUNC_1(VAR_32, "Station rate scaling not created yet.\n");
  return;
 } else if (!VAR_28->drv) {
  FUNC_1(VAR_32, "Rate scaling not initialized yet.\n");
  return;
 }

 if (!FUNC_4(VAR_30->frame_control) ||
     VAR_33->flags & VAR_4)
  return;


 if ((VAR_33->flags & VAR_3) &&
     !(VAR_33->flags & VAR_11))
  return;
 VAR_29 = &VAR_28->lq;
 VAR_35 = FUNC_6(VAR_29->rs_table[0].rate_n_flags);
 FUNC_10(VAR_35, VAR_32->band, &VAR_36, &VAR_25);
 if (VAR_32->band == VAR_2)
  VAR_25 -= VAR_12;
 VAR_34 = VAR_33->status.rates[0].flags;
 VAR_26 = VAR_33->status.rates[0].idx;

 if (VAR_34 & VAR_8) {
  VAR_26 &= VAR_15;
  if (VAR_26 >= (VAR_14 - VAR_12))
   VAR_26++;




  if (VAR_32->band == VAR_1)
   VAR_26 += VAR_12;
 }

 if ((VAR_26 < 0) ||
     (VAR_36.is_SGI != !!(VAR_34 & VAR_9)) ||
     (VAR_36.is_ht40 != !!(VAR_34 & VAR_5)) ||
     (VAR_36.is_dup != !!(VAR_34 & VAR_6)) ||
     (VAR_36.ant_type != VAR_33->status.antenna) ||
     (!!(VAR_35 & VAR_17) != !!(VAR_34 & VAR_8)) ||
     (!!(VAR_35 & VAR_16) != !!(VAR_34 & VAR_7)) ||
     (VAR_25 != VAR_26)) {
  FUNC_1(VAR_32, "initial rate %d does not match %d (0x%x)\n", VAR_26, VAR_25, VAR_35);





  VAR_28->missed_rate_counter++;
  if (VAR_28->missed_rate_counter > VAR_13) {
   VAR_28->missed_rate_counter = 0;
   FUNC_5(VAR_32, VAR_41, &VAR_28->lq, VAR_0, 0);
  }

  return;
 } else

  VAR_28->missed_rate_counter = 0;


 if (FUNC_14(&VAR_36,
    &(VAR_28->lq_info[VAR_28->active_tbl]))) {
  VAR_37 = &(VAR_28->lq_info[VAR_28->active_tbl]);
  VAR_38 = &(VAR_28->lq_info[1 - VAR_28->active_tbl]);
 } else if (FUNC_14(&VAR_36,
    &VAR_28->lq_info[1 - VAR_28->active_tbl])) {
  VAR_37 = &(VAR_28->lq_info[1 - VAR_28->active_tbl]);
  VAR_38 = &(VAR_28->lq_info[VAR_28->active_tbl]);
 } else {
  FUNC_1(VAR_32, "Neither active nor search matches tx rate\n");
  VAR_39 = &(VAR_28->lq_info[VAR_28->active_tbl]);
  FUNC_1(VAR_32, "active- lq:%x, ant:%x, SGI:%d\n",
   VAR_39->lq_type, VAR_39->ant_type, VAR_39->is_SGI);
  VAR_39 = &(VAR_28->lq_info[1 - VAR_28->active_tbl]);
  FUNC_1(VAR_32, "search- lq:%x, ant:%x, SGI:%d\n",
   VAR_39->lq_type, VAR_39->ant_type, VAR_39->is_SGI);
  FUNC_1(VAR_32, "actual- lq:%x, ant:%x, SGI:%d\n",
   VAR_36.lq_type, VAR_36.ant_type, VAR_36.is_SGI);




  FUNC_13(VAR_28, 1);
  goto done;
 }
 if (VAR_33->flags & VAR_11) {
  VAR_35 = FUNC_6(VAR_29->rs_table[0].rate_n_flags);
  FUNC_10(VAR_35, VAR_32->band, &VAR_36,
    &VAR_25);
  FUNC_9(VAR_37, VAR_25,
       VAR_33->status.ampdu_len,
       VAR_33->status.ampdu_ack_len);


  if (VAR_28->stay_in_tbl) {
   VAR_28->total_success += VAR_33->status.ampdu_ack_len;
   VAR_28->total_failed += (VAR_33->status.ampdu_len -
     VAR_33->status.ampdu_ack_len);
  }
 } else {



  VAR_24 = VAR_33->status.rates[0].count - 1;

  VAR_24 = FUNC_7(VAR_24, 15);


  VAR_23 = !!(VAR_33->flags & VAR_10);

  for (VAR_27 = 0; VAR_27 <= VAR_24; ++VAR_27) {
   VAR_35 = FUNC_6(VAR_29->rs_table[VAR_27].rate_n_flags);
   FUNC_10(VAR_35, VAR_32->band,
     &VAR_36, &VAR_25);




   if (FUNC_14(&VAR_36, VAR_37))
    VAR_39 = VAR_37;
   else if (FUNC_14(&VAR_36, VAR_38))
    VAR_39 = VAR_38;
   else
    continue;
   FUNC_9(VAR_39, VAR_25, 1,
        VAR_27 < VAR_24 ? 0 : VAR_23);
  }


  if (VAR_28->stay_in_tbl) {
   VAR_28->total_success += VAR_23;
   VAR_28->total_failed += VAR_24 + (1 - VAR_23);
  }
 }

 VAR_28->last_rate_n_flags = VAR_35;
done:

 if (VAR_20 && VAR_20->supp_rates[VAR_19->band])
  FUNC_12(VAR_32, VAR_22, VAR_20, VAR_28);






 if (VAR_32->cfg->bt_params && VAR_32->cfg->bt_params->advanced_bt_coexist)
  FUNC_8(VAR_32, VAR_41, VAR_28);
}
