
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_vif {int dummy; } ;
struct TYPE_2__ {scalar_t__ ht_supported; } ;
struct ieee80211_sta {TYPE_1__ ht_cap; scalar_t__ drv_priv; } ;
struct ieee80211_hw {struct ar9170* priv; } ;
struct carl9170_sta_tid {scalar_t__ state; } ;
struct carl9170_sta_info {int ht_sta; int * agg; } ;
struct ar9170 {int tx_ampdu_list_lock; } ;


 unsigned int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct ar9170*) ;
 struct carl9170_sta_tid* FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct ieee80211_hw *VAR_1,
    struct ieee80211_vif *VAR_2,
    struct ieee80211_sta *VAR_3)
{
 struct ar9170 *VAR_4 = VAR_1->priv;
 struct carl9170_sta_info *VAR_5 = (void *) VAR_3->drv_priv;
 unsigned int VAR_6;
 bool VAR_7 = 0;

 if (VAR_3->ht_cap.ht_supported) {

  VAR_5->ht_sta = 0;

  FUNC_4();
  for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_5->agg); VAR_6++) {
   struct carl9170_sta_tid *VAR_8;

   VAR_8 = FUNC_3(VAR_5->agg[VAR_6]);
   FUNC_1(VAR_5->agg[VAR_6], ((void*)0));

   if (!VAR_8)
    continue;

   FUNC_6(&VAR_4->tx_ampdu_list_lock);
   if (VAR_8->state > VAR_0)
    VAR_8->state = VAR_0;
   FUNC_7(&VAR_4->tx_ampdu_list_lock);
   VAR_7 = 1;
  }
  FUNC_5();

  if (VAR_7)
   FUNC_2(VAR_4);
 }

 return 0;
}
