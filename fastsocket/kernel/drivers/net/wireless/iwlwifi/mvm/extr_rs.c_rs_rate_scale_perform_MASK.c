
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct sk_buff {scalar_t__ data; } ;
struct iwl_scale_tbl_info {int* expected_tpt; scalar_t__ max_search; int current_rate; void* lq_type; struct iwl_rate_scale_data* win; } ;
struct iwl_rate_scale_data {scalar_t__ counter; int average_tpt; int success_ratio; int success_counter; } ;
struct iwl_mvm_tid_data {scalar_t__ state; } ;
struct iwl_mvm_sta {struct iwl_mvm_tid_data* tid_data; } ;
struct iwl_mvm {int dummy; } ;
struct iwl_lq_sta {int supp_rates; size_t band; int tx_agg_tid_en; int is_agg; int active_tbl; int is_green; int last_txrate_idx; int max_rate_idx; int last_tpt; int enable_counter; scalar_t__ action_counter; struct iwl_scale_tbl_info* lq_info; int stay_in_tbl; int lq; scalar_t__ search_better_tbl; } ;
struct ieee80211_tx_info {int flags; } ;
struct TYPE_2__ {int ht_supported; } ;
struct ieee80211_sta {int* supp_rates; TYPE_1__ ht_cap; scalar_t__ drv_priv; } ;
struct ieee80211_hdr {int frame_control; } ;
typedef int s8 ;
typedef int s32 ;


 int VAR_0 ;
 size_t VAR_1 ;
 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct iwl_mvm*,char*,...) ;
 int FUNC_2 (struct iwl_mvm*,char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 void* VAR_15 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (void*) ;
 scalar_t__ FUNC_5 (void*) ;
 scalar_t__ FUNC_6 (void*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct iwl_mvm*,int *,int ,int) ;
 int FUNC_9 (struct iwl_mvm*,struct iwl_scale_tbl_info*,int,int) ;
 int FUNC_10 (struct iwl_mvm*,struct iwl_lq_sta*,int ) ;
 int FUNC_11 (struct iwl_mvm*,int,int,void*) ;
 int FUNC_12 (struct iwl_lq_sta*,struct ieee80211_hdr*,void*) ;
 int FUNC_13 (struct iwl_mvm*,struct iwl_lq_sta*,struct ieee80211_sta*,int) ;
 int FUNC_14 (struct iwl_mvm*,struct iwl_lq_sta*,struct ieee80211_sta*,int) ;
 int FUNC_15 (struct iwl_mvm*,struct iwl_lq_sta*,struct ieee80211_sta*,int) ;
 int FUNC_16 (struct iwl_mvm*,struct iwl_lq_sta*,struct ieee80211_sta*,int) ;
 int FUNC_17 (struct iwl_rate_scale_data*) ;
 int FUNC_18 (struct iwl_mvm*,int,struct iwl_lq_sta*) ;
 int FUNC_19 (struct iwl_lq_sta*,int) ;
 int FUNC_20 (struct iwl_lq_sta*,struct ieee80211_hdr*) ;
 int FUNC_21 (struct iwl_mvm*,int,struct iwl_lq_sta*,struct ieee80211_sta*) ;
 int FUNC_22 (struct iwl_mvm*,struct iwl_lq_sta*,struct iwl_scale_tbl_info*,int,int) ;
 int FUNC_23 (struct ieee80211_sta*) ;

__attribute__((used)) static void FUNC_24(struct iwl_mvm *VAR_16,
      struct sk_buff *VAR_17,
      struct ieee80211_sta *VAR_18,
      struct iwl_lq_sta *VAR_19)
{
 struct ieee80211_tx_info *VAR_20 = FUNC_0(VAR_17);
 struct ieee80211_hdr *VAR_21 = (struct ieee80211_hdr *)VAR_17->data;
 int VAR_22 = VAR_12;
 int VAR_23 = VAR_12;
 int VAR_24;
 int VAR_25;
 struct iwl_rate_scale_data *VAR_26 = ((void*)0);
 int VAR_27 = VAR_6;
 int VAR_28 = VAR_6;
 int VAR_29 = VAR_6;
 u32 VAR_30;
 s8 VAR_31 = 0;
 u16 VAR_32;
 u8 VAR_33 = 0;
 struct iwl_scale_tbl_info *VAR_34, *VAR_35;
 u16 VAR_36 = 0;
 u8 VAR_37 = 0;
 u8 VAR_38 = 0;
 u8 VAR_39 = 0;
 u16 VAR_40;
 s32 VAR_41;
 u8 VAR_42 = VAR_7;
 struct iwl_mvm_sta *VAR_43 = (void *)VAR_18->drv_priv;
 struct iwl_mvm_tid_data *VAR_44;

 FUNC_1(VAR_16, "rate scale calculate new rate for skb\n");



 if (!FUNC_3(VAR_21->frame_control) ||
     VAR_20->flags & VAR_2)
  return;

 VAR_19->supp_rates = VAR_18->supp_rates[VAR_19->band];

 VAR_42 = FUNC_20(VAR_19, VAR_21);
 if ((VAR_42 != VAR_7) &&
     (VAR_19->tx_agg_tid_en & (1 << VAR_42))) {
  VAR_44 = &VAR_43->tid_data[VAR_42];
  if (VAR_44->state == VAR_3)
   VAR_19->is_agg = 0;
  else
   VAR_19->is_agg = 1;
 } else {
  VAR_19->is_agg = 0;
 }






 if (!VAR_19->search_better_tbl)
  VAR_38 = VAR_19->active_tbl;
 else
  VAR_38 = 1 - VAR_19->active_tbl;

 VAR_34 = &(VAR_19->lq_info[VAR_38]);
 if (FUNC_4(VAR_34->lq_type))
  VAR_19->is_green = 0;
 else
  VAR_19->is_green = FUNC_23(VAR_18);
 VAR_37 = VAR_19->is_green;


 VAR_24 = VAR_19->last_txrate_idx;

 FUNC_1(VAR_16, "Rate scale index %d for type %d\n", VAR_24,
         VAR_34->lq_type);


 VAR_32 = FUNC_12(VAR_19, VAR_21, VAR_34->lq_type);

 FUNC_1(VAR_16, "mask 0x%04X\n", VAR_32);


 if (FUNC_4(VAR_34->lq_type)) {
  if (VAR_19->band == VAR_1)

   VAR_36 = (u16) (VAR_32 &
    (VAR_19->supp_rates << VAR_5));
  else
   VAR_36 = (u16) (VAR_32 &
            VAR_19->supp_rates);

 } else {
  VAR_36 = VAR_32;
 }

 if (!VAR_36)
  VAR_36 = VAR_32;

 if (!((1 << VAR_24) & VAR_36)) {
  FUNC_2(VAR_16, "Current Rate is not valid\n");
  if (VAR_19->search_better_tbl) {

   VAR_34->lq_type = VAR_15;
   VAR_19->search_better_tbl = 0;
   VAR_34 = &(VAR_19->lq_info[VAR_19->active_tbl]);

   VAR_24 = FUNC_7(VAR_34->current_rate);
   FUNC_22(VAR_16, VAR_19, VAR_34, VAR_24, VAR_37);
  }
  return;
 }


 if (!VAR_34->expected_tpt) {
  FUNC_2(VAR_16, "tbl->expected_tpt is NULL\n");
  return;
 }


 if ((VAR_19->max_rate_idx != -1) &&
     (VAR_19->max_rate_idx < VAR_24)) {
  VAR_24 = VAR_19->max_rate_idx;
  VAR_33 = 1;
  VAR_26 = &(VAR_34->win[VAR_24]);
  goto lq_update;
 }

 VAR_26 = &(VAR_34->win[VAR_24]);
 VAR_30 = VAR_26->counter - VAR_26->success_counter;
 if ((VAR_30 < VAR_13) &&
     (VAR_26->success_counter < VAR_14)) {
  FUNC_1(VAR_16,
          "LQ: still below TH. succ=%d total=%d for index %d\n",
          VAR_26->success_counter, VAR_26->counter, VAR_24);


  VAR_26->average_tpt = VAR_6;



  FUNC_19(VAR_19, 0);

  goto out;
 }


 if (VAR_26->average_tpt != ((VAR_26->success_ratio *
   VAR_34->expected_tpt[VAR_24] + 64) / 128)) {
  FUNC_2(VAR_16,
   "expected_tpt should have been calculated by now\n");
  VAR_26->average_tpt = ((VAR_26->success_ratio *
     VAR_34->expected_tpt[VAR_24] + 64) / 128);
 }


 if (VAR_19->search_better_tbl) {



  if (VAR_26->average_tpt > VAR_19->last_tpt) {
   FUNC_1(VAR_16,
           "LQ: SWITCHING TO NEW TABLE suc=%d cur-tpt=%d old-tpt=%d\n",
           VAR_26->success_ratio,
           VAR_26->average_tpt,
           VAR_19->last_tpt);

   if (!FUNC_4(VAR_34->lq_type))
    VAR_19->enable_counter = 1;


   VAR_19->active_tbl = VAR_38;
   VAR_27 = VAR_26->average_tpt;

  } else {
   FUNC_1(VAR_16,
           "LQ: GOING BACK TO THE OLD TABLE suc=%d cur-tpt=%d old-tpt=%d\n",
           VAR_26->success_ratio,
           VAR_26->average_tpt,
           VAR_19->last_tpt);


   VAR_34->lq_type = VAR_15;


   VAR_38 = VAR_19->active_tbl;
   VAR_34 = &(VAR_19->lq_info[VAR_38]);


   VAR_24 = FUNC_7(VAR_34->current_rate);
   VAR_27 = VAR_19->last_tpt;


   VAR_33 = 1;
  }



  VAR_19->search_better_tbl = 0;
  VAR_39 = 1;
  goto lq_update;
 }



 VAR_40 = FUNC_11(VAR_16, VAR_24, VAR_36,
     VAR_34->lq_type);
 VAR_22 = VAR_40 & 0xff;
 VAR_23 = (VAR_40 >> 8) & 0xff;


 if ((VAR_19->max_rate_idx != -1) &&
     (VAR_19->max_rate_idx < VAR_23))
  VAR_23 = VAR_12;

 VAR_41 = VAR_26->success_ratio;


 VAR_27 = VAR_26->average_tpt;
 if (VAR_22 != VAR_12)
  VAR_28 = VAR_34->win[VAR_22].average_tpt;
 if (VAR_23 != VAR_12)
  VAR_29 = VAR_34->win[VAR_23].average_tpt;

 VAR_31 = 0;


 if ((VAR_41 <= VAR_9) || (VAR_27 == 0)) {
  FUNC_1(VAR_16,
          "decrease rate because of low success_ratio\n");
  VAR_31 = -1;

 } else if ((VAR_28 == VAR_6) &&
     (VAR_29 == VAR_6)) {
  if (VAR_23 != VAR_12 && VAR_41 >= VAR_11)
   VAR_31 = 1;
  else if (VAR_22 != VAR_12)
   VAR_31 = 0;
 }



 else if ((VAR_28 != VAR_6) &&
   (VAR_29 != VAR_6) &&
   (VAR_28 < VAR_27) &&
   (VAR_29 < VAR_27))
  VAR_31 = 0;



 else {

  if (VAR_29 != VAR_6) {

   if (VAR_29 > VAR_27 &&
       VAR_41 >= VAR_11) {
    VAR_31 = 1;
   } else {
    VAR_31 = 0;
   }


  } else if (VAR_28 != VAR_6) {

   if (VAR_28 > VAR_27) {
    FUNC_1(VAR_16,
            "decrease rate because of low tpt\n");
    VAR_31 = -1;
   } else if (VAR_41 >= VAR_11) {
    VAR_31 = 1;
   }
  }
 }



 if ((VAR_31 == -1) && (VAR_22 != VAR_12) &&
     ((VAR_41 > VAR_10) ||
      (VAR_27 > (100 * VAR_34->expected_tpt[VAR_22]))))
  VAR_31 = 0;

 switch (VAR_31) {
 case -1:

  if (VAR_22 != VAR_12) {
   VAR_33 = 1;
   VAR_24 = VAR_22;
  }

  break;
 case 1:

  if (VAR_23 != VAR_12) {
   VAR_33 = 1;
   VAR_24 = VAR_23;
  }

  break;
 case 0:

 default:
  break;
 }

 FUNC_1(VAR_16,
         "choose rate scale index %d action %d low %d high %d type %d\n",
         VAR_24, VAR_31, VAR_22, VAR_23, VAR_34->lq_type);

lq_update:

 if (VAR_33)
  FUNC_22(VAR_16, VAR_19, VAR_34, VAR_24, VAR_37);

 FUNC_19(VAR_19, 0);







 if (!VAR_33 && !VAR_39 &&
     !VAR_19->stay_in_tbl && VAR_26->counter) {

  VAR_19->last_tpt = VAR_27;



  if (FUNC_4(VAR_34->lq_type))
   FUNC_13(VAR_16, VAR_19, VAR_18, VAR_24);
  else if (FUNC_6(VAR_34->lq_type))
   FUNC_16(VAR_16, VAR_19, VAR_18, VAR_24);
  else if (FUNC_5(VAR_34->lq_type))
   FUNC_14(VAR_16, VAR_19, VAR_18, VAR_24);
  else
   FUNC_15(VAR_16, VAR_19, VAR_18, VAR_24);


  if (VAR_19->search_better_tbl) {

   VAR_34 = &(VAR_19->lq_info[(1 - VAR_19->active_tbl)]);
   for (VAR_25 = 0; VAR_25 < VAR_8; VAR_25++)
    FUNC_17(&(VAR_34->win[VAR_25]));


   VAR_24 = FUNC_7(VAR_34->current_rate);

   FUNC_1(VAR_16,
           "Switch current  mcs: %X index: %d\n",
           VAR_34->current_rate, VAR_24);
   FUNC_10(VAR_16, VAR_19, VAR_34->current_rate);
   FUNC_8(VAR_16, &VAR_19->lq, VAR_0, 0);
  } else {
   VAR_39 = 1;
  }
 }

 if (VAR_39 && !VAR_19->stay_in_tbl) {





  VAR_35 = &(VAR_19->lq_info[VAR_19->active_tbl]);
  if (FUNC_4(VAR_35->lq_type) && !VAR_18->ht_cap.ht_supported &&
      VAR_19->action_counter > VAR_35->max_search) {
   FUNC_1(VAR_16, "LQ: STAY in legacy table\n");
   FUNC_18(VAR_16, 1, VAR_19);
  }




  if (VAR_19->enable_counter &&
      (VAR_19->action_counter >= VAR_35->max_search)) {
   if ((VAR_19->last_tpt > VAR_4) &&
       (VAR_19->tx_agg_tid_en & (1 << VAR_42)) &&
       (VAR_42 != VAR_7)) {
    VAR_44 = &VAR_43->tid_data[VAR_42];
    if (VAR_44->state == VAR_3) {
     FUNC_1(VAR_16,
             "try to aggregate tid %d\n",
             VAR_42);
     FUNC_21(VAR_16, VAR_42,
         VAR_19, VAR_18);
    }
   }
   FUNC_18(VAR_16, 0, VAR_19);
  }
 }

out:
 VAR_34->current_rate = FUNC_9(VAR_16, VAR_34, VAR_24, VAR_37);
 VAR_19->last_txrate_idx = VAR_24;
}
