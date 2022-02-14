
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {scalar_t__ data; } ;
struct iwl_scale_tbl_info {int is_SGI; int is_ht40; int ant_type; int lq_type; } ;
struct iwl_op_mode {int dummy; } ;
struct iwl_mvm {int dummy; } ;
struct iwl_lq_cmd {int * rs_table; } ;
struct iwl_lq_sta {scalar_t__ missed_rate_counter; size_t active_tbl; int total_success; int total_failed; int last_rate_n_flags; scalar_t__ stay_in_tbl; struct iwl_scale_tbl_info* lq_info; struct iwl_lq_cmd lq; int drv; } ;
struct TYPE_4__ {int antenna; int ampdu_len; int ampdu_ack_len; TYPE_1__* rates; } ;
struct ieee80211_tx_info {int flags; scalar_t__ band; TYPE_2__ status; } ;
struct ieee80211_supported_band {size_t band; } ;
struct ieee80211_sta {scalar_t__* supp_rates; } ;
struct ieee80211_hdr {int frame_control; } ;
typedef enum mac80211_rate_control_flags { ____Placeholder_mac80211_rate_control_flags } mac80211_rate_control_flags ;
struct TYPE_3__ {int flags; int idx; int count; } ;


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
 int FUNC_1 (struct iwl_mvm*,char*,...) ;
 int FUNC_2 (struct iwl_mvm*,char*) ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 struct iwl_mvm* FUNC_3 (struct iwl_op_mode*) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct iwl_mvm*,struct iwl_lq_cmd*,int ,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (struct iwl_scale_tbl_info*,int,int,int) ;
 int FUNC_9 (int,scalar_t__,struct iwl_scale_tbl_info*,int*) ;
 int FUNC_10 (struct iwl_mvm*,struct sk_buff*,struct ieee80211_sta*,struct iwl_lq_sta*) ;
 int FUNC_11 (struct iwl_lq_sta*,int) ;
 scalar_t__ FUNC_12 (struct iwl_scale_tbl_info*,struct iwl_scale_tbl_info*) ;

__attribute__((used)) static void FUNC_13(void *VAR_17, struct ieee80211_supported_band *VAR_18,
    struct ieee80211_sta *VAR_19, void *VAR_20,
    struct sk_buff *VAR_21)
{
 int VAR_22;
 int VAR_23;
 int VAR_24, VAR_25, VAR_26;
 struct iwl_lq_sta *VAR_27 = VAR_20;
 struct iwl_lq_cmd *VAR_28;
 struct ieee80211_hdr *VAR_29 = (struct ieee80211_hdr *)VAR_21->data;
 struct iwl_op_mode *VAR_30 = (struct iwl_op_mode *)VAR_17;
 struct iwl_mvm *VAR_31 = FUNC_3(VAR_30);
 struct ieee80211_tx_info *VAR_32 = FUNC_0(VAR_21);
 enum mac80211_rate_control_flags VAR_33;
 u32 VAR_34;
 struct iwl_scale_tbl_info VAR_35;
 struct iwl_scale_tbl_info *VAR_36, *VAR_37, *VAR_38;

 FUNC_2(VAR_31,
        "get frame ack response, update rate scale window\n");


 if (!VAR_27) {
  FUNC_1(VAR_31, "Station rate scaling not created yet.\n");
  return;
 } else if (!VAR_27->drv) {
  FUNC_1(VAR_31, "Rate scaling not initialized yet.\n");
  return;
 }

 if (!FUNC_4(VAR_29->frame_control) ||
     VAR_32->flags & VAR_4)
  return;


 if ((VAR_32->flags & VAR_3) &&
     !(VAR_32->flags & VAR_10))
  return;
 VAR_28 = &VAR_27->lq;
 VAR_34 = FUNC_6(VAR_28->rs_table[0]);
 FUNC_9(VAR_34, VAR_32->band, &VAR_35, &VAR_24);
 if (VAR_32->band == VAR_2)
  VAR_24 -= VAR_11;
 VAR_33 = VAR_32->status.rates[0].flags;
 VAR_25 = VAR_32->status.rates[0].idx;

 if (VAR_33 & VAR_7) {

  VAR_25 &= VAR_15;
  if (VAR_25 >= (VAR_13 - VAR_11))
   VAR_25++;




  if (VAR_32->band == VAR_1)
   VAR_25 += VAR_11;
 }

