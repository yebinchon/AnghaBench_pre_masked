
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int ampdu_len; int ampdu_ack_len; } ;
struct ieee80211_tx_info {TYPE_1__ status; } ;
struct ath_softc {int dummy; } ;
struct ath_rate_table {int probe_interval; } ;
struct ath_rate_priv {int* per; int probe_rate; int rate_max_phy; int probe_time; int hw_maxretry_pktcnt; } ;


 int FUNC_0 (int const*) ;

__attribute__((used)) static void FUNC_1(struct ath_softc *VAR_0,
         const struct ath_rate_table *VAR_1,
         struct ath_rate_priv *VAR_2,
      struct ieee80211_tx_info *VAR_3,
         int VAR_4, int VAR_5, int VAR_6,
         u32 VAR_7)
{
 int VAR_8, VAR_9;
 u8 VAR_10;
 static const u32 VAR_11[10] = {
  100 * 0 / 1,
  100 * 1 / 4,
  100 * 1 / 2,
  100 * 3 / 4,
  100 * 4 / 5,
  100 * 5 / 6,
  100 * 6 / 7,
  100 * 7 / 8,
  100 * 8 / 9,
  100 * 9 / 10
 };

 VAR_10 = VAR_2->per[VAR_4];
 VAR_9 = VAR_3->status.ampdu_len - VAR_3->status.ampdu_ack_len;

 if (VAR_5) {
  if (VAR_5 == 1) {
   VAR_2->per[VAR_4] += 30;
   if (VAR_2->per[VAR_4] > 100)
    VAR_2->per[VAR_4] = 100;
  } else {

   VAR_8 = FUNC_0(VAR_11);
   if (VAR_6 >= VAR_8)
    VAR_6 = VAR_8 - 1;


   VAR_2->per[VAR_4] =
    (u8)(VAR_10 - (VAR_10 >> 3) + (100 >> 3));
  }



  if (VAR_2->probe_rate == VAR_4)
   VAR_2->probe_rate = 0;

 } else {
  VAR_8 = FUNC_0(VAR_11);
  if (VAR_6 >= VAR_8)
   VAR_6 = VAR_8 - 1;

  if (VAR_9) {
   if (VAR_3->status.ampdu_len > 0) {
    int VAR_12, VAR_13;
    u8 VAR_14, VAR_15;

    VAR_13 = VAR_6 * VAR_3->status.ampdu_len +
     VAR_9;
    VAR_12 = VAR_3->status.ampdu_len * (VAR_6 + 1);
    VAR_14 = (100 * VAR_13 / VAR_12) >> 3;
    VAR_15 = (u8)(VAR_10 - (VAR_10 >> 3) + VAR_14);
    VAR_2->per[VAR_4] = VAR_15;
   }
  } else {
   VAR_2->per[VAR_4] =
    (u8)(VAR_10 - (VAR_10 >> 3) +
         (VAR_11[VAR_6] >> 3));
  }






  if (VAR_2->probe_rate && VAR_2->probe_rate == VAR_4) {
   if (VAR_6 > 0 || 2 * VAR_9 > VAR_3->status.ampdu_len) {







    VAR_2->probe_rate = 0;
   } else {
    u8 VAR_16 = 0;

    VAR_2->rate_max_phy =
     VAR_2->probe_rate;
    VAR_16 = VAR_2->probe_rate;

    if (VAR_2->per[VAR_16] > 30)
     VAR_2->per[VAR_16] = 20;

    VAR_2->probe_rate = 0;







    VAR_2->probe_time =
     VAR_7 - VAR_1->probe_interval / 2;
   }
  }

  if (VAR_6 > 0) {




   VAR_2->hw_maxretry_pktcnt = 0;
  } else {




   if (VAR_4 == VAR_2->rate_max_phy &&
       VAR_2->hw_maxretry_pktcnt < 255) {
    VAR_2->hw_maxretry_pktcnt++;
   }

  }
 }
}
