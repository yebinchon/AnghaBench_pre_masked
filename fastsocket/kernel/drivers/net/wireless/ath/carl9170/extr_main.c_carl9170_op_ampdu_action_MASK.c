
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u16 ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_sta {int addr; scalar_t__ drv_priv; } ;
struct ieee80211_hw {struct ar9170* priv; } ;
struct carl9170_sta_tid {size_t hsn; size_t bsn; size_t snx; size_t tid; int state; int bitmap; int list; int lock; int queue; int tmp_list; int max; } ;
struct carl9170_sta_info {TYPE_1__* stats; int * agg; int ampdu_max_len; int ht_sta; } ;
struct ar9170 {int ampdu_work; int hw; int tx_ampdu_list_lock; int tx_ampdu_list; int tx_ampdu_list_len; } ;
typedef enum ieee80211_ampdu_mlme_action { ____Placeholder_ieee80211_ampdu_mlme_action } ieee80211_ampdu_mlme_action ;
struct TYPE_2__ {int clear; int req; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;







 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (struct ieee80211_vif*,int ,size_t) ;
 int FUNC_6 (struct ieee80211_vif*,int ,size_t) ;
 struct carl9170_sta_tid* FUNC_7 (int,int ) ;
 int FUNC_8 (int *,int *) ;
 scalar_t__ VAR_9 ;
 int FUNC_9 (int ,struct carl9170_sta_tid*) ;
 struct carl9170_sta_tid* FUNC_10 (int ) ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;

__attribute__((used)) static int FUNC_17(struct ieee80211_hw *VAR_10,
        struct ieee80211_vif *VAR_11,
        enum ieee80211_ampdu_mlme_action VAR_12,
        struct ieee80211_sta *VAR_13,
        u16 VAR_14, u16 *VAR_15, u8 VAR_16)
{
 struct ar9170 *VAR_17 = VAR_10->priv;
 struct carl9170_sta_info *VAR_18 = (void *) VAR_13->drv_priv;
 struct carl9170_sta_tid *VAR_19;

 if (VAR_9)
  return -VAR_7;

 switch (VAR_12) {
 case 131:
  if (!VAR_18->ht_sta)
   return -VAR_7;

  FUNC_11();
  if (FUNC_10(VAR_18->agg[VAR_14])) {
   FUNC_12();
   return -VAR_4;
  }

  VAR_19 = FUNC_7(sizeof(struct carl9170_sta_tid),
       VAR_8);
  if (!VAR_19) {
   FUNC_12();
   return -VAR_6;
  }

  VAR_19->hsn = VAR_19->bsn = VAR_19->snx = (*VAR_15);
  VAR_19->state = VAR_2;
  VAR_19->tid = VAR_14;
  VAR_19->max = VAR_18->ampdu_max_len;

  FUNC_0(&VAR_19->list);
  FUNC_0(&VAR_19->tmp_list);
  FUNC_13(&VAR_19->queue);
  FUNC_15(&VAR_19->lock);

  FUNC_14(&VAR_17->tx_ampdu_list_lock);
  VAR_17->tx_ampdu_list_len++;
  FUNC_8(&VAR_19->list, &VAR_17->tx_ampdu_list);
  FUNC_9(VAR_18->agg[VAR_14], VAR_19);
  FUNC_16(&VAR_17->tx_ampdu_list_lock);
  FUNC_12();

  FUNC_5(VAR_11, VAR_13->addr, VAR_14);
  break;

 case 130:
 case 129:
 case 128:
  FUNC_11();
  VAR_19 = FUNC_10(VAR_18->agg[VAR_14]);
  if (VAR_19) {
   FUNC_14(&VAR_17->tx_ampdu_list_lock);
   if (VAR_19->state > VAR_3)
    VAR_19->state = VAR_3;
   FUNC_16(&VAR_17->tx_ampdu_list_lock);
  }

  FUNC_1(VAR_18->agg[VAR_14], ((void*)0));
  FUNC_12();

  FUNC_6(VAR_11, VAR_13->addr, VAR_14);
  FUNC_4(VAR_17->hw, &VAR_17->ampdu_work);
  break;

 case 132:
  FUNC_11();
  VAR_19 = FUNC_10(VAR_18->agg[VAR_14]);

  VAR_18->stats[VAR_14].clear = 1;
  VAR_18->stats[VAR_14].req = 0;

  if (VAR_19) {
   FUNC_3(VAR_19->bitmap, VAR_0);
   VAR_19->state = VAR_1;
  }
  FUNC_12();

  if (FUNC_2(!VAR_19))
   return -VAR_5;

  break;

 case 134:
 case 133:

  break;

 default:
  return -VAR_7;
 }

 return 0;
}