 if ((VAR_25 < 0) ||
     (VAR_35.is_SGI != !!(VAR_33 & VAR_8)) ||
     (VAR_35.is_ht40 != !!(VAR_33 & VAR_5)) ||
     (VAR_35.ant_type != VAR_32->status.antenna) ||
     (!!(VAR_34 & VAR_16) !=
    !!(VAR_33 & VAR_7)) ||
     (!!(VAR_34 & VAR_14) !=
    !!(VAR_33 & VAR_6)) ||
     (VAR_24 != VAR_25)) {
  FUNC_1(VAR_31,
          "initial rate %d does not match %d (0x%x)\n",
          VAR_25, VAR_24, VAR_34);





  VAR_27->missed_rate_counter++;
  if (VAR_27->missed_rate_counter > VAR_12) {
   VAR_27->missed_rate_counter = 0;
   FUNC_5(VAR_31, &VAR_27->lq, VAR_0, 0);
  }

  return;
 } else

  VAR_27->missed_rate_counter = 0;


 if (FUNC_12(&VAR_35,
          &(VAR_27->lq_info[VAR_27->active_tbl]))) {
  VAR_36 = &(VAR_27->lq_info[VAR_27->active_tbl]);
  VAR_37 = &(VAR_27->lq_info[1 - VAR_27->active_tbl]);
 } else if (FUNC_12(
   &VAR_35, &VAR_27->lq_info[1 - VAR_27->active_tbl])) {
  VAR_36 = &(VAR_27->lq_info[1 - VAR_27->active_tbl]);
  VAR_37 = &(VAR_27->lq_info[VAR_27->active_tbl]);
 } else {
  FUNC_1(VAR_31,
          "Neither active nor search matches tx rate\n");
  VAR_38 = &(VAR_27->lq_info[VAR_27->active_tbl]);
  FUNC_1(VAR_31, "active- lq:%x, ant:%x, SGI:%d\n",
          VAR_38->lq_type, VAR_38->ant_type,
          VAR_38->is_SGI);
  VAR_38 = &(VAR_27->lq_info[1 - VAR_27->active_tbl]);
  FUNC_1(VAR_31, "search- lq:%x, ant:%x, SGI:%d\n",
          VAR_38->lq_type, VAR_38->ant_type,
          VAR_38->is_SGI);
  FUNC_1(VAR_31, "actual- lq:%x, ant:%x, SGI:%d\n",
          VAR_35.lq_type, VAR_35.ant_type,
          VAR_35.is_SGI);




  FUNC_11(VAR_27, 1);
  goto done;
 }
 if (VAR_32->flags & VAR_10) {
  VAR_34 = FUNC_6(VAR_28->rs_table[0]);
  FUNC_9(VAR_34, VAR_32->band, &VAR_35,
      &VAR_24);
  FUNC_8(VAR_36, VAR_24,
       VAR_32->status.ampdu_len,
       VAR_32->status.ampdu_ack_len);


  if (VAR_27->stay_in_tbl) {
   VAR_27->total_success += VAR_32->status.ampdu_ack_len;
   VAR_27->total_failed += (VAR_32->status.ampdu_len -
     VAR_32->status.ampdu_ack_len);
  }
 } else {



  VAR_23 = VAR_32->status.rates[0].count - 1;

  VAR_23 = FUNC_7(VAR_23, 15);


  VAR_22 = !!(VAR_32->flags & VAR_9);

  for (VAR_26 = 0; VAR_26 <= VAR_23; ++VAR_26) {
   VAR_34 = FUNC_6(VAR_28->rs_table[VAR_26]);
   FUNC_9(VAR_34, VAR_32->band,
       &VAR_35, &VAR_24);




   if (FUNC_12(&VAR_35, VAR_36))
    VAR_38 = VAR_36;
   else if (FUNC_12(&VAR_35, VAR_37))
    VAR_38 = VAR_37;
   else
    continue;
   FUNC_8(VAR_38, VAR_24, 1,
        VAR_26 < VAR_23 ? 0 : VAR_22);
  }


  if (VAR_27->stay_in_tbl) {
   VAR_27->total_success += VAR_22;
   VAR_27->total_failed += VAR_23 + (1 - VAR_22);
  }
 }

 VAR_27->last_rate_n_flags = VAR_34;
done:

 if (VAR_19 && VAR_19->supp_rates[VAR_18->band])
  FUNC_10(VAR_31, VAR_21, VAR_19, VAR_27);
}
